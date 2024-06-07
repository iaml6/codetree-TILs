#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[n+1];
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<num[i]<<" ";
        }
        if(i%2==1&&i!=1){
            sort(num,num+i+1);
            cout<<num[i/2]<<" ";
        }
    }
    return 0;
}