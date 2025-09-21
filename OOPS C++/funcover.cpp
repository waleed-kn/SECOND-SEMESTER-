#include<iostream>
using namespace std;
class math{
    public:
    int add(int a,int b){
        return a+b;
    }
    double add(double a,double b){
        return a+b;
    }
};
int main()
{
    math m2;
    m2.add(2,3);
    m2.add(2.2,3.5);
    cout<<"sum is  "<<m2.add(2,3)<<endl;
    cout<<"sum of the double "<<m2.add(2.2,3.5);
}