#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_M 10000
using namespace std;

int n,m;
int num[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    int max_num=0;
    for(int i=1;i<=n;i++){
        int first=i;
        int sum=0;
        for(int j=0;j<m;j++){
            int change;
            change=num[first];
            first=change;
            sum+=change;
        }
        max_num=max(max_num,sum);
    }

    cout<<max_num;

    return 0;
}