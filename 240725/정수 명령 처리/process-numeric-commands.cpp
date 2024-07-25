#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string question;
        cin>>question;
        if(question=="push"){
            int num;
            cin>>num;
            s.push(num);
        }
        else if(question=="size"){
            cout<<s.size()<<endl;
        }
        else if(question=="empty"){
            if(s.empty()){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
        else if(question=="pop"){
            cout<<s.top()<<endl;
            s.pop();
        }
        else{
            cout<<s.top()<<endl;
        }
    }
    return 0;
}