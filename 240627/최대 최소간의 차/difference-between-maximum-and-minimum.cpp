#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#define MAX_N 100
#define MAX_K 10000
using namespace std;

int n,k;
int num[MAX_N];
int min_num= INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    for(int i=1;i<=10000-k;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if((num[j]-i)>k){
                 sum+=(abs(i-num[j])-k);
            }
            if(num[j]<i){
                sum+=(i-num[j]);
            }
            
        }
        
        min_num=min(min_num,sum);
    }
    cout<<min_num;
    return 0;
}