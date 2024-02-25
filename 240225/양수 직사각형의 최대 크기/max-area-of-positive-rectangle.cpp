#include <iostream>
#include <algorithm>
using namespace std;

int num[20][20]={};
bool Yang(int a,int b, int startx,int starty){
    for(int i=startx;i<=startx+a-1;i++){
        for(int j=starty;j<=starty+b-1;j++){
            if(num[i][j]<0){
                return false;
            }
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num[i][j];
        }
    }
    int hab=-1;
    for(int a=1;a<=n;a++){
        for(int b=1;b<=m;b++){
            
            for(int i=0;i<n-a+1;i++){
                for(int j=0;j<n-b+1;j++){
                    if(Yang(a,b,i,j)){
                        hab=max(hab,a*b);
                    }
                }
            }
        }
    }
    cout<<hab;
    return 0;
}