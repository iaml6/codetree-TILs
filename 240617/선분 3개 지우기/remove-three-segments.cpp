#include <iostream>
#define MAX_N 10
using namespace std;
int n;
int a[MAX_N],b[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int line[101]={};
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        for(int j=a[i];j<=b[i];j++){
            line[j]++;
        }
    }
  
   
    int cnt=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            
            for(int k=j+1;k<n;k++){
                
                for(int l=a[i];l<=b[i];l++){
                    line[l]--;
                }
                for(int l=a[j];l<=b[j];l++){
                    line[l]--;
                }
                for(int l=a[k];l<=b[k];l++){
                    line[l]--;
                }
                bool correct=true;
                for(int i=1;i<101;i++){
                    if(line[i]>1) correct=false;
                }
                if(correct)cnt++;

                for(int l=a[i];l<=b[i];l++){
                    line[l]++;
                }
                for(int l=a[j];l<=b[j];l++){
                    line[l]++;
                }
                for(int l=a[k];l<=b[k];l++){
                    line[l]++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}