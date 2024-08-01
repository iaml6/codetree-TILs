#include <iostream>
#define MAX_N 100
using namespace std;

int n;
int block[MAX_N+1];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>block[i];
    }
    int first_start, first_end,second_first,second_end;
    cin>>first_start>>first_end;
    cin>>second_first>>second_end;
    int first[n+1];
    int zero=0;
    for(int i=1;i<=n;i++){
        if(i>=first_start&&i<=first_end){
            continue;
        }
        else{
            zero++;
            first[zero]=block[i];
        }
    }
    
    
    int zero_two=0;
    int second[n+1];
    for(int i=1;i<=zero;i++){
        if(i>=second_first&&i<=second_end){
            continue;
        }
        else{
            zero_two++;
            second[zero_two]=first[i];
        }
    }
    cout<<zero_two<<endl;
    for(int i=1;i<=zero_two;i++){
        cout<<second[i]<<endl;
    }
    return 0;
}