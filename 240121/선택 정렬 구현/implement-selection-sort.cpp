#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[100]={};
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        int ming=i;
        for(int j=i+1;j<n;j++){
            if(num[j]<num[ming]){
                ming=j;
            }
        }
        int cmt=num[ming];
        num[ming]=num[i];
        num[i]=cmt;
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}