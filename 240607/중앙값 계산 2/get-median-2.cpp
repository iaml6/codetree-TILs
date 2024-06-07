#include <iostream>
#include <algorithm>
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
        if(i%2==0){
            sort(num,num+i+1);
            cout<<num[i/2]<<" ";
        }
    }
    return 0;
}