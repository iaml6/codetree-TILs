#include <iostream>
#include <stack>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    stack<char> s;
    string gwal;
    cin>>gwal;
    for(int i=0;i<gwal.size();i++){
        if(gwal[i]=='('){
            s.push('(');
        }
        else{
            if(s.empty()==true){
                cout<<"No";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()==true){
        cout<<"Yes";
        return 0;
    }
    else cout<<"No";
    return 0;
    
    
    return 0;
}