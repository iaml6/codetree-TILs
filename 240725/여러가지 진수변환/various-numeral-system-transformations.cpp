#include <iostream>
using namespace std;

int n,b;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    int ten=1;
    int num=0;
    while(n>b){
        num+=ten*(n%b);
        ten*=10;
        n/=b;
    }
    num+=ten*n;
    cout<<num;
    return 0;
}