#include <iostream>

using namespace std;

int n, m;
int grid[21][21];
int move_nums[100];
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
bool In_Range(int x,int y, int gab){
    return(x+dx[gab]>0&&x+dx[gab]<=n&&y+dy[gab]>0&&y+dy[gab]<=n);
}

int main() {
    cin >> n >> m;
    int count[n*n+1]={};
    int big[n+1][n+1]={};
    int gab[n*n+1][n*n+1]={};
    int num=0;
    int gat=1; // 위치에 있는 개수
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            num++;
            cin >> grid[i][j];
            big[i][j]=grid[i][j];
            count[num]++;
            gab[num][gat]=grid[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> move_nums[i];
        int cnt=0;
        for(int j=1;j<=n*n;j++){
            
            for(int k=1;k<n*n;k++){
                if(gab[j][k]==move_nums[i]&&cnt==0){
                    cnt++;
                    int x=j/n+1;
                    int y=j%n;
                    if(y==0){
                        x-=1;
                        y=n;
                    }
                    int change=0;
                    int x_pos=0,y_pos=0;
                    int ch=0;
                    for(int l=0;l<8;l++){
                        if(In_Range(x,y,l)){
                            if(change<big[x+dx[l]][y+dy[l]]){
                                ch++;
                                change=big[x+dx[l]][y+dy[l]];
                                x_pos=x+dx[l];
                                y_pos=y+dy[l];
                            }
                        }
                    }
                    // cout<<"move_nums["<<i<<"]: "<<move_nums[i]<<endl;
                    // cout<<"j: "<<j<<" k: "<<k<<endl;
                    // cout<<"x: "<<x<<" y: "<<y<<endl;
                    // cout<<"change: "<<change<<" x_pos: "<<x_pos<<" y_pos: "<<y_pos<<endl;
                    if(ch>0){ // 주변에 뭐가 있을 때
                        int plus=k;
                        int delete_num=(x_pos-1)*n+y_pos;
                        int start;
                        for(int l=1;l<=n*n;l++){
                            if(gab[delete_num][l]==0){
                                start=l;
                                break;
                            }
                        }
                        int biggest=0;
                        for(int l=k;l<=n*n;l++){
                            if(gab[j][l]!=0){
                                if(biggest<gab[j][l]){
                                    biggest=gab[j][l];
                                }
                                gab[delete_num][start]=gab[j][l];
                                start++;
                                gab[j][l]=0;
                            }
                        }

                        if(biggest>big[x_pos][y_pos]){
                            big[x_pos][y_pos]=biggest;
                        }
                        int cha=0;
                        for(int l=1;l<k;l++){
                            if(gab[j][l]>cha){
                                cha=gab[j][l];
                            }
                        }
                        big[x][y]=cha;
                        
                    }

                    //  for(int i=1;i<=n*n;i++){
                    //     for(int j=1;j<=n*n;j++){
                    //         if(gab[i][1]==0){
                    //             cout<<"None";
                    //             break;
                    //         }
                    //         if(gab[i][j]==0){
                    //             break;
                    //         }
                    //         else{
                    //             cout<<gab[i][j]<<" ";
                    //         }
                            
                    //     }
                    //     cout<<endl;
                    // }
                    // cout<<endl;
                    // cout<<endl;
                    
                    

                }
            }

        }
    }

    for(int i=1;i<=n*n;i++){
        for(int j=1;j<=n*n;j++){
            if(gab[i][1]==0){
                cout<<"None";
                break;
            }
            
            
            
        }
        for(int j=n*n;j>=1;j--){
            if(gab[i][j]==0){
                continue;
            }
            else{
                cout<<gab[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    

    return 0;
}
