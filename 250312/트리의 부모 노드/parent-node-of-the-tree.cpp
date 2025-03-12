#include <iostream>

using namespace std;

int n;
int from[100000], to[100000],parent[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> from[i] >> to[i];
        parent[to[i]]=from[i];
    }

    
        for(int i=2;i<=n;i++){
            if(parent[i]!=0){
                cout<<parent[i]<<endl;
            }
        
    }
    
    
    // Please write your code here.

    return 0;
}