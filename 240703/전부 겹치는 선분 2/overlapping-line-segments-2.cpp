#include <iostream>
using namespace std;

int n;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int line[101]={};
    int start[n],end[n];
    for(int i=0;i<n;i++){
        cin>>start[i]>>end[i];
        for(int j=start[i];j<=end[i];j++){
            line[j]++;
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=start[i];j<=end[i];j++){
            line[j]--;
        }

        for(int j=3;j<=100;j++){
            if(line[j]==n-1){
                cout<<"Yes";
                return 0;
            }
        }

        for(int j=start[i];j<=end[i];j++){
            line[j]++;
        }
    }

    cout<<"No";
    return 0;
}