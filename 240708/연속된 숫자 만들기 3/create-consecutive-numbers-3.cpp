#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    long a,b,c;
    cin>>a>>b>>c;
    long dis;
    if((b-a)>(c-b)){
        dis=b-a;
    }
    else{
        dis=c-b;
    }
    int count=0;
    while(dis>1){
        dis/=2;
        count++;
    }
    cout<<count+1;
    return 0;
}