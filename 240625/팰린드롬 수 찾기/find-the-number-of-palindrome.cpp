#include <iostream>
using namespace std;

int main() {
    
    int x,y;
    cin>>x>>y;
    int ans=0;
    for(int i=x;i<=y;i++){
        string str=to_string(i);

        bool is_palindrome=true;

        string str_reverse="";
        for(int j=(int)str.length()-1;j>=0;j--){
            str_reverse+=str[j];
        }

        if(str!=str_reverse)
            is_palindrome=false;
        if(is_palindrome)
            ans++;
    }
    cout<<ans;
    return 0;
}