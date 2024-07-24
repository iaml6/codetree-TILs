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
    int first[n][n]={};
    int second[n][n]={};
    for(int i=2;i<n;i++){
        for(int j=1;j<n-1;j++){
            int gab=0;
            
            
            int x=i,y=j;
            int a=n-1;
            int b=1;
            
                
                    while(y<a&&x>b){
                        x-=1;
                        y+=1;
                        first[i][j]++;
                        
                        gab+=square[x][y];
                    }
                    
                    while(x>b-1){
                        x-=1;
                        y-=1;
                        second[i][j]++;
                        
                        gab+=square[x][y];
                    }
                    for(int k=0;k<first[i][j];k++){
                        x+=1;
                        y-=1;
                        
                        gab+=square[x][y];
                    }
                    for(int k=0;k<second[i][j];k++){
                        x+=1;
                        y+=1;
                        
                        gab+=square[x][y];
                    }
            
            if(second[i][j]>0&&first[i][j]>0){
                
                sum=max(sum,gab);
            }
            


        }
        

    }
    for(int i=2;i<n;i++){
        for(int j=1;j<n-1;j++){
            int gab=0;
            int count1=0,count2=0;
            int x=i,y=j;
            
            for(int k=1;k<=first[i][j];k++){
                gab=0;
                count1=0,count2=0;
                x=i,y=j;
                for(int l=1;l<=k;l++){
                    x-=1;
                    y+=1;
                    count1++;
                    gab+=square[x][y];
                }
                int currentx=x, currenty=y,currentgab=gab;
                while((currentx-1)>=0&&(currenty-1)>=0){
                    x=currentx;
                    y=currenty;
                    gab=currentgab;
                    x--;
                    y--;
                    count2++;
                    gab+=square[x][y];
                    currentgab=gab;
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