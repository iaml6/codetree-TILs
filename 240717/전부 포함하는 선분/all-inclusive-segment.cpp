#include <iostream> 
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int start[MAX_N],tend[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>start[i]>>tend[i];
    }
    int dis=300;
    for(int i=0;i<n;i++){
        
        int min_st=100;
        int max_end=0;
        for(int j=0;j<n;j++){
            if(j==i)continue;
            min_st=min(min_st,start[j]);
            max_end=max(max_end,tend[j]);
        }
        dis=min(dis,(max_end-min_st));
        
    }
    cout<<dis;
    return 0;
}