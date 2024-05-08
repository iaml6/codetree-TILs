#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    cin>>a>>n;
    int num=a;
    for(int i=0;i<n;i++){
        num+=n;
        cout<<num<<endl;
    }
    return 0;
}