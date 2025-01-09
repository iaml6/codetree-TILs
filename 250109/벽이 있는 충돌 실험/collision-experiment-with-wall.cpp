#include <iostream>

using namespace std;

int T;
int N, M;
int x[2500];
int y[2500];
char d[2500];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

int main() {
    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> N >> M;
        int count[N+1][N+1]={};
        int new_count[N+1][N+1]={};
        int exist[M]={};
        int x_exist[M]={};
        int y_exist[M]={};
        for (int i = 0; i < M; i++) {
            cin >> x[i] >> y[i] >> d[i];
            
        }

        for(int i=1;i<=2*N;i++){
            for(int j=0;j<M;j++){
                if(exist[j]==0){
                    if(d[j]=='U'){
                        if(x[j]+dx[0]<1){
                            d[j]='D';
                            x_exist[j]=x[j];
                            y_exist[j]=y[j];
                            new_count[x[j]][y[j]]++;
                        }
                        else{
                            new_count[x[j]+dx[0]][y[j]+dy[0]]++;
                            x_exist[j]=x[j]+dx[0];
                            y_exist[j]=y[j]+dy[0];
                            x[j]+=dx[0];
                            y[j]+=dy[0];
                        }
                        
                    }
                    else if(d[j]=='D'){
                        if(x[j]+dx[1]>N){
                            d[j]='U';
                            x_exist[j]=x[j];
                            y_exist[j]=y[j];
                            new_count[x[j]][y[j]]++;
                        }
                        else{
                            new_count[x[j]+dx[1]][y[j]+dy[1]]++;
                            x_exist[j]=x[j]+dx[1];
                            y_exist[j]=y[j]+dy[1];
                            x[j]+=dx[1];
                            y[j]+=dy[1];
                        }
                        
                    }
                    else if(d[j]=='R'){
                        if(y[j]+dy[2]>N){
                            d[j]='L';
                            x_exist[j]=x[j];
                            y_exist[j]=y[j];
                            new_count[x[j]][y[j]]++;
                        }
                        else{
                             new_count[x[j]+dx[2]][y[j]+dy[2]]++;
                            x_exist[j]=x[j]+dx[2];
                            y_exist[j]=y[j]+dy[2];
                            x[j]+=dx[2];
                            y[j]+=dy[2];
                        }
                       
                    }
                    else{
                        if(y[j]+dy[3]<1){
                            d[j]='R';
                            x_exist[j]=x[j];
                            y_exist[j]=y[j];
                            new_count[x[j]][y[j]]++;
                        }
                        else{
                            new_count[x[j]+dx[3]][y[j]+dy[3]]++;
                            x_exist[j]=x[j]+dx[3];
                            y_exist[j]=y[j]+dy[3];
                            x[j]+=dx[3];
                            y[j]+=dy[3];
                        }
                       
                    }
                }    
            }
            // cout<<"new_count "<<endl;
            // for(int j=1;j<=N;j++){
            //     for(int k=1;k<=N;k++){
            //         cout<<new_count[j][k]<<" ";
            //     }
            //     cout<<endl;
            // }
            // cout<<endl;

            for(int j=1;j<=N;j++){
                for(int k=1;k<=N;k++){
                    count[j][k]=0;
                    if(new_count[j][k]>1){
                        for(int l=0;l<M;l++){
                            if(x_exist[l]==j&&y_exist[l]==k){
                                exist[l]++;
                            }
                        }
                        new_count[j][k]=0;
                    }
                }
            }

            for(int j=1;j<=N;j++){
                for(int k=1;k<=N;k++){
                    if(new_count[j][k]==1){
                        count[j][k]=1;
                    }
                    new_count[j][k]=0;
                }
            }

            // cout<<"count "<<endl;
            // for(int j=1;j<=N;j++){
            //     for(int k=1;k<=N;k++){
            //         cout<<count[j][k]<<" ";
            //     }
            //     cout<<endl;
            // }
            // cout<<endl;
            
        }
        int num=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                if(count[i][j]==1){
                    num++;
                }
            }
        }
        cout<<num<<endl;
    

    }

    return 0;
}
