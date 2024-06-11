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
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(i==0||num[i]!=num[i-1]){
            count=1;
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