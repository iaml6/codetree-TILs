#include <iostream>
#include <list>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    list <char> l;
    list <char>::iterator it;
    int n,m;
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
       char bread;
       cin>>bread;
       l.push_back(bread);
    }
    it=l.end();
    for(int i=0;i<m;i++){
        string order;
        cin>>order;
        if(order=="R"){
            if (it!=l.end())
            it++;
        }
        else if(order=="L"){
            if (it!=l.begin())
            it--;
        }
        else if(order=="D"){
            if (it!=l.end())
            it=l.erase(it);
        }
        else if(order=="P"){
            char word;
            cin>>word;
            l.insert(it,word);
            it++;
        }

    }
    for(it =l.begin(); it!=l.end();it++){
        cout<<*it;
    }    




    return 0;
}