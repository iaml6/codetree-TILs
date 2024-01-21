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
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=num[i];
        while(j>=0&&num[j]>key){
            num[j+1]=num[j];
            j--;
            num[j+1]=key;}
            
        
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}