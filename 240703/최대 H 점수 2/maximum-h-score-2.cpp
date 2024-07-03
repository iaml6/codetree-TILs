#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n,l;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        int cnt=0;
        int cntl=0;
        for(int j=0;j<n;j++){
            if(num[j]>=i){
                cnt++;
            }
            else if((num[j])==i-1){
                cntl++;
                cnt++;
            }
        }

        if(cnt>=i){
            ans=i;
        }
    }
    cout<<ans;
        
    
    return 0;
}