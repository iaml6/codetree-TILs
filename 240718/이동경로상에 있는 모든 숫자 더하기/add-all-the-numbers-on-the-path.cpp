#include <iostream>
#define MAX_T 100000
#define MAX_N 99
using namespace std;

int n,t;
int square[MAX_N][MAX_N];
char order[MAX_T];


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>t;
    for(int i=0;i<t;i++){
        cin>>order[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>square[i][j];
        }
    }
    int start_x=n/2,start_y=n/2;
    int sum=0;
    sum+=square[start_x][start_y];
    int dir_right=0,dir_left=0;
    for(int i=0;i<t;i++){
        if(order[i]=='L'){
            dir_left++;
        }
        else if(order[i]=='R'){
            dir_right++;
        }
        else{
            if(dir_right>dir_left){
                int cha=dir_right-dir_left;
                if(cha%4==2){
                    if(start_x+1<=n-1){
                        start_x+=1;
                        sum+=square[start_x][start_y];
                    }
                }
                else if(cha%4==1){
                    if(start_y+1<=n-1){
                        start_y+=1;
                        sum+=square[start_x][start_y];
                    }
                }
                else if(cha%4==0){
                    if(start_x-1>=0){
                        start_x-=1;
                        sum+=square[start_x][start_y];
                    }
                }
                else{
                    if(start_y-1>0){
                        start_y-=1;
                        sum+=square[start_x][start_y];
                    }
                }
            }
            else if(dir_left==dir_right){
                if(start_x-1>=0){
                    start_x-=1;
                    sum+=square[start_x][start_y];
                }
            }
            else{
                int cha=dir_left-dir_right;
                if(cha%4==2){
                    if(start_x+1<=n-1){
                        start_x+=1;
                        sum+=square[start_x][start_y];
                    }
                }
                else if(cha%4==3){
                    if(start_y+1<=n-1){
                        start_y+=1;
                        sum+=square[start_x][start_y];
                    }
                }
                else if(cha%4==0){
                    if(start_x-1>=0){
                        start_x-=1;
                        sum+=square[start_x][start_y];
                        
                    }
                }
                else{
                    if(start_y-1>0){
                        start_y-=1;
                        sum+=square[start_x][start_y];
                        
                    }
                }
            }
        }
    }
    cout<<sum;

    
    return 0;
}