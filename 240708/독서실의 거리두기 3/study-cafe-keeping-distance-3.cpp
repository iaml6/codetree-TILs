#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int n;
char seat[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>seat[i];
    }
    int min_dis=3000;
    int max_dis=-1;
    int dis=1;
    int place;
    int count_min=0;
    for(int i=1;i<n;i++){
        if(seat[i]=='1'){
            max_dis=max(max_dis,dis);
            
            min_dis=min(min_dis,dis);
            
            
            dis=1;
        }
        else{
            dis++;
        }
    }

    
    
    
    if((max_dis/2)>=min_dis){
        cout<<min_dis;
    }
    else {
        cout<<max_dis/2;
    }


    return 0;
}