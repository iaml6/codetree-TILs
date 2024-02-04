#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    int num;
    cin>>num;
    string order[num];
    for(int i=0;i<num;i++){
        cin>>order[i];
        if(order[i]=="push"){
            int n;
            cin>>n;
            q.push(n);
        }
        else if(order[i]=="front"){
            cout<<q.front()<<endl;
        }
        else if(order[i]=="pop"){
            cout<<q.front()<<endl;
            q.pop();
        }
        else if(order[i]=="size"){
            cout<<q.size()<<endl;
        }
        else{
            if(q.empty()){
                cout<<"1"<<endl;
            }
            else cout<<"0"<<endl;
        }
    }

    return 0;
}