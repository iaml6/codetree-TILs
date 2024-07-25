#include <iostream>
using namespace std;

long n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int two=1;
    long sum=0;
    while(n>=10){
        sum+=(n%10)*two;
        two*=2;
        n/=10;
    }
    sum+=n*two;
    sum*=17;
    long ans=0;
    long ten=1;
    while(sum>=2){
        ans+=(sum%2)*ten;
        ten*=10;
        sum/=2;
    }
    ans+=sum*ten;
    cout<<ans;
    return 0;
}