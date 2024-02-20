#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    char num[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num[i][j];
        }
    }
    int hab=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m-2;j++){
            if(num[i][j]=='L'&&num[i][j+1]=='E'&&num[i][j+2]=='E'){
                
                hab++;
            }
            if(num[i][j]=='E'&&num[i][j+1]=='E'&&num[i][j+2]=='L'){
               
                hab++;
            }
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n-2;i++){
            if(num[i][j]=='L'&&num[i+1][j]=='E'&&num[i+2][j]=='E'){
               
                hab++;
            }
            if(num[i][j]=='E'&&num[i+1][j]=='E'&&num[i+2][j]=='L'){
                
                hab++;
            }
        }
    }
    for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            if(num[i][j]=='L'&&num[i+1][j+1]=='E'&&num[i+2][j+2]=='E'){

                hab++;
            }
            if(num[i][j]=='E'&&num[i+1][j+1]=='E'&&num[i+2][j+2]=='L'){
                hab++;
            }
        }
    }
    for(int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            if(num[i][j]=='L'&&num[i-1][j-1]=='E'&&num[i-2][j-2]=='E'){
                hab++;
            }
            if(num[i][j]=='E'&&num[i-1][j-1]=='E'&&num[i-2][j-2]=='L'){
                hab++;
            }
        }
    }
    cout<<hab;
    return 0;
}