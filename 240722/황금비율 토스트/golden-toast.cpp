#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list<char> l;
    list<char>::iterator it;
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        char word;
        cin>>word;
        l.push_back(word);
    }
    it=l.end();
    for(int i=0;i<m;i++){
        char order;
        cin>>order;
        if(order=='L'){
            if(it!=l.begin()){
                it--;
            }
        }
        else if(order=='R'){
            if(it!=l.end()){
                it++;
            }
        }
        else if(order=='D'){
            if(it!=l.end()){
                it=l.erase(it);
            }
        }
        else{
            char word;
            cin>>word;
            l.insert(it,word);
        }
    }

    for(it=l.begin();it!=l.end();it++){
        cout<<*it;
    }
    return 0;
}