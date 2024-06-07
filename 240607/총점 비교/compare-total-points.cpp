#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name;
        int score1,score2,score3;

        Student(string name, int score1,int score2,int score3){
            this->name=name;
            this->score1=score1;
            this->score2=score2;
            this->score3=score3;
        }

        Student(){};
};

bool cmd(Student x,Student y){
    return (x.score1+x.score2+x.score3)<(y.score1+y.score2+y.score3);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student student[n];
    for(int i=0;i<n;i++){
        cin>>student[i].name>>student[i].score1>>student[i].score2>>student[i].score3;
    }

    sort(student,student+n,cmd);
    for(int i=0;i<n;i++){
        cout<<student[i].name<<" "<<student[i].score1<<" "<<student[i].score2<<" "<<student[i].score3<<endl;
    }
    return 0;
}