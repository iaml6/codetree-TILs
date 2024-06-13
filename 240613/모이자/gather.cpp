#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int people[n];
    for(int i=0;i<n;i++){
        cin>>people[i];
    }

    int min_dis=100000;
    for(int i=0;i<n;i++){
        int dis=0;
        for(int j=0;j<n;j++){
            dis+=(abs(i-j)*people[j]);
        }
       
        min_dis= min(dis,min_dis);
    }
    cout<<min_dis;
    return 0;
}