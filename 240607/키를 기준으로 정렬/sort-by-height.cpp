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

bool Change(Person x,Person y){
   return x.height<y.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    Person person[10];
    for(int i=0;i<10;i++){
        cin>>person[i].name>>person[i].height>>person[i].weight;
    }

    sort(person,person+n,Change);
    for(int i=0;i<n;i++){
       cout<<person[i].name<<" "<<person[i].height<<" "<<person[i].weight<<endl;;
    }

    return 0;
}