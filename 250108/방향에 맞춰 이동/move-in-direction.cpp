#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
int dy[4]={0,-1,1,0};
int dx[4]={-1,0,0,1};

int main() {
    cin >> n;
    int x=0,y=0;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
        if(dir[i]=='W'){
            for(int j=0;j<dist[i];j++){
                x+=dx[0];
                y+=dy[0];
            }
        }
        else if(dir[i]=='S'){
            for(int j=0;j<dist[i];j++){
                x+=dx[1];
                y+=dy[1];
            }
        }
        else if(dir[i]=='N'){
            for(int j=0;j<dist[i];j++){
                x+=dx[2];
                y+=dy[2];
            }
        }
        else{
            for(int j=0;j<dist[i];j++){
                x+=dx[3];
                y+=dy[3];
            }
        }
    }
    cout<<x<<" "<<y;
    // Write your code here!

    return 0;
}