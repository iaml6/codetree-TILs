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
        return 0;
    }
    
        int count=0;
        for(int i=0;i<n;i++){
            if(num[j]==max_num){
                count++;
            }
        }
        if(count>1){
            cout<<max_num;
        }
        else{
            cout<<max_num+1;
        }
    
    return 0;
}