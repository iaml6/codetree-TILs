#include <iostream>
#include <algorithm>

#define MAX_N 20
using namespace std;

int n;
int num[MAX_N][MAX_N];



int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num[i][j];
        }
    }

    int max_coin=0;
    int firsti,firstj,firstij;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-2;j++){
            int sum=0;
            sum+=num[i][j];
            sum+=num[i][j+1];
            sum+=num[i][j+2];
            firsti=num[i][j];
            firstj=num[i][j+1];
            firstij=num[i][j+2];
            num[i][j]=0;
            num[i][j+1]=0;
            num[i][j+2]=0;
            for(int k=0;k<n;k++){
                for(int l=0;l<n-2;l++){
                    sum+=num[k][l];
                    sum+=num[k][l+1];
                    sum+=num[k][l+2];
                    max_coin=max(max_coin,sum);
                }
            }
            num[i][j]=firsti;
            num[i][j+1]=firstj;
            num[i][j+2]=firstij;
        }
    }
    cout<<max_coin;
    return 0;
}