#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]%2==1&&num[i]%3==0){
            cout<<num[i]<<endl;
        }
    }
    return 0;
}