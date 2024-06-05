#include <iostream>
using namespace std;

int Hab(int n){
    if(n<10) return n*n;

    return Hab(n/10)+(n%10)*(n%10);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Hab(n);
    return 0;
}