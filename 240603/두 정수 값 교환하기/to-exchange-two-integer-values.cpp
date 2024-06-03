#include <iostream>
using namespace std;

void Change(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;
    Change(n,m);
    cout<<n<<" "<<m;
    return 0;
}