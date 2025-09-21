#include<iostream>
using namespace std;
class edate{
    private:
    int y,m,d;
    public:
    void gdate(){
        cout<<"enter the year"<<endl;
        cin>>y;
        cout<<"enter the month"<<endl;
        cin>>m;
        cout<<"enter the days"<<endl;
        cin>>d;
    };
    void printdate(){
        cout<<"date is"<<endl;
        cout<<y<<"/"<<m<<"/"<<d<<endl;

    }
};
int main()
{
    edate c;
    c.gdate();
    c.printdate();
}