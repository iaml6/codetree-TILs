#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[100]={};
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,num+n);
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
    sort(num,num+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}