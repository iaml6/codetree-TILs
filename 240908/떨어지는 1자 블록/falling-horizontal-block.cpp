#include <iostream>
#define MAX_N 100
using namespace std;

int n,m,k;
int square[MAX_N+1][MAX_N+1];
bool Empty(int x,int y,int z) {// x는 시작 y는 끝 z는 세로 위치
    for(int i=x;i<=y;i++){
        if(square[z][i]!=0){
            return false;
        }
    }
    return true;
}  

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>square[i][j];
        }
    }
    int prev=-10;
    for(int i=1;i<=n;i++){
        if(!Empty(k,k+m-1,i)){
            prev=i;
            break;
        }
    }
    if(prev==-10){
        for(int i=k;i<=k+m-1;i++){
            square[n][i]=1;
        }
    }
    else{
        for(int i=k;i<=k+m-1;i++){
            square[prev-1][i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<square[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}