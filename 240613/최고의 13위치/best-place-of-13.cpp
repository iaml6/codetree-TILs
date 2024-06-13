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
    int max_coin=0;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=n-3;j++){
            int sum=0;
            sum+=num[i][j];
            sum+=num[i][j+1];
            sum+=num[i][j+2];
            max_coin=max(max_coin,sum);
        }
        
    }
    cout<<max_coin;
    return 0;
}