/*Make a clone of ATM machine having options.
1. login
2. withdraw
3. transaction
4. see details
5. exit*/

#include<iostream>
using namespace std;
int main() {
	int pass = 123, choice, pin, a, money, d,e;
	float balance = 1000, add, amount;
	string loginid = "khizar", login, b, c, acc_num;
	cout << "<------WELCOME TO LGU ATM------>";
maincode:
	cout << "\nWhat you want to do?";
	cout << "\n1. Make Transactions(Witdraw,deposit,transfer)\n2. See details\n3. Exit\n";
	cin >> choice;
	switch (choice)
	{
	case 1:
	code:
		cout << "Enter your Login id: ";
		cin >> login;
		cout << "Enter pin: ";
		cin >> pin;
		if (loginid == login && pass == pin)
		{
			cout << "You have logged in successfully.";
		menu2:
			cout << "\nWhat you want now?";
			cout << "\n1. Withdraw\n2. Deposit\n3. Transfer\n";
			cin >> a;
			switch (a)
			{
			case 1:
				cout << "Enter your amount for withdraw: ";
				cin >> money;
				if (balance >= money)
				{
					cout << "Withdraw has made successfuly.";
					balance = balance - money;
					cout << balance;
					menu:
					cout << "\nWant to go to main menu?\n1. Yes\n2. No\n";
					cin >> c;
					if (c == "1" || c == "yes" || c == "Yes")
					{
						goto maincode;
					}
					if (c == "2" || c == "No" || c == "no")
					{
						goto end;
					}
					else {
						cout << "Invalid entry!";
						goto menu;
					}
				}
				else {
					cout << "Insufficent balance!";
					goto maincode;
				}
				break;
			case 2:
				cout << "Enter amount to deposit: ";
				cin >> add;
				balance = balance + add;
				cout << "Money deposit succesfully.";
				cout << "New balance: " << balance;
				goto maincode;
			case 3:
				code2:
				cout << "\nIn which bank you want to transfer money?\n1. HBL\n2. Easypaisa\n3. Jazzcash\n";
				cin >> e;
				switch (e)
				{
				case 1:
				case 2:
				case 3:
					cout << "Enter receivers accout number";
					cin >> acc_num;
					cout << "\nEnter amount:";
					cin >> amount;
					if (balance >= amount)
					{
						balance = balance - amount;
						cout << "Transfered Successfully";
						cout << "Remaining balance: " << balance;
						goto maincode;
					}
					else
					{
						cout << "Insufficent balance!";
						goto maincode;
					}
				default:
					cout << "Invalid entry!";
					goto code2;

				}
				
			default:
				cout << "Invalid entry!";
				goto menu2;
			}
		}
		else
		{
			cout << "incorrect id or pass!";
			goto check;
		}
	case 2:
		cout << "Your balance= " << balance;
		goto maincode;
	case 3:
		goto end;
	default:
		cout << "Invalid entry!";
		goto maincode;
	}
check:
	cout << "\nWant to relogin?\n1. Yes\n2. No\n";
	cin >> b;
	if (b == "1" || b == "yes" || b == "Yes")
	{
		goto code;
	}
	if (b == "2" || b == "No" || b == "no")
	{
		cout << "Thank You";
	}
	else
	{
		cout << "invalid entry!";
		goto check;
	}
end:
	cout << "\nThanks for your Time";
}