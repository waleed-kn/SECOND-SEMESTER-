#include<iostream>
using namespace std;
class car{
    private:
    string brand;
    public:
     car(string b){
        brand=b;
        cout<<"car object created for the brand        "<<brand<<endl;
     }

};
int main()
{
   car c1("toyota");
}
