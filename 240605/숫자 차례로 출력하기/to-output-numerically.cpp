#include <iostream>
using namespace std;

void Good(int n){
    if(n==0) {
        
        return;}

    Good(n-1);
    cout<<n<<" ";
}

void Bad(int n){
    if(n==0) return;

    cout<<n<<" ";
    Bad(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Good(n);
    cout<<endl;
    Bad(n);
    return 0;
}