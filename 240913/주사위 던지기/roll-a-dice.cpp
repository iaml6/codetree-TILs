#include <iostream>
#define MAX_N 100
#define MAX_M 10000
using namespace std;

int n,m,r,c;
char word[MAX_M];
int square[MAX_N+1][MAX_N+1]={};
int up=1,front=2,rightt=3;
int count=0;

bool In_Range(int x,int y,char h){
     if(h=='L'){
            y-=1;
        }
        else if(h=='R'){
            y+=1;
        }
        else if(h=='U'){
            x-=1;
        }
        else{
            x+=1;
        }
        return (x>=1&&x<=n&&y>=1&&y<=n);
}

void Move(int x,int y, char h){
    if(h=='L'){
        if(In_Range(x,y,h)){
            count++;
        
        square[x][y-1]=(7-rightt);
        int original_up=up,original_front=front,original_right=rightt;
        up=original_right;
        rightt=(7-original_up);
        }
       
    }
    else if(h=='R'){
        if(In_Range(x,y,h)){
            count++;
        
        square[x][y+1]=rightt;
        int original_up=up,original_front=front,original_right=rightt;
        up=(7-original_right);
        rightt=original_up;
        }
    }
    else if(h=='D'){
        if(In_Range(x,y,h)){
            count++;
        
        square[x+1][y]=front;
        int original_up=up,original_front=front,original_right=rightt;
        up=(7-original_front);
        front=original_up;
        }
    }
    else{
        if(In_Range){
        count++;       
        square[x-1][y]=(7-front);
        int original_up=up,original_front=front,original_right=rightt;
        front=(7-original_up);
        up=original_front;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m>>r>>c;
    for(int i=0;i<m;i++){
        cin>>word[i];
    }
    int x=r,y=c;
    square[x][y]=6;
    if(n==1){
        cout<<"6";
        return 0;
    }
    for(int i=0;i<m;i++){
        Move(x,y,word[i]);
        if(word[i]=='L'){
            y-=1;
        }
        else if(word[i]=='R'){
            y+=1;
        }
        else if(word[i]=='U'){
            x-=1;
        }
        else{
            x+=1;
        }
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            sum+=square[i][j];
            //cout<<square[i][j]<<" ";
        }
        //cout<<endl;
    }
    
    cout<<"count "<< count<<endl;
    cout<<sum;
    return 0;
}