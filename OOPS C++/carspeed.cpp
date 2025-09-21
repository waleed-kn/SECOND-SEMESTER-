#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int speed;
    void display(){
        cout<<"name is"<<name<<endl;
        cout<<"speed of the car"<<endl;
    }
};
int main()
{
    car mycar;
    mycar.name="MERCEDES";
    mycar.speed=280;
    mycar.display();

}