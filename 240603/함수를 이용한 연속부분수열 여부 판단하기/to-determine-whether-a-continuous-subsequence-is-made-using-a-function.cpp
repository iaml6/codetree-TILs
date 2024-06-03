#include <iostream>
using namespace std;

int n1,n2;
int a[100]={},b[100]={};
bool Hamsu(int x){
    for(int i=0;i<n2;i++){
        if(a[x+i]!=b[i]){
            return false;
        }
    }
    return true;
}

bool Find(){
    for(int i=0;i<=n1-n2;i++){
        if(Hamsu(i)){
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }

    if(Find()){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}