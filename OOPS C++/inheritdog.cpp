#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eats the beans"<<endl;
    }
};
class dog:public animal{

    public:
    void bark(){
        cout<<"barking in the street"<<endl;
    }
};
int main()
{
    dog mydog;
    mydog.eat();
    mydog.bark();
}