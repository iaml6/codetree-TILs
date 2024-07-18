#include <iostream>
#include <vector>
#define MAX_N 10000
using namespace std;

int n;
string order[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    vector<int> hamsu;
    for(int i=0;i<n;i++){
        cin>>order[i];
        if(order[i]=="push_back"){
            int num;
            cin>>num;
            hamsu.push_back(num);
        }
        else if(order[i]=="pop_back"){
            hamsu.pop_back();
        }
        else if(order[i]=="size"){
            cout<<hamsu.size()<<endl;
        }
        else{
            int num;
            cin>>num;
            cout<<hamsu[num-1]<<endl;
        }
    }

    return 0;
}