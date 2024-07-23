#include <iostream>
#include <algorithm>
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
    for(int i=0;i<n;i++){
        int min_g=500;
        int change=i;
        for(int j=i;j<n;j++){
            if(min_g>num[j]){
                change=j;
            }
            min_g=min(min_g,num[j]);
            
        }
        int gab=num[i];
        num[i]=min_g;
        num[change]=gab;
    }
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}