#include <iostream>
#include <string>
using namespace std;

int num[3][3];
string inp[3];

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<3;i++){
        cin>>inp[i];
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            num[i][j]=inp[i][j]-'0';
        }
    }
    
    int count=0;
    for(int i=0;i<3;i++){
        if((num[i][0]==num[i][1])&&(num[i][0]!=num[i][2])){
            
            count++;
        }
        else if(num[i][0]==num[i][2]&&num[i][0]!=num[i][1]){
            

            count++;
        }
        else if(num[i][1]==num[i][2]&&num[i][0]!=num[i][1]){
            

            count++;
        }
        
    }

    for(int i=0;i<3;i++){
        if((num[0][i]==num[1][i])&&(num[0][i]!=num[2][i])){
            

            count++;
        }
        else if(num[0][i]==num[2][i]&&num[0][i]!=num[1][i]){
            count++;
        }
        else if(num[1][i]==num[2][i]&&num[0][i]!=num[1][i]){
            count++;
        }
        
    }

    if(num[0][0]==num[1][1]&&num[0][0]!=num[2][2]){
        count++;
    }
    else if(num[0][0]==num[2][2]&&num[1][1]!=num[2][2]){
        count++;
    }
    else if(num[2][2]==num[1][1]&&num[0][0]!=num[2][2]){
        count++;
    }
    if(num[0][2]==num[1][1]&&num[0][2]!=num[2][0]){
        count++;
    }
    else if(num[2][0]==num[1][1]&&num[0][2]!=num[2][0]){
        count++;
    }
    else if(num[0][2]==num[2][0]&&num[1][1]!=num[2][0]){
        count++;
    }

    cout<<count;

    return 0;
}