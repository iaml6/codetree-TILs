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
    int end=-1;
    for(int i=0;i<n-1;i++){
        int correct=true;
        for(int j=i+1;j<n;j++){
            if(num[j]>num[i]){
                correct=false;
            }
        }
        if(correct==true){
            end=i;
        }
    }
    cout<<end+1;
    return 0;
}