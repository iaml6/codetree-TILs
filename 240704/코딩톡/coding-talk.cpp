#include <iostream>
using namespace std;

int n,m,p;
char alpa[100];
int noread[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m>>p;
    for(int i=0;i<m;i++){
        cin>>alpa[i]>>noread[i];
    }

    int read[n]={};
    for(int i=p-1;i<m;i++){
        read[alpa[i]-65]++;
    }

    for(int i=0;i<n;i++){
        if(read[i]==0){
            char after=i+'A';
            cout<<after<<" ";
        }
    }
    return 0;
}