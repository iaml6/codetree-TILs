#include <iostream>
#include <algorithm>
#define MAX_N 10000
using namespace std;

int n;
int block[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    long average=0;
    for(int i=0;i<n;i++){
        cin>>block[i];
        average+=block[i];
    }
    average/=n;
    long distance=0;
    for(int i=0;i<n;i++){
        if(block[i]>average){
            distance+=(block[i]-average);
        }
    }
    cout<<distance;

    return 0;
}