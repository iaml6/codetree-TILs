#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int num[200][200];


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>num[i][j];
        }
    }
    int max_num=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<m-1;j++){
            int hab=0;
            hab+=num[i][j];
            hab+=num[i][j+1];
            hab+=num[i-1][j+1];
            max_num=max(max_num,hab);
        }

    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int hab=0;
            hab+=num[i][j];
            hab+=num[i][j+1];
            hab+=num[i+1][j];
            max_num=max(max_num,hab);
        }
        
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int hab=0;
            hab+=num[i][j];
            hab+=num[i][j+1];
            hab+=num[i+1][j+1];
            max_num=max(max_num,hab);
        }
        
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            int hab=0;
            hab+=num[i][j];
            hab+=num[i+1][j];
            hab+=num[i+1][j+1];
            max_num=max(max_num,hab);
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-2;j++){
            int hab=0;
            for(int k=j;k<=j+2;k++){
                hab+=num[i][k];
            }
            max_num=max(max_num,hab);
        }
    }
    cout<<max_num;
    return 0;
}