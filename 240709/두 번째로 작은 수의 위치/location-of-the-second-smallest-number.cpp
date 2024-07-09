#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int min_num=200;
    for(int i=0;i<n;i++){
        if(min_num>num[i]){
            min_num=num[i];
        }
    }
    int second=101;
    for(int i=min_num+1;i<=100;i++){
        for(int j=0;j<n;j++){
            if(num[j]==i){
                second=min(second,num[j]);
            }
        }
    }
    int count=0;
    int place;
    for(int i=0;i<n;i++){
        if(num[i]==second){
            count++;
            place=i+1;
            
        }
    }
    if(count==1){
        cout<<place;
    }
    else{
        cout<<"-1";
    }
    return 0;
}