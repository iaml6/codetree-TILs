#include <iostream>
#define MAX_N 100
using namespace std;

int num[MAX_N];
int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int correct=0;
   
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             int count=0;
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=num[k];
            }
            double av=(double)sum/(j-i+1);
            for(int k=i;k<=j;k++){
                if(av==num[k]){
                    count++;
                }
            }
            if(count>0){
                correct++;
            }
        }
    }
    cout<<correct;
    return 0;
}