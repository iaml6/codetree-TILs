#include <iostream>
using namespace std;

int square[4][4];
char dir;
int change[4][4]={};
int real[4][4]={};

void Left(){
    for(int i=0;i<4;i++){
        int start=0;
        for(int j=0;j<4;j++){
            if(square[i][j]!=0){
                change[i][start]=square[i][j];
                start++;
            }
        }
    }
}

void Left_Second(){
    for(int i=0;i<4;i++){
        int start=0;
        for(int j=0;j<4;j++){
            if(change[i][j]!=0){
                real[i][start]=change[i][j];
                start++;
            }
        }
    }
}

void Right(){
    for(int i=0;i<4;i++){
        int start=3;
        for(int j=3;j>=0;j--){
            if(square[i][j]!=0){
                change[i][start]=square[i][j];
                start--;
            }
        }
    }
}

void Right_Second(){
    for(int i=0;i<4;i++){
        int start=3;
        for(int j=3;j>=0;j--){
            if(change[i][j]!=0){
                real[i][start]=change[i][j];
                start--;
            }
        }
    }
}

void Up(){
    for(int j=0;j<4;j++){
        int start=0;
        for(int i=0;i<4;i++){
            if(square[i][j]!=0){
                change[start][j]=square[i][j];
                start++;
            }
        }
    }
}

void Up_Second(){
    for(int j=0;j<4;j++){
        int start=0;
        for(int i=0;i<4;i++){
            if(change[i][j]!=0){
                real[start][j]=change[i][j];
                start++;
            }
        }
    }
}

void Down(){
    for(int j=0;j<4;j++){
        int start=3;
        for(int i=3;i>=0;i--){
            if(square[i][j]!=0){
                change[start][j]=square[i][j];
                start--;
            }
        }   
    }
}

void Down_Second(){
    for(int j=0;j<4;j++){
        int start=3;
        for(int i=3;i>=0;i--){
            if(change[i][j]!=0){
                real[start][j]=change[i][j];
                start--;
            }
        }   
    }
}

void Plus(char order){
    if(order=='L'){
        for(int i=0;i<4;i++){
            if(change[i][0]==change[i][1]){
                change[i][0]*=2;
                change[i][1]=0;
            }
            if(change[i][0]!=change[i][1]&&change[i][1]==change[i][2]){
                change[i][1]*=2;
                change[i][2]=0;
            }
            if(change[i][2]==change[i][3]){
                change[i][2]*=2;
                change[i][3]=0;
            } 

        }
        Left_Second();

        
    }
    else if(order=='R'){
        for(int i=0;i<4;i++){
            if(change[i][2]==change[i][3]){
                change[i][3]*=2;
                change[i][2]=0;
            }
            if(change[i][2]==change[i][1]){
                change[i][2]*=2;
                change[i][1]=0;
            }
            if(change[i][1]==change[i][0]){
                change[i][1]*=2;
                change[i][0]=0;
            }
        }
        Right_Second();
    }
    else if(order=='U'){
        for(int j=0;j<4;j++){
            if(change[0][j]==change[1][j]){
                change[0][j]*=2;
                change[1][j]=0;
            }
            if(change[2][j]==change[1][j]){
                change[1][j]*=2;
                change[2][j]=0;
            }
            if(change[2][j]==change[3][j]){
                change[2][j]*=2;
                change[3][j]=0;
            }
        }
        Up_Second();
    }
    else {
        for(int j=0;j<4;j++){
            if(change[3][j]==change[2][j]){
                change[3][j]*=2;
                change[2][j]=0;
            }
            if(change[2][j]==change[1][j]){
                change[2][j]*=2;
                change[1][j]=0;
            }
            if(change[1][j]==change[0][j]){
                change[1][j]*=2;
                change[0][j]=0;
            }
        }
        Down_Second();
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>square[i][j];
        }
    }
    cin>>dir;
    if(dir=='R'){
        Right();
    }
    else if(dir=='L'){
        Left();
    }
    else if(dir=='U'){
        Up();
    }
    else{
        Down();
    }
    Plus(dir);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<real[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}