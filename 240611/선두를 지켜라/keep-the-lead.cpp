#include <iostream>

#define MAX_T 1000000
using namespace std;

int n,m;
int pos_a[MAX_T+1]={},pos_b[MAX_T+1]={};

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;

    int time_a=1;
    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            pos_a[time_a]=pos_a[time_a-1]+v;
            time_a++;
        }
    }

    int time_b=1;
    for(int i=0;i<n;i++){
        int v,t;
        cin>>v>>t;
        while(t--){
            pos_b[time_b]=pos_b[time_b-1]+v;
            time_b++;
        }
    }

    int count=0;
    for(int i=1;i<time_a;i++){
        if(pos_a[i]<pos_b[i]){
            if(pos_a[i-1]>pos_b[i]){
                count++;
            }
        }
        if(pos_b[i]<pos_a[i]){
            if(pos_a[i-1]>pos_b[i-1]){
                count++;
            }
        }
    }

    cout<<count;

    return 0;
}