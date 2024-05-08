#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num[5];
    int count=0;
    for(int i=0;i<5;i++){
        cin>>num[i];
        if(num[i]%2==0){
            count++;
        }
    }
    cout<<count;

    return 0;
}