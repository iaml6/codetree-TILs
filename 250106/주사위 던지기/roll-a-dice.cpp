#include <iostream>

using namespace std;

int n, m;
int r, c;
char directions[10000];

int main() {
    cin >> n >> m >> r >> c;
    int up=1,front=2,right=3;
    for (int i = 0; i < m; i++) {
        cin >> directions[i];
    }
    int num[n+1][n+1]={};
    num[r][c]=6;
    for(int i=0;i<m;i++){
        if(directions[i]=='L'){
            if(c-1>0){
                c--;
                num[r][c]=7-right;
                int before_right=right;
                int before_up=up;
                up=before_right;
                right=7-before_up;
            }
        }
        else if(directions[i]=='R'){
            if(c+1<=n){
                c++;
                num[r][c]=right;
                int before_right=right;
                int before_up=up;
                up=7-before_right;
                right=before_up;

            }
        }
        else if(directions[i]=='U'){
            if(r-1>0){
                r--;
                num[r][c]=7-front;
                int before_up=up;
                int before_front=front;
                up=before_front;
                front=7-before_up;
            }
        }
        else if(directions[i]=='D'){
            if(r+1<=n){
                r++;
                num[r][c]=front;
                int before_up=up;
                int before_front=front;
                front=before_up;
                up=7-before_front;
            }
        }
    }

    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            sum+=num[i][j];
        }
    }
    cout<<sum;

    // Write your code here!

    return 0;
}
