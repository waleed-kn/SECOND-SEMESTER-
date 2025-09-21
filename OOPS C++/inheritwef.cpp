#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"the animal eats food"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"the dogs barks"<<endl;
    }
};
class cat:public dog{
    public:
    void hens(){
        cout<<"hens chicks the eggs "<<endl;
    }
};
int main()
{
    cat obj;
    obj.bark();
    obj.eat();
    obj.hens();
    
}