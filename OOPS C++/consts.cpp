#include<iostream>
using namespace std;
class car{
    public:
    car(){
        cout<<"constructor is called"<<endl;
    }
    ~car(){
        cout<<"sedtructor is called"<<endl;
    }
};
int main()
{
   car c1;
}