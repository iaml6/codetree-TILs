#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n1,n2;
int a[MAX_N],b[MAX_N];

bool correct(int x,int y){
    // int start=-5;
    // for(int i=0;i<x;i++){
    //     if(a[i]==b[0]){
    //         start=i;
    //         break;
    //     }
    // }
    // if(start==-5){
    //     return false;
    // }
    // for(int i=0;i<y;i++){
    //     if(a[i+start]!=b[i]){
    //         return false;
    //     }
    // }
    
    for(int i=0;i<=x-y;i++){
        int count=0;
        for(int j=0;j<y;j++){
            if(a[j+i]!=b[j]){
                count++;
            }
        }
        if(count==0){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    if(correct(n1,n2)){
        cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}