#include<iostream>
using namespace std;
class calculator{
    private:
    int a;
    int b;
    public:
    void xcalculator(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"sum of the number is "<<a+b<<endl;
    }
};
int main()
{
    calculator c1;
    c1.xcalculator(2,2);
    c1.display();
}