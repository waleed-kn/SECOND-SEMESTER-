#include<iostream>
using namespace std;
class overload{
    public:
    void func(){
        cout<<" i am empty function"<<endl;
    }
    void func(int x){
        cout<<"i am not the empty one"<<endl;
    }
    void func(double y){
        cout<<"i am also not empty one"<<endl;
    }
};
int main()
{
    overload obj;
    obj.func();
    obj.func(78);
    obj.func(23.21);
    cout<<"funcc"<<obj.func(78)<<endl;

}