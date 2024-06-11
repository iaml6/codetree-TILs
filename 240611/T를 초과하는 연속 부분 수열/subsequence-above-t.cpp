#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin>>n>>t;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int count=0,max=0;
    for(int i=0;i<n;i++){
      
        if(num[i]<=t){
            count=0;
        }
        else{
             count++;
        }
       
        if(max<count){
            max=count;
        }
    }

    cout<<max;
    return 0;
}