#include <iostream>
#include <algorithm>
#define MAX_N 20
using namespace std;

int square[MAX_N][MAX_N];
int n;
int hab=0;

bool InRange(int a,int b){
    return (a>=0&&a<n&&b>=0&&b<n);
}

int Hab(int a,int b,int x,int y){
    int sum=0;
    int dx[4]={-1,-1,1,1},dy[4]={1,-1,-1,1};
    int dir[4]={x,y,x,y};
    for(int i=0;i<4;i++){
        
        for(int j=0;j<dir[i];j++){
            a+=dx[i];
            b+=dy[i];
            if(!InRange(a,b)){
                return 0;
            }
            sum+=square[a][b];
        }
        
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>square[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=1;k<n;k++){
                for(int l=1;l<n;l++){
                    hab=max(hab,Hab(i,j,k,l));
                }
            }
        }
    }
    cout<<hab;
    return 0;
}