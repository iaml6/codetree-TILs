#include <iostream>
#define MAX_N 100
using namespace std;

int n,m;
int bomb[MAX_N]={};
int contin[MAX_N]={};
int next_hamsu[MAX_N]={};

void Yeon(int n,int m){  // 터지기 
    for(int i=0;i<n;i++){
        contin[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(bomb[i]==bomb[j]){
                contin[i]++;
            }
            else{
                break;
            }
        }
    }
   
    for(int i=0;i<n;i++){
        if(contin[i]>=m){
            for(int j=0;j<contin[i];j++){
                bomb[i+j]=0;
            }
        }
    }
    
    
    
}

bool Correct(int n){
    int correct=0;
    for(int i=0;i<n;i++){
        if(contin[i]>=m){
            correct++;
        }
    }
    if(correct>0){
        return true;
    }
    else return false;
}

int Length(int n){  // 0을 빼고 남은 수열의 길이 구하기 
    int count=0;
    for(int i=0;i<n;i++){
        if(bomb[i]!=0){
            count++;
        }
    }
    return count;
}

void New_Hamsu(int n){
    int start=0;
    for(int i=0;i<n;i++){
        next_hamsu[i]=0;
    }
    for(int i=0;i<n;i++){
        if(bomb[i]!=0){
            next_hamsu[start]=bomb[i];
            start++;
        }
    }
    
}

void Change(int n){
    for(int i=0;i<n;i++){
        bomb[i]=next_hamsu[i];
    }
}



int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>bomb[i];
    }
    int fine=0;
    while(true){
        
        Yeon(n,m);
        if(!Correct(n)){
            break;
        }
        fine++;
        New_Hamsu(n);
        int len=Length(n);
        Change(n);
        n=len;
        
       
    }
    int sum=n;
    
    if(sum==0){
        cout<<"0";
        return 0;
    }
    else if(fine==0){
       cout<<sum<<endl;
        for(int i=0;i<sum;i++){
            cout<<bomb[i]<<endl;
        } 
    }
    else{
        cout<<sum<<endl;
        for(int i=0;i<sum;i++){
            cout<<next_hamsu[i]<<endl;
        }
    }

    
    
    
    
    return 0;
}