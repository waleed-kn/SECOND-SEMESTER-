#include<iostream>
using namespace std;
class programming{
    private:
    string name;
    float version;
    public:
    void setdata(string a,int b){
        name=a;
        version=b;
    }
    string getname(){
        return name;
    }
    float getversion(){
        return version;
    }
};
int main()
{
    programming c;
    c.setdata("c++",17.5);
    cout<<"name and the version is"<<"/"<<c.getname()<<c.getversion()<<endl;
}