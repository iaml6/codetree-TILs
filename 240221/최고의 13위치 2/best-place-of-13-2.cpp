#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num[i][j];
        }
    }
    int max_num=0;
    int orgx,orgy;
    int hab;
    for(int i=0;i<n;i++){
         hab=0;
        for(int j=0;j<n-2;j++){
            orgx=i;
            orgy=j;
            for(int k=j;k<=j+2;k++){
                hab+=num[i][k];
                
            }
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<n-2;k++){
                for(int l=k;l<=k+2;l++){
                    if(j==orgx&&l==orgy){
                        continue;
                    }
                }
                for(int l=k;l<=k+2;l++){
                    hab+=num[j][l];
                }
            }
        }
        max_num=max(max_num,hab);
    }
    cout<<hab;
    return 0;
}