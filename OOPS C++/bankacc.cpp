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
    void withdraw(double amount){
        if(amount<=balance)
        balance-=amount;
        else{
            cout<<"insufficient fund in it"<<endl;
        }
    }
    double getbalance(){
            return balance;}

};
int main()
{
    bankaccount account(1000);
    account.deposit(400);
    account.withdraw(700);
    cout<<"remaining amount is a    "<<account.getbalance()<<endl;
}