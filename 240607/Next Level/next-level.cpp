#include <iostream>
#include <string>
using namespace std;

class Store{
    public:
        string id;
        int level;

        Store(string id="codetree",int level=10){
            this->id=id;
            this->level=level;
        }
};

int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int level;
    cin>>id>>level;
    Store store1=Store();
    Store store2=Store(id,level);
    cout<<"user "<<store1.id<<" lv "<<store1.level<<endl;
    cout<<"user "<<store2.id<<" lv "<<store2.level<<endl;
    return 0;
}