#include <iostream>
#define MAX_N 100
using namespace std;
int n,x,y;
char square[MAX_N+1][MAX_N+1];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int t=0;
int num[MAX_N+1][MAX_N+1]={};
int first_x,first_y;
int count=0;

int Out(int dir, int a,int b){
    if(square[a+dx[(dir+1)%4]][b+dy[(dir+1)%4]]=='#'){
        if(a+dx[dir]>n||a+dx[dir]<1||b+dy[dir]>n||b+dy[dir]<1){
            return 10; // 탈출하는 경우
        }
    }
    return 4;
}

bool In_Range(int x,int y){
    return (x>0&&x<=n&&y>0&&y<=n);
}

void Go_Front(int dir,int a, int b){
    if(count!=0&&first_x==a&&first_y==b){
        cout<<"-1";
        return;
    }
    count++;
    if(!In_Range(a,b)){
        cout<<"-1";
        
    }
    else{
        if(Out(dir,a,b)==10){
        t++;
        // cout<<"탈출"<<endl;
        cout<<t;
        }
        else{
        
            if(square[a+dx[dir]][b+dy[dir]]=='#'){ // 보고 있는 방향에 벽이 있을때
                dir=(dir+3)%4;
                // cout<<"벽"<<endl;
                Go_Front(dir,a,b);
            }
            else{ // 보고 있는 방향에 벽이 없을 때
                t++;
                a+=dx[dir];
                b+=dy[dir];
                if(square[a+dx[(dir+1)%4]][b+dy[(dir+1)%4]]=='#'){ // 보고 있는 방향으로 한칸 간 이후의 오른쪽이 벽일때
                
                // cout<<"직진"<<endl;
                Go_Front(dir,a,b);
                }
                else{ // 보고 있는 방향으로 한칸 간 이후의 오른쪽이 벽이 아닐 때 -- 이때 돌아야한다.
                    
                    dir=(dir+1)%4;
                    t++;
                    
                    a+=dx[dir];
                    b+=dy[dir];
                    // cout<<"회전"<<" x:"<<a<<" y:"<<b<<" dir: "<<dir<<endl;
                    Go_Front(dir,a,b);
                }
            }
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>square[i][j];
            if(square[i][j]=='#'){
                num[i][j]=1;
            }
        }
    }
    int start=0;
    first_x=x;
    first_y=y;
    Go_Front(start,x,y);
    return 0;
}