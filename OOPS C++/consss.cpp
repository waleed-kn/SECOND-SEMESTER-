#include<iostream>
using namespace std;
class customer{
    string name;
    int balance;
    public:
    customer(){
        name="waleed";
        balance=23;
    }
    inline customer(string n,int b):name(n),balance(b){

    }
    void display(){
        cout<<"name is the "<<name<<" "<<balance<<endl;
    }

};
int main()
{
    customer b1;
    customer b2("waleed",21);
    b1.display();
    b2.display();



}