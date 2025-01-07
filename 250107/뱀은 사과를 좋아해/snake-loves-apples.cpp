#include <iostream>

using namespace std;

int N, M, K;
int x[10000], y[10000];
char d[1000];
int p[1000];
int space[101][101]={};

int main() {
    cin >> N >> M >> K;
    int tail_x=1,tail_y=1;
    space[1][1]=10; // 머리를 나타냄
    for (int i = 0; i < M; i++) {
        cin>>x[i]>>y[i];
        space[x[i]][y[i]]=2; // 사과는 2
    }
    int currentx=1,currenty=1;
    int time=0;
    int numx[10001]={0},numy[10001]={0};
    int length=1;
    numx[0]=1,numy[0]=1;
    int count_num=0;
    
    for (int i = 0; i < K; i++) {
        cin >> d[i] >> p[i];
        
        if(d[i]=='U'){     
            int start=currentx-1;
            int des =currentx-p[i];
            for(int j=start;j>=des;j--){
                if(j<=0){
                    time++;
                    cout<<time;
                    return 0;
                }
                if(space[j][currenty]==1){
                    int last_x,last_y;
                    for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                last_x=numx[k];
                                last_y=numy[k];
                                break;
                            }
                        }
                    if(last_x==j&&last_y==currenty){
                        time++;
                    count_num++;
                    numx[count_num]=j;
                    numy[count_num]=currenty;
                    if(length>1){
                        currentx--;
                        space[j][currenty]=10;
                        space[j+1][currenty]=1;
                        
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                break;
                            }
                        }
                        
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                break;
                            }
                        }
                        currentx--;
                        space[j][currenty]=10;
                        space[j+1][currenty]=0;
                    }
                    }
                    else{
                        time++;     
                        cout<<time;
                        return 0;
                    }
                }
                else if(space[j][currenty]==2){
                    time++;
                    space[j][currenty]=10;
                    space[j+1][currenty]=1;
                    count_num++;
                    length++;
                    numx[count_num]=j;
                    numy[count_num]=currenty;
                    currentx--;
                    continue;
                }
                else if(space[j][currenty]==0){
                    time++;
                    count_num++;
                    numx[count_num]=j;
                    numy[count_num]=currenty;
                    if(length>1){
                        currentx--;
                        space[j][currenty]=10;
                        space[j+1][currenty]=1;
                        
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                        }
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                        }
                        currentx--;
                        space[j][currenty]=10;
                        space[j+1][currenty]=0;
                    }
                    
                    
                        

                    
                }
                
            }
            
            
        }
        else if(d[i]=='D'){
            int start=currentx+1;
            int des =currentx+p[i];
            for(int j=start;j<=des;j++){
                if(j>N){
                    time++;
                    cout<<time;
                    return 0;
                }
                else if(space[j][currenty]==1){
                    int last_x,last_y;
                    for(int i=0;i<=count_num;i++){
                            if(numx[i]!=0){
                                
                                last_x=numx[i];
                                last_y=numy[i];
                                break;
                            }
                        }
                    if(last_x==j&&last_y==currenty){
                        time++;
                        count_num++;
                        numx[count_num]=j;
                        numy[count_num]=currenty;
                        if(length>1){
                            currentx++;
                            space[j][currenty]=10;
                            space[j-1][currenty]=1;
                            
                            for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                            }
                            length--;
                        }
                    else{
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                        }
                        space[j][currenty]=10;
                        space[j-1][currenty]=0;
                        currentx++;
                    }
                    }
                    else{
                        time++;     
                        cout<<time;
                        return 0;
                    }
                }
                else if(space[j][currenty]==2){
                    space[j][currenty]=10;
                    space[j-1][currenty]=1;
                    count_num++;
                    time++;
                    length++;
                    numx[count_num]=j;
                    numy[count_num]=currenty;
                    currentx++;
                    continue;
                }
                else if(space[j][currenty]==0) {
                    time++;
                    count_num++;
                    numx[count_num]=j;
                    numy[count_num]=currenty;
                    if(length>1){
                        
                        currentx++;
                        space[j][currenty]=10;
                        space[j-1][currenty]=1;
                        
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                        }
                        
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                            if(numx[k]!=0){
                                
                                space[numx[k]][numy[k]]=0;
                                numx[k]=0;
                                
                                
                                break;
                            }
                        }
                        space[j][currenty]=10;
                        space[j-1][currenty]=0;
                        currentx++;
                    }
                    
                    
                        

                    
                }
                
            }
        }
        else if(d[i]=='L'){
            int start=currenty-1;
            int des =currenty-p[i];
            for(int j=start;j>=des;j--){
                if(j<=0){
                    time++;
                    cout<<time;
                    return 0;
                }
                else if(space[currentx][j]==1){
                    int last_x,last_y;
                    for(int i=0;i<=count_num;i++){
                            if(numx[i]!=0){
                                
                                last_x=numx[i];
                                last_y=numy[i];
                                break;
                            }
                        }
                    if(last_x==currentx&&last_y==j){
                        time++;
                        currenty--;
                        count_num++;
                        numx[count_num]=currentx;
                        numy[count_num]=j;
                        if(length>1){
                            
                            space[currentx][j]=10;
                            space[currentx][j+1]=1;
                            for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                            
                        }
                        else{
                            for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                            space[currentx][j]=10;
                            space[currentx][j+1]=0;
                        }
                    }
                    else{
                        time++;     
                        cout<<time;
                        return 0;
                    }
                }
                else if(space[currentx][j]==2){
                    time++;
                    space[currentx][j]=10;
                    space[currentx][j+1]=1;
                    count_num++;
                    length++;
                    numx[count_num]=currentx;
                    numy[count_num]=j;
                    currenty--;
                    continue;
                }
                else if(space[currentx][j]==0) {
                    time++;
                    currenty--;
                    count_num++;
                    numx[count_num]=currentx;
                    numy[count_num]=j;
                    if(length>1){
                        
                        space[currentx][j]=10;
                        space[currentx][j+1]=1;
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                        space[currentx][j]=10;
                        space[currentx][j+1]=0;
                    }
                    
                    
                        

                    
                }
                
            }
        }
        else if(d[i]=='R'){
            int start=currenty+1;
            int des =currenty+p[i];
            for(int j=start;j<=des;j++){
                if(j>N){
                    time++;
                    cout<<time;
                    return 0;
                }
                else if(space[currentx][j]==1){
                    int last_x,last_y;
                    for(int i=0;i<=count_num;i++){
                            if(numx[i]!=0){
                                
                                last_x=numx[i];
                                last_y=numy[i];
                                break;
                            }
                        }
                    if(last_x==currentx&&last_y==j){
                        time++;
                    currenty++;
                    count_num++;
                    numx[count_num]=currentx;
                    numy[count_num]=j;
                    if(length>1){
                        
                        space[currentx][j]=10;
                        space[currentx][j-1]=1;
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                        
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                        space[currentx][j]=10;
                        space[currentx][j-1]=0;
                    }
                    }
                    else{
                        time++;     
                        cout<<time;
                        return 0;
                    }
                }
                else if(space[currentx][j]==2){
                    time++;
                    length++;
                    space[currentx][j]=10;
                    space[currentx][j-1]=1;
                    count_num++;
                    numx[count_num]=currentx;
                    numy[count_num]=j;
                    currenty++;
                    continue;
                }
                else if(space[currentx][j]==0) {
                    time++;
                    currenty++;
                    count_num++;
                    numx[count_num]=currentx;
                    numy[count_num]=j;
                    if(length>1){
                        
                        space[currentx][j]=10;
                        space[currentx][j-1]=1;
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                    }
                    else{
                        for(int k=0;k<=count_num;k++){
                                if(numx[k]!=0){
                                    
                                    space[numx[k]][numy[k]]=0;
                                    numx[k]=0;
                                    numy[k]=0;
                                    
                                    break;
                                }
                            }
                        space[currentx][j]=10;
                        space[currentx][j-1]=0;
                    }
                    
                    
                        

                    
                }
                
            }
        }
        // cout << "After command " << d[i] << " " << p[i] << ":" << endl;
        // cout << "Time: " << time << ", Current Position: (" << currentx << ", " << currenty << "), Length: " << length << endl;
        // cout << "Space state:" << endl;
        // for (int l = 1; l <= N; l++) {
        //     for (int k = 1; k <= N; k++) {
        //         cout << space[l][k] << " ";
        //     }
        //     cout << endl;
        // }
       
    }
    cout<<time;
    return 0;
}
