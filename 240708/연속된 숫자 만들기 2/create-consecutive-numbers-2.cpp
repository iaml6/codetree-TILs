#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    long a,b,c;
    cin>>a>>b>>c;
    if(a+1==b&&b+1==c){
        cout<<"0";
        return 0;
    }
    else if(a+1==b||b+1==c){
        cout<<"1";
    }
    else{
        cout<<"2";
    }
    return 0;
}