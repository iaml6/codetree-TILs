#include <iostream>
#define MAX_N 100
using namespace std;

int n;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(num[j]>num[j+1]){
                int gab=num[j];
                num[j]=num[j+1];
                num[j+1]=gab;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}