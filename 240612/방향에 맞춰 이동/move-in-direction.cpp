#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    char dir[n];
    int dis[n];
    int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
    int nx,ny;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        cin>>dir[i]>>dis[i];
        if(dir[i]=='W'){
            for(int j=0;j<dis[i];j++){
                x+=dx[2];
                y+=dy[2];
            }
           
        }
        else if(dir[i]=='S'){
            for(int j=0;j<dis[i];j++){
                x+=dx[1];
                y+=dy[1];
            }
        }
        else if(dir[i]=='N'){
            for(int j=0;j<dis[i];j++){
                x+=dx[3];
                y+=dy[3];
            }
        }
        else if(dir[i]=='E'){
           for(int j=0;j<dis[i];j++){
                x+=dx[0];
                y+=dy[0];
            }
        }
    }

    cout<<x<<" "<<y;

    return 0;
}