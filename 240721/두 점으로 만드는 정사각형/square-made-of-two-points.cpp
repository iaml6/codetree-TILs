#include <iostream>
#include <algorithm>
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
    int square[4];
    for(int i=0;i<2;i++){
        
        square[i]=min(first[i],second[i]);

    }
    for(int i=2;i<4;i++){
        square[i]=max(first[i],second[i]);
    }
    int length=max((square[2]-square[0]),(square[3]-square[1]));
    cout<<length*length;
    return 0;
}