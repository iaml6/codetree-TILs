#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int A[MAX_N+1],B[MAX_N+1];



int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=n;i++){
        cin>>B[i];
    }
    int dis=0;
    for(int i=1;i<n;i++){
        if(A[i]>B[i]){
            int cha=A[i]-B[i];
            int start=i;
            int amount=0;
            while(cha!=0&&start<n){
                start++;
                amount++;
                if(A[start]<B[start]){
                    int count=0;
                    
                    while(A[start]<B[start]&&cha>0){
                        cha--;
                        int now=start;
                        A[now]+=1;
                        count++;
                    }
                    dis+=count*amount;
                }
            }
        }
    }
    cout<<dis;
    return 0;
}