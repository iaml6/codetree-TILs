#include <iostream>
#define MAX_N 100
using namespace std;

int n;
int num[MAX_N][MAX_N];

int dx[4]={0,-1,0,1},dy[4]={1,0,-1,0};
int x,y;
int first=1;
int start=0;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    x=n/2;
    y=n/2;
    if(n==1){
        cout<<"1";
        return 0;
    }
    
    else{
       
    
        num[x][y]=1;
        for(int i=1;i<n;i++){
            if(i<n-1){ // 1에서 n-2까지는 각 수 만큼 이동하고 방향을 바꾸는 것을 2번한다.
                for(int j=1;j<=i;j++){
                first++;
                x=x+dx[start];
                y=y+dy[start];
                num[x][y]=first;
                }
                start=(start+1)%4;
                for(int j=1;j<=i;j++){
                first++;
                x=x+dx[start];
                y=y+dy[start];
                num[x][y]=first;
                }
                start=(start+1)%4;
            }
            if(i==n-1){ // n-1까지는 각 수 만큼 이동하고 방향을 바꾸는 것을 3번한다.
            
            for(int j=1;j<=i;j++){
                first++;
                x=x+dx[start];
                y=y+dy[start];
                num[x][y]=first;
            }
            start=(start+1)%4;
            for(int j=1;j<=i;j++){
                first++;
                x=x+dx[start];
                y=y+dy[start];
                num[x][y]=first;
            }
            start=(start+1)%4;for(int j=1;j<=i;j++){
                first++;
                x=x+dx[start];
                y=y+dy[start];
                num[x][y]=first;
            }
            
                  }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
   
    return 0;
}