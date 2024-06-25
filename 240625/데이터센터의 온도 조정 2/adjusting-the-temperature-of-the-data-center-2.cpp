#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int tempa[MAX_N],tempb[MAX_N];
int n,c,g,h;

int GetTemp(int x,int y,int z){
    if(x>z){
        return c;
    }
    else if(z>y){
        return h;
    }
    else return g;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>c>>g>>h;
    for(int i=0;i<n;i++){
        cin>>tempa[i]>>tempb[i];
    }

    int max_temp=0;
    for(int i=0;i<=1000;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=GetTemp(tempa[j],tempb[j],i);
            
                    }
        max_temp=max(max_temp,sum);
    }    

    cout<<max_temp;
    return 0;
}