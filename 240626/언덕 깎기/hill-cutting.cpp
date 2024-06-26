#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 1000

using namespace std;

int n;
int height[MAX_N];
int min_gab=INT_MAX;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int max_height=-1,min_height=101;
    for(int i=0;i<n;i++){
        cin>>height[i];
        if(height[i]>max_height){
            max_height=height[i];
        }
        if(height[i]<min_height){
            min_height=height[i];
        }
    }

    if(max_height-min_height<=17){
        cout<<"0";
        return 0;
    }

    for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){
            int sum=0;
            int maxh,minh;
            if(height[i]>height[j]){
                minh=height[j];
                maxh=height[i];
            }
            else if(height[j]>height[i]){
                minh=height[i];
                maxh=height[j];
            }
            else{
                continue;
            }

            if(maxh-minh<=17){
                for(int k=0;k<n;k++){
                    if(height[k]<minh){
                        int g=minh-height[k];
                        sum+=(g*g);
                    }
                    if(height[k]>maxh){
                        int g=height[k]-maxh;
                        sum+=(g*g);
                    }
                }

                min_gab=min(min_gab,sum);
            }

            // if(maxh-minh>17){
            //     int cha=maxh-minh;
            //     cha-=17;
            //     for(int k=0;k<=cha;k++){
            //         sum=0;
            //         minh+=k;
            //         maxh-=(cha-k);
            //         sum+=(k*k);
            //         sum+=((cha-k)*(cha-k));
            //         for(int l=0;l<n;l++){
            //             if(height[l]<minh){
            //                 int g=minh-height[l];
            //                 sum+=(g*g);
            //             }
            //             if(height[l]>maxh){
            //                 int g=height[l]-maxh;
            //                 sum+=(g*g);
            //             }
            //         }
            //     }
            //     min_gab=min(min_gab,sum);
            // }


        }
    }

    cout<<min_gab;
    return 0;
}