#include<iostream>
using namespace std;
class car{
    private:
    int speed;
    public:
    void setspeed(int s){
        if(s>=0)
        speed=s;
        else{
            cout<<"speed is the negative"<<endl;
        }
    }
    int getspeed(){
        return speed;
    }

};
int main()
{
    car mycar;
    mycar.setspeed(230);
    cout<<"speed of the car is the "<<mycar.getspeed()<<endl;
}