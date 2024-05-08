#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num=1;
    while(true){
        if(n<=1) break;
        n/=num;
        num++;
        
    }
    cout<<num-1;
    return 0;
}