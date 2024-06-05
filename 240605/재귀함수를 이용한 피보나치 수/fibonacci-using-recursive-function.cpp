#include <iostream>
using namespace std;

int Pivo(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }

    return Pivo(n-2)+Pivo(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<Pivo(n);
    return 0;
}