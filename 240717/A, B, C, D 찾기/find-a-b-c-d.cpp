#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    long num[15];
    for(int i=0;i<15;i++){
        cin>>num[i];
    }
    sort(num,num+15);
    long a,b,c,d;
    a=num[0];
    b=num[1];
    c=num[2];
    d=num[14]-(a+b+c);
    cout<<a<<" "<<b<<" "<<c<<" "<<d;

    return 0;
}