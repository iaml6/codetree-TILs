#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int h[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int maxg=0;
    for(int i=1;i<=1000;i++){
        for(int j=0;j<n;j++){
            h[j]-=i;
        }
        int count=0;
        for(int j=0;j<n-1;j++){
            if(h[j]>0&&h[j+1]<=0){
                count++;
            }
        }
        if(h[n-1]>0&&h[n-2]<=0){
            count++;
        }
        maxg=max(maxg,count);
         for(int j=0;j<n;j++){
            h[j]+=i;
        }
    }
    cout<<maxg;
    return 0;
}