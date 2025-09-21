#include<iostream>
using namespace std;
class vehicle{
    protected:
    int speed;
    public:
    vehicle(int s){
        speed=s;
    }
    void setspeed(){
        cout<<"speed "<<speed<<"km/"<<endl;
    }
};
class car:public vehicle{
    private:
    string brand;
    public:
    car(string b,int s):vehicle(s){
        brand=b;
    }
    void showdetail(){
        cout<<"car brand"<<brand<<endl;
        setspeed();
    }
};
int main(){
    car mycar("waleed",120);
    mycar.setspeed();
}