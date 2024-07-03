#include <iostream>
using namespace std;

int num[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    for(int i=a;i<b;i++){
        num[i]=1;
    }
    for(int i=c;i<d;i++){
        num[i]=1;
    }
    int count=0;
    for(int i=0;i<101;i++){
            if(num[i]==1){
                count++;
        }
    }
    cout<<count;
    return 0;
}