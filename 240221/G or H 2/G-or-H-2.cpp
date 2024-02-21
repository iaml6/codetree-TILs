#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    char alpa[101]={};
    for(int i=0;i<n;i++){
        int num;
        char word;
        cin>>num>>word;
        alpa[num]=word;
    }
    int max_num=0;
    for(int i=0;i<101;i++){
        for(int j=i+1;j<101;j++){
            if((alpa[i]=='H'||alpa[i]=='G')&&(alpa[j]=='H'||alpa[j]=='G')){
                int g=0,h=0;
                for(int k=i;k<=j;k++){
                    if(alpa[k]=='G'){
                        g++;
                    }
                    if(alpa[k]=='H'){
                        h++;
                    }
                }
                if(g==0||h==0||g==h){
                    int count=j-i;
                    max_num=max(max_num,count);
                }
            }
            
        }
    }
    cout<<max_num;
    return 0;
}