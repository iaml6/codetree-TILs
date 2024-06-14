#include <iostream>
#include <algorithm>

#define MAX_N 100
using namespace std;

int n,k;
int num[MAX_N];

int main() {
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int max_sum=0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=num[j];
        }
        max_sum=max(max_sum,sum);
    }
    cout<<max_sum;
    return 0;
}