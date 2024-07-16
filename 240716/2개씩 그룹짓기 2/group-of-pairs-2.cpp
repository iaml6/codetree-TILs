#include <iostream>
#include <algorithm>
#define MAX_N 100000
using namespace std;

int n;
long num[2*MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>num[i];
    }
    sort(num,num+2*n);
    long gab=1000000000;
    for(int i=0;i<n;i++){
        long cha=num[i+n]-num[i];
        gab=min(gab,cha);
    }
    cout<<gab;
    return 0;
}