#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int first[MAX_N],second[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>first[i]>>second[i];
    }
    int count=0;
    int win=0;
    for(int i=1;i<=3;i++){  // i는 주먹
        for(int j=1;j<=3;j++){ // j는 가위
            if(i==j)continue;
            for(int k=1;k<=3;k++){ //k는 보 
                if(i==k||j==k)continue;
                win=0;
                for(int l=0;l<n;l++){
                    if(first[l]==i&&second[l]==j){
                        win++;
                    }
                    else if(first[l]==j&&second[l]==k){
                        win++;
                    }
                    else if(first[l]==k&&second[l]==i){
                        win++;
                    }
                }
                count=max(win,count);
            }

        }
    }
    cout<<count;
    return 0;
}