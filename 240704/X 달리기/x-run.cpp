#include <iostream>
#include <algorithm>
#define MAX_X 10000
using namespace std;

int x;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>x;
    int time=0;
    int stop;
    int minus;
    for(int i=1;i<=100;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            sum+=j;
        }
        sum*=2;
        if(sum>x){
            minus=sum-(2*i);
            stop=i-1;
            break;
        }
    }
    time+=stop;
    time+=stop;
    x-=minus;
    if(x<=stop){
        time++;
    }
    else{
        time+=2;
    }
    cout<<time;
    

    

    return 0;
}