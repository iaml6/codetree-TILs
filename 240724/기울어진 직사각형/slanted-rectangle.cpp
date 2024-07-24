#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;

int n;
int square[MAX_N][MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>square[i][j];
        }
    }
    int sum=0;
    int first[n][n]={}; // 1번 방향의 횟수를 저장할 함수
    int second[n][n]={}; // 2번 방향의 횟수를 저장할 함수
    for(int i=2;i<n;i++){ // 세로는 최소 2칸의 여유가 있어야함
        for(int j=1;j<n-1;j++){ //가로는 최소 1칸의 여유가 있어야함 
            int gab=0;
            
            
            int x=i,y=j;
            int a=n-1;
            int b=1;
            
                
                    while(y<a&&x>b){ // 1번 방향을 만족하는 조건
                        x-=1;
                        y+=1;
                        first[i][j]++; // 1번 방향의 최대횟수 
                        
                        gab+=square[x][y];
                    }
                    
                    while(x>b-1){  // 2번 방향을 만족하는 조건
                        x-=1;
                        y-=1;
                        second[i][j]++; // 2번 방향의 최대횟수 
                        
                        gab+=square[x][y];
                    }
                    for(int k=0;k<first[i][j];k++){ // 아까 1번 방향 계산했던 횟수만큼 3번 방향 반복
                        x+=1;
                        y-=1;
                        
                        gab+=square[x][y];
                    }
                    for(int k=0;k<second[i][j];k++){ // 아까 2번 방향 계산했던 횟수만큼 4번 방향 반복
                        x+=1;
                        y+=1;
                        
                        gab+=square[x][y];
                    }
            
            if(second[i][j]>0&&first[i][j]>0){ // 방향 횟수가 최소 한번은 있어야함
                
                sum=max(sum,gab);
            }
            


        }
        

    }
    // 최대횟수까지 가지 않는 경우 
    for(int i=2;i<n;i++){
        for(int j=1;j<n-1;j++){
            int gab=0;
            int count1=0,count2=0;
            int x=i,y=j;
            
            for(int k=1;k<=first[i][j];k++){ // 1번 방향으로 k번 간다.
                gab=0;
                count1=0,count2=0;
                x=i,y=j;
                for(int l=1;l<=k;l++){ // k번 만큼 1번 방향 진행 
                    x-=1;
                    y+=1;
                    count1++;
                    gab+=square[x][y];
                }
                int currentx=x, currenty=y,currentgab=gab;
                while((currentx-1)>=0&&(currenty-1)>=0){ // 1번 방향을 진행하고 갈 수 있는데까지 가면서 하나씩 계산한다.
                    x=currentx;
                    y=currenty;
                    gab=currentgab;
                    x--; //2번 방향
                    y--;
                    count2++;
                    gab+=square[x][y];
                    currentgab=gab; // 2번 방향으로 계속 진행해야되므로 더해준다.
                    currentx=x;
                    currenty=y;
                    for(int l=0;l<count1;l++){
                        x+=1;
                        y-=1;
                        gab+=square[x][y];
                    }
                    for(int l=0;l<count2;l++){
                        x+=1;
                        y+=1;
                        gab+=square[x][y];
                    }
                    if(
                    count1>0&&count2>0){
                    
                    sum=max(sum,gab);
                    }
                }
                
                
                
            }
        }
    }
    
    cout<<sum;
    return 0;
}