#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int num[MAX_N],dir[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i]>>dir[i];
    }
    int count=0;
    for(int i=1;i<=10;i++){
        for(int j=0;j<n;j++){
            if(num[j]==i){
                int gab=-3;
                for(int k=0;k<j;k++){
                    if(num[k]==i){
                        gab=max(gab,k);
                    }
                }
                if(gab>=0){
                    if(dir[gab]!=dir[j]){
                        count++;
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}