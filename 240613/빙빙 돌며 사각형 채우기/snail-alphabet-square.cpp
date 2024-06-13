#include <iostream>

#define MAX_NM 100
using namespace std;

int n,m;
char num[MAX_NM][MAX_NM];

int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int x=0,y=0;
int dir=0;

bool InRange(int a,int b){
    return (a>=0&&a<n&&b>=0&&b<m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int first=65;
    
    num[x][y]=first;
   
    for(int i=1;i<n*m;i++){
        int nx=x+dx[dir],ny=y+dy[dir];
        if(!InRange(nx,ny)||num[nx][ny]!=0){
            dir=(dir+1)%4;
        }

        x=x+dx[dir];
        y=y+dy[dir];
        if(num[x][y]==91){
           

        }
        num[x][y]=first+(i%26);
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}