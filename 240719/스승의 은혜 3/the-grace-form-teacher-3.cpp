#include <iostream>
#include <algorithm>
#define MAX_NUM 1000
using namespace std;

int n,b;
int p[MAX_NUM],s[MAX_NUM];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>b;
    for(int i=0;i<n;i++){
        cin>>p[i]>>s[i];
    }
    int gab=0;
    for(int i=0;i<n;i++){
        int sum[n];
        for(int j=0;j<n;j++){
            if(j==i){
                sum[j]=p[j]/2+s[j];
            }
            else{
                sum[j]=p[j]+s[j];
            }
        }
        sort(sum,sum+n);
        
        
        int hab=0;
        int count=0;
        for(int j=0;j<n;j++){
            if((hab+sum[j])<=b){
                hab+=sum[j];
                count++;
            }
            
        }
        
        gab=max(gab,count);


    }
    cout<<gab;
    
    return 0;
}