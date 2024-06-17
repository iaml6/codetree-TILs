#include <iostream>
#include <algorithm>
#define MAX_N 100
#define MAX_NUM 1000000
using namespace std;

int n;
int x[MAX_N][2];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int count[2*MAX_NUM+1];
    for(int i=0;i<n;i++){
        cin>>x[i][0]>>x[i][1];
        
    }
    int cnt=0;
   for(int i=0;i<n;i++){
        bool correct=true;
        for(int j=0;j<n;j++){
            if(i==j) continue;

            if(x[j][0]<x[i][0]&&x[j][1]>x[i][1]){
                correct=false;
            }

            if(x[j][0]>x[i][0]&&x[j][1]<x[i][1]){
                correct=false;
            }

        }
        if(correct==true) cnt++;
   }

    cout<<cnt;

    return 0;
}