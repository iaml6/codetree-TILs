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
    int dis=0;
    int place;
    int count_min=0;
    for(int i=0;i<n;i++){
        if(seat[i]=='1'){
            max_dis=max(max_dis,dis);
            if(dis!=0){
                min_dis=min(min_dis,dis);
            }
            
            dis=0;
        }
        else{
            dis++;
        }
    }

    if(min_dis==1){
        dis=0;
        for(int i=0;i<n;i++){
            if(seat[i]=='1'){
                if(dis==1){
                    place=i-1;
                    count_min++;
                }
                dis=0;
            }
            else{
                dis++;
            }
        }
        if(count_min==1){
            seat[place]='1';
            min_dis=3000;
        for(int i=0;i<n;i++){
        if(seat[i]=='1'){
            
            if(dis!=0){
                min_dis=min(min_dis,dis);
            }
            
            dis=0;
        }
        else{
            dis++;
        }
    }  
        }
    }
    
    if(max_dis==min_dis){
        cout<<max_dis-1;
    }
    else {
        cout<<min_dis;
    }


    return 0;
}