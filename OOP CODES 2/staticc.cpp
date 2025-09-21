#include<iostream>
using namespace std;
class student{
    private:
    int rollnumber;
    static int count;
    public:
    void setdata(int r){
        rollnumber=r;
        count++;
    }
    void display()
    {
        cout<<"roll number is  the "<<rollnumber<<endl;
        cout<<"count so far  "<<count<<endl;
    }
    static void showcount(){
        cout<<"count so far is  "<<count<<endl;

    }
  
};
int student::count;
int main()
{
    student s1,s2,s3;
    s1.setdata(12);
    s2.setdata(23);
    s3.setdata(12);
    s1.display();
    s2.display();
    s3.display();
    student::showcount();
}
