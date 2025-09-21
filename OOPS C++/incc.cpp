#include<iostream>
using namespace std;
class router{
    private:
    string name;
    double ipaddress;
    public:
    router(string n,double i){
        name=n;
        ipaddress=i;
        cout<<"router name and the double ipaddress is  "<<name<<ipaddress<<endl;
    }
    void display(){
        cout<<"router name"<<name<<"ipaddress"<<ipaddress<<endl;
    }
    ~router(){
        cout<<"router object destroyed for"<<name<<endl;
    }


};
int main()
{
    router r1("storm fiber",123.213);
    r1.display();
}