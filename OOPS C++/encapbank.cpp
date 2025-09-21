#include<iostream>
using namespace std;
class bankaccount{
    private:
    double balance;
    public:
    bankaccount(double intialbalance){
        balance=intialbalance;
    }
    void deposit(double amount){
    balance+=amount;
    }
    double getbalance(){
        return balance;
    }
};
int main()
{
    bankaccount myaccount(1000);
    myaccount.deposit(400);
    cout<<"current balance of the my account "<<myaccount.getbalance()<<endl;
    
}