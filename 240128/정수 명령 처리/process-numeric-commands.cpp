#include <iostream>
#include <stack>
using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    stack<int> s;
    int count;
    cin>>count;
    for(int i=0;i<count;i++){
        string order;
    cin>>order;
    if(order=="push"){
        int num;
        cin>>num;
        s.push(num);
    }
    else if(order=="pop"){
        cout<<s.top()<<endl;
        s.pop();
    }
    else if(order=="size"){
        cout<<s.size()<<endl;
    }
    else if(order=="empty"){
        cout<<s.empty()<<endl;
    }
    else if(order=="top"){
        cout<<s.top()<<endl;
    }
    }
    


    return 0;
}