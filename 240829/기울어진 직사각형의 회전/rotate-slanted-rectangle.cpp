#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int r,c,m1,m2,m3,m4,dir;
int square[MAX_N+1][MAX_N+1]={};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>square[i][j];
        }
    }
    cin>>r>>c>>m1>>m2>>m3>>m4>>dir;
    int spot[n*n]={};
    int start=0;
    spot[start]=square[r][c];
    if(dir==0){
        
    }
    for(int i=0;i<m1;i++){
        start++;
        r-=1;
        c+=1;
        spot[start]=square[r][c];
    }
    for(int i=0;i<m2;i++){
        start++;
        r-=1;
        c-=1;
        spot[start]=square[r][c];
    }
    for(int i=0;i<m3;i++){
        start++;
        r+=1;
        c-=1;
        spot[start]=square[r][c];
    }
    for(int i=0;i<m4;i++){
        start++;
        r+=1;
        c+=1;
        spot[start]=square[r][c];
    }
    
    
    int zero=0;
    for(int i=0;i<m1;i++){
        r-=1;
        c+=1;
        square[r][c]=spot[zero];
        zero++;
    }
    for(int i=0;i<m2;i++){
        r-=1;
        c-=1;
        square[r][c]=spot[zero];
        zero++;
    }
    for(int i=0;i<m3;i++){
        r+=1;
        c-=1;
        square[r][c]=spot[zero];
        zero++;
    }
    for(int i=0;i<m4;i++){
        r+=1;
        c+=1;
        square[r][c]=spot[zero];
        zero++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<square[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}