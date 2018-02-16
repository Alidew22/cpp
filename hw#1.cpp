//
// Created by ALI ALTAL on 2/16/18.
//

include <iostream>

using namespace std;
class checkingaccount
{
public:
    int accountNumber;

    float balance;
    void opencheckingacc (int account, int initial){
        accountNumber=account;
        balance=initial;
    }
    void writecheck (int amount){
        balance=balance-amount;
    }
    void deposit (int deposit){
        balance=balance+deposit;
    }
    void CurtBalAccNum (){
        cout<<"this is the account Number "<< accountNumber <<" this is the balance " << balance<<endl;
    }
};
int main()
{

    checkingaccount checkingaccount1;
    checkingaccount checkingaccount2;

    checkingaccount1.opencheckingacc(2345, 1500);
    checkingaccount1.writecheck(835);
    checkingaccount1.writecheck(284);
    checkingaccount1.deposit(1450);
    checkingaccount1.CurtBalAccNum();
    checkingaccount2.opencheckingacc(9876, 4200);
    checkingaccount2.deposit(720);
    checkingaccount2.writecheck(2279);
    checkingaccount2.CurtBalAccNum();



    return 0;
}