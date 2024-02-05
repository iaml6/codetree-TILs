#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> d;
    int order;
    cin>>order;
    for(int i=0;i<order;i++){
        string word;
        cin>>word;
        if(word=="push_front"){
            int a;
            cin>>a;
            d.push_front(a);
        }
        else if(word=="push_back"){
            int a;
            cin>>a;
            d.push_back(a);
        }
        else if(word=="pop_front"){
            cout<<d.front()<<endl;
            d.pop_front();
        }
        else if(word=="pop_back"){
            cout<<d.back()<<endl;
            d.pop_back();
        }
        else if(word=="size"){
            cout<<d.size()<<endl;
        }
        else if(word=="empty"){
            if(d.empty()){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
        else if(word=="front"){
            cout<<d.front()<<endl;
        }
        else if(word=="back"){
            cout<<d.back()<<endl;
        }
    }
    return 0;
}