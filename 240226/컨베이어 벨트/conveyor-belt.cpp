#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin>>n>>t;
    int up[n],down[n];
    for(int i=0;i<n;i++){
        cin>>up[i];
    }
    for(int i=0;i<n;i++){
        cin>>down[i];
    }
    for(int i=1;i<=t;i++){
        int temp1=up[n-1];
        int temp2=down[n-1];
        for(int i=n-2;i>=0;i--){
            down[i+1]=down[i];
            up[i+1]=up[i];
        }
        down[0]=temp1;
        up[0]=temp2;
    }
    for(int i=0;i<n;i++){
        cout<<up[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<down[i]<<" ";
    }
    return 0;
}