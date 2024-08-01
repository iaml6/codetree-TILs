#include <iostream>
#define MAX_N 201
using namespace std;

int n,r,c;
int square[MAX_N][MAX_N];



int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>square[i][j];
        }
    }
    cin>>r>>c;
    int len=square[r][c];
    for(int i=0;i<len;i++){
        if(r+i<=n){
            square[r+i][c]=0;
        }
        if(c+i<=n){
            square[r][c+i]=0;
        }
        if(c-i>=1){
            square[r][c-i]=0;
        }
        if(r-i>=1){
            square[r-1][c]=0;
        }
    }
    
    int new_square[n][n]={};
    for(int j=1;j<=n;j++){
        int start=n;
         for(int i=n;i>=1;i--){
        
        
            if(square[i][j]!=0){
                new_square[start][j]=square[i][j];
                start--;
            }
        
        
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<new_square[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}