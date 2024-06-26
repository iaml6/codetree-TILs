#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int n;
int min_num=INT_MAX;
int unduck[MAX_N];

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>unduck[i];
    }

    for(int i=0;i<=100;i++){
        for(int j=i;j<=100;j++){
            int sum=0;
            if(j-i<=17){
                sum=0;
                for(int k=0;k<n;k++){
                    if(unduck[k]>j){
                        sum+=(unduck[k]-j)*(unduck[k]-j);

                    }
                    else if(unduck[k]<i){
                        sum+=(i-unduck[k])*(i-unduck[k]);
                    }
                }
                
                min_num=min(min_num,sum);
            }

            // else if(j-i>17){
                
            //     int cha=j-i;
            //     cha-=17;
            //     int currenti=i,currentj=j;
            //     for(int k=0;k<=cha;k++){
            //         sum=0;
            //         currentj-=k;
            //         currenti+=(cha-k);
            //         sum+=k*k;
            //         sum+=(cha-k)*(cha-k);
            //         for(int l=0;l<n;l++){
            //             if(l==i||l==j)continue;
            //             if(unduck[l]<currenti){
            //                 sum+=(currenti-unduck[l])*(currenti-unduck[l]);
            //             }
            //             else if(unduck[l]>currentj){
            //                 sum+=(unduck[l]-currentj)*(unduck[l]-currentj);
            //             }
            //         }
            //         currentj+=k;
            //         currenti-=(cha-k);
            
            //         min_num=min(min_num,sum);
            //     }
            // }
        }
    }

    cout<<min_num;

    return 0;
}