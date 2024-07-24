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
    
    for(int i=2;i<n;i++){
        for(int j=1;j<n-1;j++){
            int gab=0;
            
            int first=0;
            int x=i,y=j;
            while(y<n-1&&x>1){
                x-=1;
                y+=1;
                first++;
                
                gab+=square[x][y];
            }
            int second=0;
            while(x>0){
                x-=1;
                y-=1;
                second++;
                
                gab+=square[x][y];
            }
            for(int k=0;k<first;k++){
                x+=1;
                y-=1;
                
                gab+=square[x][y];
            }
            for(int k=0;k<second;k++){
                x+=1;
                y+=1;
                
                gab+=square[x][y];
            }
            
            if(second>0&&first>0){
                
                sum=max(sum,gab);
            }
            


        }
        

    }
    cout<<sum;
    return 0;
}