#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    long num[7];
    long max_g=0,min_g=INT_MAX;
    for(int i=0;i<7;i++){
        cin>>num[i];
        max_g=max(max_g,num[i]);
        min_g=min(min_g,num[i]);
    }
    long a,b,c;
    a=min_g;
    long bc=max_g-min_g;
    long ac;
    int count=0;
    for(int i=0;i<7;i++){
        if(num[i]==a){
            count++;
        }
    }
    if(count>1){
        b=min_g;
    }
    else{
        b=INT_MAX;
        for(int i=0;i<7;i++){
            if(num[i]>a){
                b=min(b,num[i]);
            }
        }
    }
    c=bc-b;
    cout<<a<<" "<<b<<" "<<c;

    return 0;
}