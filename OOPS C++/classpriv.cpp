#include<iostream>
using namespace std;
class car{
    private:
    string name;
    int speed;
    public:
    void setdata(string name,int speed);
    void display(){
        cout<<"name of car is"<<name<<endl;
        cout<<"speed of the car is"<<speed<<endl;
    }
    int getdata(){
        return speed;
    }
};

int main(){
    car mycar;
    mycar.setdata("porshe",290);
    mycar.getdata();
    mycar.display();
}