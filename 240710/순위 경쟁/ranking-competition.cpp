#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
char C[MAX_N];
int s[MAX_N];


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        cin>>C[i]>>s[i];
    }
    int count=0;
    int situation=0; // a,b,c가 다 같을 때 0
    for(int i=0;i<n;i++){
        if(C[i]=='A'){
            a+=s[i];
        }
        else if(C[i]=='B'){
            b+=s[i];
        }
        else{
            c+=s[i];
        }
        if(a==b&&b==c){ // a,b,c가 다 같을 때 0
            if(situation!=0){
                count++;
            }
            situation=0;
        }
        if(a>b&&a>c){  // a가 가장 클 때 1
            if(situation!=1){
                count++;
            }
            situation=1;
        }
        if(b>a&&b>c){ // b가 가장 클 때 2
            if(situation!=2){
                count++;
            }
            situation=2;
        }
        if(c>b&&c>a){ // c가 가장 클 때 3
            if(situation!=3){
                count++;
            }
            situation=3;
        }
        if(a==b&&a>c){ // a,b가 가장 클 때 4
            if(situation!=4){
                count++;
            }
            situation=4;
        }
        if(a==c&&c>b){ // a,c가 가장 클 때 5
            if(situation!=5){
                count++;
            }
            situation=5;
        }
        if(c==b&&c>a){ // b,c가 가장 클 때 6
            if(situation!=6){
                count++;
            }
            situation=6;
        }

    }

    cout<<count;

    return 0;
}