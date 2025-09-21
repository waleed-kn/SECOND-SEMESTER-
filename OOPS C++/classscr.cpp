#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    string model;
    int year;
    public:
    car details(string b,string m,int y){
        brand=b;
        model=m;
        year=y;
    }
    void display(){
        cout<<"brand "<<brand<<"model "<<model<<"year "<<year<<endl;
    }
};
int main(){
    car car1("swift","civic",2020);
    car car2("elantra","porshe",2019);
    car car3("haval","landcrusier",2024);
    car1.display();
    car2.display();
    car3.display();
}