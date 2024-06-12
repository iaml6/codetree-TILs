#include <iostream>
#include <algorithm>

class Develop{
    public:
        int time,dev1,dev2;

        Develop(int time,int dev1,int dev2){
            this->time=time;
            this->dev1=dev1;
            this->dev2=dev2;

        }

        Develop(){};
};

bool cmp(Develop a,Develop b){
    return a.time<b.time;
}

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,p,t;
    cin>>n>>k>>p>>t;
    Develop develop[t];
    int time,dev1,dev2;
    int infect[n+1]={};
    int handshake[n+1]={};
    for(int i=0;i<t;i++){
        cin>>develop[i].time>>develop[i].dev1>>develop[i].dev2;
    }
    sort(develop,develop+t,cmp);
    infect[p]=1;
    for(int i=0;i<t;i++){
        if(infect[develop[i].dev1]==1&&handshake[develop[i].dev1]<k){
            handshake[develop[i].dev1]++;
            infect[develop[i].dev2]=1;
        }
        if(infect[develop[i].dev2]==1&&handshake[develop[i].dev2]<k){
            handshake[develop[i].dev2]++;
            infect[develop[i].dev1]=1;
        }
    }
    int count=0;
    for(int i=1;i<n+1;i++){
        if(infect[i]==1){
            cout<<"1";
        }
        else cout<<"0";
    }
    



    return 0;
}