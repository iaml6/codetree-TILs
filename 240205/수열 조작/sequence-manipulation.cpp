#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    cin>>num;
    deque<int> d;
    for(int i=1;i<=num;i++){
        d.push_back(i);
    }
    
    while(d.size()!=1){
        d.pop_front();
        int n=d.front();
        d.pop_front();
        d.push_back(n);
    }
    cout<<d.front();
    return 0;
}