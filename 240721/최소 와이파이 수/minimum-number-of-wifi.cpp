#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n,m;
int people[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    int c=0;
    for(int i=0;i<n;i++){
        cin>>people[i];
       
    }

    

    int count=0;
    for(int i=0;i<n;i++){
        if(people[i]==1){
            count++;
            i+=2*m;
        }
    }
    cout<<count;
    
  
    return 0;
}