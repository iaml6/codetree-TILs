#include <iostream>
using namespace std;

void Repeat(int n){
    if(n==0){
        return;
    }

    Repeat(n-1);
    cout<<"HelloWorld"<<endl;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Repeat(n);
    return 0;
}