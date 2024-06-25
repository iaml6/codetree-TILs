#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x,y;
    cin>>x>>y;
    int num=0;
    for(int i=x;i<=y;i++){
        if(i<100){
            if(i/10==i%10) num++;
        }
        else if(i<1000){
            if(i/100==i%10){
                num++;
            }
        }
        else if(i<10000){
            if(i/1000==i%10&&(i/100)%10==(i/10)%10){
                num++;
            }
        }
        else if(i<100000){
            if(i/10000==i%10&&(i/1000)%10==(i/10)%10){
                num++;
            }
        }
        else if(i<1000000){
            if(i/100000==i%10&&(i/10000)%10==(i/10)%10&&(i/1000)%10==(i/100)%10){
                num++;
            }
        }
    }

    cout<<num;
    return 0;
}