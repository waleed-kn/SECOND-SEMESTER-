#include<iostream>
using namespace std;
class abstract{
    public:
    void startengine(){
        cout<<"engine getting start"<<endl;
    }
    void startcar(){
        cout<<"car is getting start "<<endl;
    }
};
int main()
{
    abstract a1;
    a1.startcar();
    a1.startengine();
}