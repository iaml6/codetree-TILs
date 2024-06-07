#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        int height;
        int weight;
        int num;

        Student(int height,int weight,int num){
            this->height=height;
            this->weight=weight;
            this->num=num;
        }

        Student(){};
};

bool cmd(Student a, Student b){
    if(a.height==b.height&&a.weight==b.weight){
        return a.num<b.num;
    }
     if(a.height==b.height){
        return a.weight>b.weight;
     }

     return a.height>b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Student student[n];
    for(int i=0;i<n;i++){
        cin>>student[i].height>>student[i].weight;
        student[i].num=i+1;
    }

    sort(student,student+n,cmd);
    for(int i=0;i<n;i++){
        cout<<student[i].height<<" "<<student[i].weight<<" "<<student[i].num<<endl;
    }

    return 0;
}