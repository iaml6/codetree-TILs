#include <iostream>
using namespace std;

int m,d;
void Zo(int x,int y){
    if(x>12){
        cout<<"No";
    }
    if(x==1&&y<=31){
        cout<<"Yes";
    }
    else if(x==2&&y<=28){
        cout<<"Yes";
    }
    else if(x==3&&y<=31){
        cout<<"Yes";
    }
    else if(x==4&&y<=30){
        cout<<"Yes";
    }
    else if(x==5&&y<=31){
        cout<<"Yes";
    }
    else if(x==6&&y<=30){
        cout<<"Yes";
    }
    else if(x==7&&y<=31){
        cout<<"Yes";
    }
    else if(x==8&&y<=31){
        cout<<"Yes";
    }
    else if(x==9&&y<=30){
        cout<<"Yes";
    }
    else if(x==10&&y<=31){
        cout<<"Yes";
    }
    else if(x==11&&y<=30){
        cout<<"Yes";
    }
    else if(x==12&&y<=31){
        cout<<"Yes";
    }
    else cout<<"No";
}
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>m>>d;
    Zo(m,d);

    return 0;
}