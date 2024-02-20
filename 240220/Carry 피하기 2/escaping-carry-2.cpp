#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int max_sum=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(num[i]/10000+num[j]/10000+num[k]/10000>=10){
                    continue;
                }
                if((num[i]/1000)%10+(num[j]/1000)%10+(num[k]/1000)%10>=10){
                    continue;
                }
                if((num[i]/100)%10+(num[j]/100)%10+(num[k]/100)%10>=10){
                    continue;
                }
                if((num[i]/10)%10+(num[j]/10)%10+(num[k]/10)%10>=10){
                    continue;
                }
                if((num[i])%10+(num[j])%10+(num[k])%10>=10){
                    continue;
                }
                int sum=num[i]+num[j]+num[k];
                max_sum=max(max_sum,sum);
            }
        }
    }
    cout<<max_sum;
    return 0;
}