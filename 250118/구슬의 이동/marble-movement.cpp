#include <iostream>

using namespace std;

int n, m, t, k;
int r[2500], c[2500];
char d[2500];
int v[2500];
int square[51][51]={};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};
int mv[51][51]={}; // move를 mv로 변경
int exist[2501][4]={};
bool In_Range(int x, int y, int z, int v){
    return((x+=(v*dx[z]))>0&&(x+=(v*dx[z]))<=n&&(y+=(v*dy[z]))>0&&
    (y+=(v*dy[z]))<=n);
}

int main() {
    cin >> n >> m >> t >> k;
    int num=0;
    for (int i = 0; i < m; i++) {
        cin >> r[i] >> c[i] >> d[i] >> v[i];
        square[r[i]][c[i]]=1;
    }
    

    for(int i=1;i<=t;i++){
        for(int j=0;j<m;j++){
            exist[j][3]=j;
            if(exist[j][0]!=-10){
            if(d[j]=='U'){
                
                int dir =0;
                if(In_Range(r[j],c[j],dir,v[j])){
                    
                        square[r[j]][c[j]]=0;
                        r[j]+=v[j]*dx[dir];
                        c[j]+=v[j]*dy[dir];
                        square[r[j]][c[j]]=1;
                        mv[r[j]][c[j]]++; // move를 mv로 변경
                        exist[j][0]=r[j];
                        exist[j][1]=c[j];
                        exist[j][2]=v[j];
                        

                }
                else{
                    
                        int ch=-(r[j]+v[j]*dx[dir])+2;
                        //cout<<"ch: "<<ch<<endl;
                        square[r[j]][c[j]]=0;
                        r[j]=ch;
                        c[j]+=v[j]*dy[dir];
                        square[r[j]][c[j]]=1;
                        d[j]='D';
                        mv[r[j]][c[j]]++; // move를 mv로 변경
                        exist[j][0]=r[j];
                        exist[j][1]=c[j];
                        exist[j][2]=v[j];
                    
                    
                }
                // cout<<"r[i]: "<<r[j]<<" c[i]: "<<c[j]<<endl;
                
            }
            else if(d[j]=='D'){
                int dir =1;
                
                    if(In_Range(r[j],c[j],dir,v[j])){
                    square[r[j]][c[j]]=0;
                    r[j]+=v[j]*dx[dir];
                    c[j]+=v[j]*dy[dir];
                     square[r[j]][c[j]]=1;
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                    }
                
                else{
                    int ch=n-(r[j]+v[j]*dx[dir]-n);
                    //cout<<"ch: "<<ch<<endl;
                    square[r[j]][c[j]]=0;
                     r[j]=ch;
                    c[j]+=v[j]*dy[dir];
                     square[r[j]][c[j]]=1;
                     d[j]='U';
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                    }
                
                // cout<<"r[i]: "<<r[j]<<" c[i]: "<<c[j]<<endl;
            }
            else if(d[j]=='R'){
                int dir =2;
                
                    if(In_Range(r[j],c[j],dir,v[j])){
                    square[r[j]][c[j]]=0;
                    r[j]+=v[j]*dx[dir];
                    c[j]+=v[j]*dy[dir];
                     square[r[j]][c[j]]=1;
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                }
                else{
                    int ch=n-(c[j]+v[j]*dy[dir]-n);
                    //cout<<"ch: "<<ch<<endl;
                    square[r[j]][c[j]]=0;
                     c[j]=ch;
                     square[r[j]][c[j]]=1;
                     d[j]='L';
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                
                }
                
                // cout<<"r[i]: "<<r[j]<<" c[i]: "<<c[j]<<endl;
            }
            else if(d[j]=='L'){
                int dir =3;
                if(exist[j][0]!=-100){
                    if(In_Range(r[j],c[j],dir,v[j])){
                    square[r[j]][c[j]]=0;
                    r[j]+=v[j]*dx[dir];
                    c[j]+=v[j]*dy[dir];
                     square[r[j]][c[j]]=1;
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                     }
                
                else{
                    int ch=-(c[j]+v[j]*dy[dir])+2;
                    //cout<<"ch: "<<ch<<endl;
                    square[r[j]][c[j]]=0;
                     c[j]=ch;
                     square[r[j]][c[j]]=1;
                     d[j]='R';
                     mv[r[j]][c[j]]++; // move를 mv로 변경
                     exist[j][0]=r[j];
                     exist[j][1]=c[j];
                     exist[j][2]=v[j];
                }
                }
                
                // cout<<"r[i]: "<<r[j]<<" c[i]: "<<c[j]<<endl;


            }
                
        }
        }
        int alive[m]={};
        int dead[m]={};
        for(int j=1;j<=n;j++){
            for(int l=1;l<=n;l++){
                int sum=0;
                if(mv[j][l]>k){ // move를 mv로 변경
                    for(int h=0;h<m;h++){
                        
                        if(exist[h][0]==j&&exist[h][1]==l){
                            alive[sum]=exist[h][2]; 
                            dead[sum]=exist[h][3];
                            sum++;
                        }
                    }


                    // for(int h=0;h<sum;h++){
                    //     dead[h]=alive[h];
                    // }
                    for(int h=0;h<sum;h++){
                        for(int u=0;u<sum-1;u++){
                            if(alive[u]>alive[u+1]){
                                int change=alive[u];
                                alive[u]=alive[u+1];
                                alive[u+1]=change;
                                int change2=dead[u];
                                dead[u]=dead[u+1];
                                dead[u+1]=change2;
                            }
                        }
                    }

                    for(int h=0;h<sum;h++){
                        for(int u=0;u<sum-1;u++){
                            if(alive[u]==alive[u+1]){
                                if(dead[u]<dead[u+1]){
                                    int change=alive[u];
                                    alive[u]=alive[u+1];
                                    alive[u+1]=change;
                                    int change2=dead[u];
                                    dead[u]=dead[u+1];
                                    dead[u+1]=change2;
                                }
                            }
                        }
                    }

                    int cha=mv[j][l]-k;
                    for(int h=0;h<cha;h++){
                        for(int u=0;u<m;u++){
                            if(alive[h]==exist[u][2]&&dead[h]==exist[u][3]){
                                exist[u][0]=-10;
                                exist[u][1]=-10;
                            }
                        }
                    }

                

                }
            }
        }
        // for(int j=1;j<=n;j++){
        //     for(int l=1;l<=n;l++){
        //         cout<<mv[j][l]<<" ";
        //         mv[j][l]=0; // move를 mv로 변경
        //     }
        //     cout<<endl;
        // }

    }
    for(int i=0;i<m;i++){
        if(exist[i][0]>0){
            num++;
        }
    }
    cout<<num;

    // Write your code here!

    return 0;
}
