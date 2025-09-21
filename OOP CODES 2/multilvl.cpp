#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"this animal eats"<<endl;
    }
};
class mammal:public animal{
    public:
    void breath(){
        cout<<"this animal eat "<<endl;
    }
};
class people:public mammal{
    public:
    void oxygen(){
        cout<<"people also take oxygen breath out"<<endl;
    }
};
int main()
{
    people p;
    p.breath();
    p.eat();
    p.oxygen();
}