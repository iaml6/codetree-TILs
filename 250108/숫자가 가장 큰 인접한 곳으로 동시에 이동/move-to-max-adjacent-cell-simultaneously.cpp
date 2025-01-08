#include <iostream>

using namespace std;

int n, m, t;
int a[21][21];
int r[400], c[400];

int main() {
    cin >> n >> m >> t;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int count[n+1][n+1]={};
    int new_count[n+1][n+1]={};
    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i];
        count[r[i]][c[i]]=1;
    }
    for(int k=0;k<t;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(count[i][j]==1){
                    int max_g[4]={-10,-10,-10,-10};
                    int x=i;
                    int y=j;
                    //cout<<"x: "<<x<<" y: "<<y<<endl;
                    //cout<<"a[x][y]값: "<<a[x][y]<<endl;
                    
                    if(x-1>0){
                        //cout<<"a[x-1][y]값: "<<a[x-1][y]<<endl;
                        
                            max_g[0]=a[x-1][y];
                       
                    }
                    if(x+1<=n){
                        //cout<<"a[x+1][y]값: "<<a[x+1][y]<<endl;
                        
                           max_g[1]=a[x+1][y];
                        
                    }
                    if(y-1>0){
                        //cout<<"a[x][y-1]값: "<<a[x][y-1]<<endl;
                        
                            max_g[2]=a[x][y-1];
                        
                    }
                    if(y+1<=n){
                        //cout<<"a[x][y+1]값: "<<a[x][y+1]<<endl;
                        
                            max_g[3]=a[x][y+1];
                        
                    }
                    int gab=0;
                    //cout<<"max_g 값: ";
                    for(int l=0;l<4;l++){
                        //cout<<max_g[l]<<" ";
                        if(max_g[l]>gab){
                            gab=max_g[l];
                        }
                    }
                    //cout<<endl;
                    //cout<<i<<" "<<j<<" 값 "<<gab<<endl;
                    for(int l=0;l<4;l++){
                        if(max_g[l]==gab){
                            if(l==0){
                                new_count[x-1][y]++;
                                break;
                            }
                            if(l==1){
                                new_count[x+1][y]++;
                                break;
                            }
                            if(l==2){
                                new_count[x][y-1]++;
                                break;
                            }
                            if(l==3){
                                new_count[x][y+1]++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        
        // cout<<"new_count"<<endl;
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
                
        //         cout<<new_count[i][j]<<" ";
                
                
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        // cout<<endl;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(new_count[i][j]>1){
                    new_count[i][j]=0;
                }
                
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                count[i][j]=0;
                
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(new_count[i][j]==1){
                    count[i][j]=1;
                }
                
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                new_count[i][j]=0;
                
            }
        }

        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n;j++){
        //         cout<<count[i][j]<<" ";
                
                
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        // cout<<endl;
    }
    int num=0;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                //cout<<count[i][j]<<" ";
                if(count[i][j]==1){
                    num++;
                }
                
            }
            //cout<<endl;
        }
        cout<<num;


    return 0;
}
