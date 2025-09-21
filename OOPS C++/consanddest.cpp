#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    int speed;
    public:
    car(string b,int s){
        brand=b;
        speed=s;
        cout<<"constructor"<<brand<<"destructor"<<speed<<endl;
    }
    ~car(){
        cout<<"destructor"<<brand<<"consstructor"<<speed<<endl;
    }
    void showdetails(){
        cout<<"brand"<<brand<<"speed"<<speed<<endl;
    }
};
int main()
{
    cout<<"creating the car object"<<endl;
    car mycar("toyota",120);
    cout<<"using car object"<<endl;
    mycar.showdetails();
}