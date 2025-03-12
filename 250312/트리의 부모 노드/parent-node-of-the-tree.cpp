#include <iostream>

using namespace std;

int n;
int from[100000], to[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> from[i] >> to[i];
    }

    for(int j=0;j<n-1;j++){
        for(int i=2;i<=n;i++){
        if(to[j]==i){
            cout<<from[j]<<endl;
        }
    }
    }
    
    // Please write your code here.

    return 0;
}