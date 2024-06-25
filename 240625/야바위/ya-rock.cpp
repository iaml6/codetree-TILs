#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int a[MAX_N],b[MAX_N],c[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int score=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=1;i<=3;i++){
        int sum=0;
        int location=i;
        for(int j=0;j<n;j++){
            if(a[j]==location){
                location=b[j];
            }
            else if(b[j]==location){
                location=a[j];
            }
            if(location==c[j])sum++;
        }
       
        score=max(score,sum);
    }
    cout<<score;
    return 0;
}