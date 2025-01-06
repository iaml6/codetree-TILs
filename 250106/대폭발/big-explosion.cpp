#include <iostream>
#include <cmath>

using namespace std;

int n, m, r, c;
int square[101][101]={};
bool In_SpaceL(int y,int twice){
    return((y-pow(2,twice))>0);
}
bool In_SpaceR(int y,int twice){
    return((y+pow(2,twice))<=n);
}
bool In_SpaceU(int x,int twice){
    return((x-pow(2,twice))>0);
}
bool In_SpaceD(int x,int twice){
    return((x+pow(2,twice))<=n);
}

int main() {
    cin >> n >> m >> r >> c;
    square[r][c]=1;
    for(int i=1;i<=m;i++){
        int twice=i-1;
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(square[j][k]>0&&square[j][k]<=twice+1){
                    if(In_SpaceL(k,twice)){
                        //cout<<k<<" "<<j<<" L"<<endl;
                        int changek=k-pow(2,twice);
                        if(square[j][changek]==0){
                            square[j][changek]=twice+2;
                        }
                        
                    }
                    if(In_SpaceR(k,twice)){
                        //cout<<k<<" "<<j<<" R"<<endl;
                        int changek=k+pow(2,twice);
                        if(square[j][changek]==0){
                            square[j][changek]=twice+2;
                        }
                        
                    }
                    if(In_SpaceU(j,twice)){
                        //cout<<k<<" "<<j<<" U"<<endl;
                        int changej=j-pow(2,twice);
                        if(square[changej][k]==0){
                            square[changej][k]=twice+2;
                        }
                        
                    }
                    if(In_SpaceD(j,twice)){
                        //cout<<k<<" "<<j<<" D"<<endl;
                        int changej=j+pow(2,twice);
                         if(square[changej][k]==0){
                            square[changej][k]=twice+2;
                        }
                    }
                }
                
            }
        }
        
    }
        
    
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           
            if(square[i][j]>0){
                sum++;
            }
        }
        
    }
    cout<<sum;
    return 0;
}
