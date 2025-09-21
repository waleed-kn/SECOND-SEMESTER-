#include<iostream>
using namespace std;
class book{
    public:
    string name;
    string author;
    double price;
    void displaydetails(){
        cout<<"name of the book  "<<name<<endl;
        cout<<"the name of the author "<<author<<endl;
        cout<<"price of the book is  "<<price<<endl;
    }
};
int main()
{
    book b1;
    b1.name="rich dad and poor man";
    b1.author="shaksphere";
    b1.price=231.2;
    b1.displaydetails();
}