#include <iostream>
using namespace std;

int n;
int num[50]={};
void Change(int x[]){
    for(int i=0;i<n;i++){
        if(x[i]%2==0){
            cout<<x[i]/2<<" ";
        }
        else cout<<x[i]<<" ";
    }
}

int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    Change(num);

        return 0;
}