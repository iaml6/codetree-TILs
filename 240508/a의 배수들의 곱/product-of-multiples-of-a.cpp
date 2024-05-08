#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int gob=1;
    for(int i=1;i<=b;i++){
        if(i>=a&&i%a==0){
            gob*=i;
        }
    }
    cout<<gob;
    return 0;
}