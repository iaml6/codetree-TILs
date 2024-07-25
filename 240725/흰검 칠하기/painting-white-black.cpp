#include <iostream>
#define MAX_N 1000
using namespace std;

int n;
int order[MAX_N];
char direction[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>order[i]>>direction[i];
    }
    int black[200001]={};
    int white[200001]={};
    int last[200001]={};
    int start=10000;
    for(int i=0;i<n;i++){
        if(direction[i]=='L'){
            white[start]++;
            last[start]=1;
            for(int j=1;j<order[i];j++){
                start--;
                white[start]++;
                last[start]=1;
            }
        }
        else{
            black[start]++;
            last[start]=2;
            for(int j=1;j<order[i];j++){
                start++;
                black[start]++;
                last[start]=2;
            }
        }
    }
    int countblack=0,countwhite=0,countgray=0;
    for(int i=0;i<=200000;i++){
        if(white[i]>=2&&black[i]>=2){
            countgray++;
        }
        else{
            if(last[i]==1){
                countwhite++;
            }
            else if(last[i]==2){
                countblack++;
            }
        }
    }

    cout<<countwhite<<" "<<countblack<<" "<<countgray;
    return 0;
}