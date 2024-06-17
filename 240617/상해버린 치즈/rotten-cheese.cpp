#include <iostream>
#include <algorithm>
#define MAX_D 1000
#define MAX_S 50

using namespace std;

int n,m,d,s;
int person[MAX_D][3];
int sickperson[MAX_S][2];
int cheese[MAX_S+1]={};


int main() {
    int cnt=0;
    cin>>n>>m>>d>>s;
    for(int i=0;i<d;i++){
        cin>>person[i][0]>>person[i][1]>>person[i][2];
    }

    for(int i=0;i<s;i++){
        cin>>sickperson[i][0]>>sickperson[i][1];
    }

   for(int i=0;i<s;i++){
        for(int j=0;j<d;j++){
            if(person[j][0]==sickperson[i][0]){
                if(person[j][2]<sickperson[i][1]){
                    cheese[person[j][1]]=1;
                }
            }
        }
   } 
    int correct[n+1]={};
   for(int i=1;i<=m;i++){
        for(int j=0;j<d;j++){
            if(person[j][1]==cheese[i]){
                correct[person[j][0]]++;

            }
        }
   }
   for(int i=1;i<=n;i++){
        if(correct[i]>0){
            cnt++;
        }
   }
   cout<<cnt;



    return 0;
}