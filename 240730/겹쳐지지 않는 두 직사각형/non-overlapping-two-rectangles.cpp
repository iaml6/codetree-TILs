#include <iostream>
#include <algorithm>
#define MAX_N 5
using namespace std;

int n,m;
int square[MAX_N][MAX_N];

int Second(int start_x,int start_y,int end_x,int end_y,int a, int b){
    int sum=-100000;
    int correct=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            
            for(int k=i;k<a;k++){
                for(int l=j;l<b;l++){
                    
                    int hab=0;
                    correct=0;
                    for(int c=i;c<=k;c++){
                        
                        for(int d=j;d<=l;d++){
                            if((c>=start_x&&c<=end_x)&&(d>=start_y&&d<=end_y)) {
                                correct++;
                                break;}
                            hab+=square[c][d];
                        }

                    }
                    if(correct==0){
                        sum=max(sum,hab);
                    }
                    
                }
            }
        }
    }
    return sum;
}

int Square(int a,int b){
    int sum=-100000;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=i;k<a;k++){
                for(int l=j;l<b;l++){
                    int hab=0;
                    for(int c=i;c<=k;c++){
                        
                        for(int d=j;d<=l;d++){
                            hab+=square[c][d];
                        }

                    }
                    hab+=Second(i,j,k,l,a,b);

                    sum=max(sum,hab);


                }
            }
        }
    }

    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>square[i][j];
        }
    }

    
    cout<<Square(n,m);

    return 0;
}