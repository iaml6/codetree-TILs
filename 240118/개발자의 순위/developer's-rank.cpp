#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int k,n;
    cin>>k>>n;
    int developer[k][n];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cin>>developer[i][j];
        }
    }
    int num=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int count=0;
            for(int l=0;l<k;l++){
                int gab=0,gab2=0;
                for(int a=0;a<n;a++){
                    
                    if(developer[l][a]==i){
                        gab=a;
                    }
                    else if(developer[l][a]==j){
                        gab2=a;
                    }
                }
                if(gab<gab2){
                    count++;
                }
            }
            if(count==k){
                num++;
            }
        }
    }
    cout<<num;
    return 0;
}