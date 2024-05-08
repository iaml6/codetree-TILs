#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>b>>a;
    int num=b;
    while(num>=a){
        cout<<num<<" ";
        num-=2;
    }
    return 0;
}