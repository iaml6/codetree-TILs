#include <iostream>
#include <algorithm>
#define MAX_G 10
using namespace std;

int first[4],second[4];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<4;i++){
        cin>>first[i];
    }
    for(int i=0;i<4;i++){
        cin>>second[i];
    }
    
    int min_x=20,min_y=20,max_x=-1,max_y=-1;
    for(int i=0;i<4;i+=2){
        min_x=min(min_x,first[i]);
        min_x=min(min_x,second[i]);
        max_x=max(max_x,first[i]);
        max_x=max(max_x,second[i]);

    }
    for(int i=1;i<4;i+=2){
        min_y=min(min_y,first[i]);
        min_y=min(min_y,second[i]);
        max_y=max(max_y,first[i]);
        max_y=max(max_y,second[i]);
    }

    cout<<(max_x-min_x)*(max_y-min_y);

    return 0;
}