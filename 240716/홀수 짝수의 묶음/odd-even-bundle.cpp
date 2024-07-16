#include <iostream>
#define MAX_N 1000
using namespace std;

int n;
int blocks[MAX_N];
int odd,even;


int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>blocks[i];
    }

    for(int i=0;i<n;i++){
        if(blocks[i]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }

    int group_num=0;
    while(true){
        if(group_num%2==0){
            if(even){
                even--;
                group_num++;
            }
            else if(odd>=2){
                odd-=2;
                group_num++;
            }
            else{
                if(even>0||odd>0){
                    group_num--;

                    
                }
                break;
            }
        }
        else{
            if(odd){
                odd--;
                group_num++;
            }
            else{
                break;
            }
        }
    }

    cout<<group_num;
    

    
    return 0;
}