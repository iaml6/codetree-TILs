#include <iostream>
#define MAX_N 100
using namespace std;

int n;
char c[MAX_N];
int s[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c[i]>>s[i];
    }

    int a=0,b=0;
    int change=0;
    int now_big=0; // 현재 큰 거를 나타냄 a가 크면 1, b가 크면 2, 둘이 같으면 0
    for(int i=0;i<n;i++){
        if(c[i]=='A'){
            a+=s[i];
        }
        else{
            b+=s[i];
        }
        if(now_big==0){
            if(a>b){
                change++;
                now_big=1;
            }
            else if(b>a){
                change++;
                now_big=2;
            }
        }
        else if(now_big==1){
            if(b>a){
                change++;
                now_big=2;
            }
            else if(a==b){
                change++;
                now_big=0;
            }
        }
        else{
            if(a>b){
                change++;
                now_big=1;
            }
            else if(a==b){
                change++;
                now_big=0;
            }
        }

    }
    cout<<change;
    return 0;
}