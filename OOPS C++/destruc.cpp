#include<iostream>
using namespace std;
class customer{
    private:
    string name;
    int *bal;
    public:
    customer(string s,int b){
        name=s;
        bal=new int;
        *bal=23;
    }
    void displaydetails(){
        cout<<"name  "<<name<<"bal "<<bal<<endl;
    }
    ~customer(){
        delete bal; 
        cout<<"destructor is called  "<<endl;
    }
    
};
int main()
{
    customer c1("waleed",21);
    c1.displaydetails();
}