#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    string word[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
    }

    sort(word,word+n);
    for(int i=0;i<n;i++){
        cout<<word[i]<<endl;
    }
    return 0;
}