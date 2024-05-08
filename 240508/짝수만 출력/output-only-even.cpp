#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int num=a;
    while(num=<b){
        if(num%2==0){
            cout<<num<<" ";
        }
        num++;
    }
    return 0;
}