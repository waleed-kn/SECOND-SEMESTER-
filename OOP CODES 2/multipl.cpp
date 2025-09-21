#include<iostream>
using namespace std;
class engine{
    public:
    void startengine(){
        cout<<"engine started  "<<endl;
    }
};
class wheels{
    public:
    void wheel(){ 
    cout<<"wheels is  going "<<endl;
    }
};
class car:public engine,public wheels{
    public:
    void cars(){
        cout<<"car is moving the forward  "<<endl;
    }

};
int main(){
    car mycar;
    mycar.cars();
    mycar.wheel();
    mycar.startengine();
}