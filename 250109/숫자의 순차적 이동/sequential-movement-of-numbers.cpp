#include <iostream>

using namespace std;

int n, m;
int grid[21][21];
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
bool In_Range(int x,int y,int g){
    x+=dx[g];
    y+=dy[g];
    return(x>0&&x<=n&&y>0&&y<=n);
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
    int count[401]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<=n*n;j++){
            count[j]=0;
        }
        for(int j=1;j<=n*n;j++){
            for(int k=1;k<=n;k++){
                for(int l=1;l<=n;l++){
                    if(grid[k][l]==j&&count[j]==0){
                        
                        int big=0;
                        int location;
                        for(int s=0;s<8;s++){
                            if(In_Range(k,l,s)){
                                if(big<grid[k+dx[s]][l+dy[s]]){
                                    big=grid[k+dx[s]][l+dy[s]];
                                    location=s;
                                }
                            }
                        }
                        //cout<<"k: "<<k<<" l: "<<l<<endl;
                        //cout<<"big: "<<big<<endl;
                        //cout<<"location: "<<location<<endl;
                        int change=grid[k][l];
                        grid[k][l]=grid[k+dx[location]][l+dy[location]];
                        grid[k+dx[location]][l+dy[location]]=change;
                        
                        // for (int i = 1; i <= n; i++) {
                        //     for (int j = 1; j <= n; j++) {
                        //         cout<<grid[i][j]<<" ";
                        //     }
                        //     cout<<endl;
                        // }
                        // cout<<endl;
                        count[j]++;
                        
                    }
                }
            }
        }
        
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
