#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    string word;
    cin>>word;
    int num=word.length();
    char A[10];
    for(int i=0;i<num;i++){
        A[i]=word[i];
    }
    int min_count=100;
    
    for(int i=0;i<num;i++){
        int count=0;
        char last=A[num-1];
        
        // for(int k=num-1;k=1;k--){
        //      A[k]=A[k-1];
        // }
        A[0]=last;
        char now=A[0];
        int change=0;
        for(int j=0;j<num;j++){
            if(A[j]!=now){
                change++;
                now=A[j];
            }
        }
        if(change==0){
            min_count=min(min_count,3);
        }
        else{
            min_count=min(min_count,2*change+1);
        }

        
    }
    cout<<min_count;
    return 0;
}