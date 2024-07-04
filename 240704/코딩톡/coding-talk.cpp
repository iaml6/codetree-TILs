#include <iostream>
#include <algorithm>
using namespace std;

int n,m,p;
char alpa[100];
int noread[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m>>p;
    char max_gab=n+64;
    
    for(int i=0;i<m;i++){
        cin>>alpa[i]>>noread[i];
       
        
    }

    int read[n]={};
    int readamount=noread[p-1];
    for(int i=p-1;i<m;i++){
       
        read[alpa[i]-65]++;
    }
    int before=p-2;
    if(readamount==noread[before]){
        while(readamount==noread[before]){
            read[alpa[before]-65]++;
            before--;
        }
        
    }
   
    int real = max_gab-65;
    
    for(int i=0;i<=real;i++){
        if(readamount==0){
            return 0;
        }
       
        if(read[i]==0){
            char after=i+'A';
            cout<<after<<" ";
        }
    }
    return 0;
}