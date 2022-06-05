#include <iostream>
using std::cout;

#include "Account.h"

int main()
{
    Account al;
    al.Deposit(90);
    cout << "After depositing $90 " <<
        "balance is " << al.GetBalance() << '\n';
    for (auto s : al.Report())
    {
        cout << s << '\n';
    }

    al.Withdraw(50);
    if (al.Withdraw(100))
    {
        cout << "second withdraw succeeds" << '\n';
    }

    cout << "After withdrwaing $50 then $100" << '\n';
    for (auto s : al.Report())
    {
        cout << s << '\n';
    }

    return 0;

}
