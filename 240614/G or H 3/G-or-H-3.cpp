#include <iostream>
#include <algorithm>
#define MAX_N 100

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int dir[n];
    char alpa[n];
    for(int i=0;i<n;i++){
        cin>>dir[i]>>alpa[i];
    }
    int max_g=0;
    for(int i=0;i<10000-k;i++){
        int sum=0;
        for(int j=i;j<=i+k;j++){
            for(int i=0;i<n;i++){
                if(dir[i]==j){
                    if(alpa[i]=='G'){
                    sum++;
                    }
                    if(alpa[i]=='H'){
                    sum+=2;
                 }
                }
                
            }
            
        }
        max_g=max(max_g,sum);
    }
    cout<<max_g;

    return 0;
}