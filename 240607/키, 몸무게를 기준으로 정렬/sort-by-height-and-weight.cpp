#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int height;
        int weight;

        Person(string name,int height,int weight){
            this->name=name;
            this->height=height;
            this->weight=weight;
        }

        Person(){};
};

bool cmd(Person a,Person b){
    if(a.height==b.height){
        return a.weight>b.weight;
    }
    return a.height<b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Person person[n];
    for(int i=0;i<n;i++){
        cin>>person[i].name>>person[i].height>>person[i].weight;
    }
    sort(person,person+n,cmd);
    for(int i=0;i<n;i++){
        cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;
    }
    return 0;
}