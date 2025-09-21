#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"this animal eats food"<<endl;

    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"dogs bark"<<endl;
    }
};
int main()
{
    dog mydog;
    mydog.eat();
    mydog.bark();
}