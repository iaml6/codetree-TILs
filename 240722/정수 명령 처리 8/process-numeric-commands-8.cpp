#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<int> num;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string order;
        cin>>order;
        if(order=="push_front"){
            int a;
            cin>>a;
            num.push_front(a);
        }
        else if(order=="push_back"){
            int a;
            cin>>a;
            num.push_back(a);
        }
        else if(order=="pop_front"){
            cout<<num.front()<<endl;
            num.pop_front();
        }
        else if(order=="pop_back"){
            cout<<num.back()<<endl;
            num.pop_back();
        }
        else if(order=="size"){
            cout<<num.size()<<endl;
        }
        else if(order=="empty"){
            if(num.empty()){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else if(order=="front"){
            cout<<num.front()<<endl;
        }
        else{
            cout<<num.back()<<endl;
        }
    }
    return 0;
}