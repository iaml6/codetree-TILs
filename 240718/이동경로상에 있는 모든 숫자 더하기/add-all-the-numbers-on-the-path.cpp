#include <iostream>
#define MAX_T 100000
#define MAX_N 99
using namespace std;

int n,t;
int square[MAX_N][MAX_N];
char order[MAX_T];


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>t;
    for(int i=0;i<t;i++){
        cin>>order[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>square[i][j];
        }
    }
    int start_x=n/2,start_y=n/2;
    int sum=0;
    sum+=square[start_x][start_y];
    int dir=0;
    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
    for(int i=0;i<t;i++){
        if(order[i]=='L'){
            if(dir==0){
                dir=3;
            }
            else{
                dir--;
            }
        }
        else if(order[i]=='R'){
            if(dir==3){
                dir=0;
            }
            else{
                dir++;
            }
        }
        else{
            if(start_x+dx[dir]>=0&&start_x+dx[dir]<n&&start_y+dy[dir]>=0&&start_y+dy[dir]<n){
                start_x+=dx[dir];
                start_y+=dy[dir];
                sum+=square[start_x][start_y];
            }
        }
    }
    cout<<sum;

    
    return 0;
}