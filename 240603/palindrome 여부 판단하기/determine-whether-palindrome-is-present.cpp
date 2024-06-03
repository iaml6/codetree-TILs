#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void Change(string &word){
    string original=word;
    reverse(word.begin(),word.end());
    if(original==word){
        cout<<"Yes";
    }
    else cout<<"No";
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin>>a;
    Change(a);

    return 0;
}