#include<iostream>
using namespace std;
class engine{
    public:
    void startengine(){
        cout<<"engine started"<<endl;
    }
};
class wheels{
    public:
    void rotatewheels(){
        cout<<"wheels is rotating"<<endl;
    }
};
class car:public engine,public wheels{
    public:
    void drive(){
        cout<<"car is driving"<<endl;
    }
};
int main()
{
    car mycar;
    mycar.startengine();
    mycar.rotatewheels();
    mycar.drive();
}


