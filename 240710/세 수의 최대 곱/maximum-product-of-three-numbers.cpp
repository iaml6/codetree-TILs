#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 100000
using namespace std;

int n;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int yangsu[n],eumsu[n],zero[n];
    int yang_num=0,eum_num=0,zero_num=0;
    for(int i=0;i<n;i++){
        if(num[i]>0){
            yangsu[yang_num]=num[i];
            yang_num++;

        }
        else if(num[i]==0){
            zero[zero_num]=num[i];
            zero_num++;
        }
        else{
            eumsu[eum_num]=num[i];
            eum_num++;
        }
    }
    sort(yangsu,yangsu+yang_num);
    sort(eumsu,eumsu+eum_num);
    sort(zero,zero+zero_num);
    long max_num=INT_MIN;
    if(yang_num==0){
        if(zero_num!=0){
            cout<<"0";
            return 0;
        }
        else{
            cout<<eumsu[eum_num-1]*eumsu[eum_num-2]*eumsu[eum_num-3];
            return 0;
        }
    }
    else if(yang_num==1){
        if(eum_num>=2){
            cout<<eumsu[0]*eumsu[1]*yangsu[0];
            return 0;
        }
        else{
            cout<<"0";
            return 0;
        }
    }
    else if(yang_num==2){
        if(eum_num>=2){
            cout<<eumsu[0]*eumsu[1]*yangsu[1];
            return 0;
        }
        else if(eum_num<2&&zero_num==0){
            cout<<eumsu[0]*yangsu[0]*yangsu[1];
            return 0;
        }
        else if(eum_num<2&&zero_num!=0){
            cout<<"0";
            return 0;
        }
    }
    else{
        if(eum_num>=2){
            int a=yangsu[yang_num-1]*yangsu[yang_num-2]*yangsu[yang_num-3];
            int b=eumsu[0]*eumsu[1]*yangsu[yang_num-1];
            if(a>=b){
                cout<<a;
                return 0;
            }
            else{
                cout<<b;
                return 0;
            }
        }
        else{
            cout<<yangsu[yang_num-1]*yangsu[yang_num-2]*yangsu[yang_num-3];
            return 0;
        }
    }
    
    return 0;
}