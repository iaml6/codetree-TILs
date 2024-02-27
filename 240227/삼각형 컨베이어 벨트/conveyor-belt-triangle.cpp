#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin>>n>>t;
    int left[n],right[n],down[n];
    for(int i=0;i<n;i++){
        cin>>left[i];
    }
    for(int i=0;i<n;i++){
        cin>>right[i];
    }
    for(int i=0;i<n;i++){
        cin>>down[i];
    }
    for(int i=0;i<t;i++){
        int num1,num2,num3;
        num1=left[n-1];
        num2=right[n-1];
        num3=down[n-1];
        for(int i=n-1;i>=1;i--){
            left[i]=left[i-1];
            right[i]=right[i-1];
            down[i]=down[i-1];
        }
        left[0]=num3;
        right[0]=num1;
        down[0]=num2;
    }
    for(int i=0;i<n;i++){
        cout<<left[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<right[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<down[i]<<" ";
    }
    cout<<endl;
    return 0;
}