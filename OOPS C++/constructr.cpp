#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int year;
    car(string b,int y){
        brand=b;
        year=y;
    }
void display(){
    cout<<"brand  "<<brand<<"  year  "<<year<<endl;
}
};
int main()
{
    car c1("toyota",130);
    c1.display();
}
