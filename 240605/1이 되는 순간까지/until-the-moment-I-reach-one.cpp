#include <iostream>
using namespace std;

int count=0;
int Ret(int n){
    if(n==1) {
        
        return count;
    }

    if(n%2==0){
        count++;
        return Ret(n/2);
    }
    else {
        count++;
        return Ret(n/3);
    }

    
    
    
    }

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Ret(n);
    return 0;
}