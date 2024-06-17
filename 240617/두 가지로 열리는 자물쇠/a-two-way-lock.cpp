#include <iostream>
#include <algorithm>

#define MAX_N 100
using namespace std;
int n;
int a1,b1,c1,a2,b2,c2;

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int cnt=0;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            for(int k=1;k<=n;k++){
                bool succed=false;
                bool as=false,bs=false,cs=false;

                for(int q=0;q<=2;q++){
                    int x=i+q;
                    int y=j+q;
                    int z=k+q;
                    if(x>n){
                        x-=n;
                    }
                    if(y>n){
                        y-=n;
                    }
                    if(z>n){
                        z-=n;
                    }
                    if(x==a1){
                        as=true;
                    }
                    if(y==b1){
                        bs=true;
                    }
                    if(z==c1){
                        cs=true;
                    }
                }

                for(int q=0;q<=2;q++){
                    int x=i-q;
                    int y=j-q;
                    int z=k-q;
                    if(x<=0){
                        x+=n;
                    }
                    if(y<=0){
                        y+=n;
                    }
                    if(z<=0){
                        z+=n;
                    }
                    if(x==a1){
                        as=true;
                    }
                    if(y==b1){
                        bs=true;
                    }
                    if(z==c1){
                        cs=true;
                    }
                }

                if(as==true&&bs==true&&cs==true){
                    succed=true;
                }
                as=false;
                bs=false;
                cs=false;

                for(int q=0;q<=2;q++){
                    int x=i+q;
                    int y=j+q;
                    int z=k+q;
                    if(x>n){
                        x-=n;
                    }
                    if(y>n){
                        y-=n;
                    }
                    if(z>n){
                        z-=n;
                    }
                    if(x==a2){
                        as=true;
                    }
                    if(y==b2){
                        bs=true;
                    }
                    if(z==c2){
                        cs=true;
                    }
                }

                for(int q=0;q<=2;q++){
                    int x=i-q;
                    int y=j-q;
                    int z=k-q;
                    if(x<=0){
                        x+=n;
                    }
                    if(y<=0){
                        y+=n;
                    }
                    if(z<=0){
                        z+=n;
                    }
                    if(x==a2){
                        as=true;
                    }
                    if(y==b2){
                        bs=true;
                    }
                    if(z==c2){
                        cs=true;
                    }
                }

                if(as==true&&bs==true&&cs==true){
                    succed=true;
                }


                if(succed==true){
                cnt++;
                }
            }

            
        }
    }
    cout<<cnt;

    return 0;
}