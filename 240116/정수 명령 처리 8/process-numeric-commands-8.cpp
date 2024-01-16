#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list <int> l;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string order;
        cin>>order;
        if(order=="push_front"){
            int num;
            cin>>num;
            l.push_front(num);
        }
        else if(order=="push_back"){
            int num;
            cin>>num;
            l.push_back(num);
        }
        else if(order=="pop_front"){
            cout<<l.front()<<endl;
            l.pop_front();
        }
        else if(order=="pop_back"){
            cout<<l.back()<<endl;
            l.pop_back();
        }
        else if(order=="size"){
            cout<<l.size()<<endl;
        }
        else if(order=="empty"){
            if(l.empty()){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
        else if(order=="front"){
            cout<<l.front()<<endl;
        }
        else{
            cout<<l.back()<<endl;
        }
    }

    return 0;
}