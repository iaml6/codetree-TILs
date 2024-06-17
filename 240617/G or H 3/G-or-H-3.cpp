#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_M 10000
using namespace std;

int n,k;
int photo[MAX_M+1];


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int dir;
        char alp;
        cin>>dir>>alp;
        if(alp=='G'){
            photo[dir]=1;
        }
        else {
            photo[dir]=2;
        }
    }
    int maxg=0;
    int sum=0;
    for(int i=1;i<=MAX_M-k;i++){
        sum=0;
        for(int j=i;j<=j+k;j++){
            sum+=photo[j];
        }
        maxg=max(maxg,sum);
    }
    cout<<sum;
    return 0;
}