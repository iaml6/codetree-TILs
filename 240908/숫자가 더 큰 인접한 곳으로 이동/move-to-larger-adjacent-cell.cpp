#include <iostream>
#define MAX_N 100
using namespace std;

int n,r,c;
int square[MAX_N+1][MAX_N+1];
int num[MAX_N*MAX_N]={};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

bool In_Range(int a,int b){
    return (a>0&&a<=n&&b>0&&b<=n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>r>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>square[i][j];
        }
    }

    int start=0;
    num[start]=square[r][c];
    int x=r;
    int y=c;
    
    while(true){
        int count=0;
        for(int i=0;i<4;i++){
            int changex=x+dx[i];
            int changey=y+dy[i];
            if(In_Range(changex,changey)){
                if(square[changex][changey]>square[x][y]){
                    start++;
                    num[start]=square[changex][changey];
                    x=changex;
                    y=changey;
                    break;
                }
            }
            if(!In_Range(changex,changey)){
                count++;
            }
            else if(square[changex][changey]<=square[x][y]){
                count++;
            }
        }
        
        
        if(count==4){
            break;
        }
    }
    for(int i=0;i<=start;i++){
        cout<<num[i]<<" ";
    }


    return 0;
}