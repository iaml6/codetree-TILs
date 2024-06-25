#include <iostream>
#include <algorithm>
#define MAX_NUM 10000
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    cin>>x>>y;
    int max_num=0;
    for(int i=x;i<=y;i++){
        int sum=0;
        sum+=(i/10000);
        sum+=(i/1000)%10;
        sum+=(i/100)%10;
        sum+=(i/10)%10;
        sum+=i%10;
        max_num=max(max_num,sum);
    }
    cout<<max_num;
    return 0;
}