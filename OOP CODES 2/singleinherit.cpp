#include<iostream>
using namespace std;
class car{
    private:
    string model;
    string name;
public:
  car(){
    model="  2001";
    name="  culltus";
    cout<<"defaut the constructor";
  }

void setcar(string m,string n){
    model=m;
    name=n;
}
void display(){
    cout<<"brnad"<<name<<"name"<<name<<endl;
}
};
int main()
{
    car car2;
    car2.display();
    car2.setcar("mehran","2004");
    car2.display();

}