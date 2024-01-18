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
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(num[j]>num[j+1]){
                int cmd=num[j];
                num[j]=num[j+1];
                num[j+1]=cmd;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}