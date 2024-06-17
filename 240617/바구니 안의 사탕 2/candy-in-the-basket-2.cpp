#include <iostream>
#include <algorithm>
#define MAX_N 100

using namespace std;

int n,k;
int candy[MAX_N+1];


int main() {
    cin>>n>>k;
    int maxg=0;
    for(int i=0;i<n;i++){
        int amount,dir;
        cin>>amount>>dir;
        candy[dir]+=amount;
    }
    for(int i=0;i<=MAX_N;i++){
        int sum=0;
        for(int j=i-k;j<=i+k;j++){
            if(j>=0&&j<=MAX_N)
            sum+=candy[j];
        }
        maxg=max(maxg,sum);
    }

    cout<<maxg;
    return 0;
}