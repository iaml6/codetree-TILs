#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    char cow[n];
    for(int i=0;i<n;i++){
        cin>>cow[i];
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(cow[i]=='W'){
            for(int j=1;j<i;j++){
                if(cow[j]=='O'){
                    for(int k=0;k<j;k++){
                        if(cow[k]=='C'){
                            count++;
                        }
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}