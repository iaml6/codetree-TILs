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

    int cnt=0;
    int max_num=0;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(num[j]>=i){
                count++;
                
            }
            
        }
        

        if(count>=i){
            max_num=i;
        }
    }
    if(l==0){
        cout<<max_num;
        
    }
    else{
        
        for(int i=0;i<n;i++){
            if(num[i]==max_num){
                cnt++;
            }
        }
        
        if(cnt>l||cnt==0){
            cout<<max_num;
        }
        else{
            cout<<max_num+1;
        }
    }
        
    
    return 0;
}