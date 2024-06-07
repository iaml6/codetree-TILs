#include <iostream>
#include <string>
using namespace std;

class Weather{
    public:
        string date;
        string date2;
        string date3;
        Weather(string date,string date2,string date3){
            this->date=date;
        this->date2=date2;
        this->date3=date3;

        }
        
        Weather(){};
};

Weather weather[100];
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>weather[i].date>>weather[i].date2>>weather[i].date3;
    }

    string big="2100-12-31";
    int num=0;

    for(int i=0;i<n;i++){
        if(weather[i].date3=="Rain"){
            if(weather[i].date<big){
                big=weather[i].date;
                num=i;
            }
        }
    }

    cout<<weather[num].date<<" "<<weather[num].date2<<" "<<weather[num].date3;
    return 0;
}