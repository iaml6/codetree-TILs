#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    int min_g=200;
    min_g=min(abs(a-b),min_g);
    min_g=min(abs(a-x)+abs(b-y),min_g);
    min_g=min(abs(a-y)+abs(b-x),min_g);
    cout<<min_g;

    return 0;
}