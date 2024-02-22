#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    int num[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num[i][j];
        }
    }
    int happy=0;
    for(int i=0;i<n;i++){
        int correct=0;
        for(int j=0;j<=n-m;j++){
            int same=0;
            for(int k=j;k<j+m-1;k++){
                if(num[i][k]==num[i][k+1]){
                    same++;
                }
            }
            if(same==m-1){
                correct++;
                if(correct==1){
                     happy++;
                }
               
                
            }
        }
    }

    for(int j=0;j<n;j++){
        int correct=0;
        for(int i=0;i<=n-m;i++){
            int same=0;
            
            for(int k=i;k<i+m-1;k++){
                if(num[k][j]==num[k+1][j]){
                    same++;
                }
            }
            if(same==m-1){
                correct++;
                if(correct==1){
                    happy++;
                }
                
               
            }
        }
    }
    cout<<happy;
    return 0;
}