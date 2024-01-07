#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        if(word=="push_back"){
            int num;
            cin>>num;
            v.push_back(num);
        }
        else if(word=="pop_back"){
            v.pop_back();
        }
        else if(word=="size"){
            cout<<v.size()<<endl;
        }
        else{
            int num;
            cin>>num;
            cout<<v[num-1]<<endl;
        }
    }
    return 0;
}