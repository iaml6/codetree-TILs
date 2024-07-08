#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    long a,b,c;
    cin>>a>>b>>c;
    long dis;
    if(a+1==b&&b+1==c){
        cout<<"0";
        return 0;
    }
    if((b-a)>(c-b)){
        dis=b-a;
    }
    else{
        dis=c-b;
    }
    
    cout<<dis-1;
    return 0;
}