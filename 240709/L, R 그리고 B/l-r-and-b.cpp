#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

char num[10][10];

int main() {
    // 여기에 코드를 작성해주세요.
    int l[2],b[2],r[2];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>num[i][j];
            if(num[i][j]=='B'){
                b[0]=i;
                b[1]=j;
            }
            else if(num[i][j]=='L'){
                l[0]=i;
                l[1]=j;
            }
            else if(num[i][j]=='R'){
                r[0]=i;
                r[1]=j;
            }
        }
    }

    if(l[0]==b[0]&&l[0]==r[0]){
        if(l[1]<r[1]&&r[1]<b[1]){
            cout<<abs(b[1]-l[1])-1;
        }
        else if(b[1]<r[1]&&r[1]<l[1]){
            cout<<abs(b[1]-l[1])-1;
        }
        else{
            cout<<abs(l[1]-b[1])+1;
        }
        
    }
    else if(l[1]==b[1]&&l[1]==r[1]){
        if(l[0]<r[0]&&r[0]<b[0]){
            cout<<abs(b[0]-l[0])-1;
        }
        else if(b[0]<r[0]&&r[0]<l[0]){
            cout<<abs(b[0]-l[0])-1;
        }
        else{
            cout<<abs(l[0]-b[0])+1;
        }
        
    }
    else{
        cout<<abs(l[0]-b[0])+abs(l[1]-b[1])-1;
    }

    
    return 0;
}