#include <iostream>
#include <algorithm>
using namespace std;

int n;
int num[20][20]={};
int GetNum(int x,int start, int end){
    int hab=0;
    for(int j=x;j<=x+2;j++){
        for(int i=start;i<=end;i++){
        hab+=num[j][i];
    }
    }
    
    return hab;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>num[i][j];
        }
    }
    int max_num=0;

    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            int gab=GetNum(i,j,j+2);
            max_num=max(max_num,gab);
        }
    }

    cout<<max_num;
    return 0;
}