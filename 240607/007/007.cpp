#include <iostream>
#include <string>
using namespace std;

class Stu{
    public:
        string code;
        char point;
        int time;

        Stu(string code, char point,int time){
            this->code=code;
            this->point=point;
            this->time=time;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
        string code;
        char point;
        int time;   

        cin>>code>>point>>time;
        Stu stu1=Stu(code,point,time);
        cout<<"secret code : "<< stu1.code<<endl;
        cout<<"meeting point : "<< stu1.point<<endl;
        cout<<"time : "<< stu1.time<<endl;
    return 0;
}