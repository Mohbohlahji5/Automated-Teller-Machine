#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
    int balance;
    int trial;
    balance = 10000;
    trial = 3;
    while (true) {
        system("CLS");
        cout << "Welcome To MOH Bank!" << endl;
        cout << "Please Enter Your Pin: ";
        int password;
        cin >> password;
        if (password == (1234)) {
            int option;
            while (true) {
                system("CLS");
                cout << "Welcome!!!" << endl;
                cout << "What Do You Want To Do?" << endl;
                cout << "\t 1. Check Balance." << endl;
                cout << "\t 2. Deposit." << endl;
                cout << "\t 3. Withdraw." << endl;
                cout << "\t 4. Exit." << endl;
                cin >> option;
                if (option == 1) {

                    cout << "Your Available Balance Is: " << balance << endl;
                    system("PAUSE");
                } else if (option == 2) {
                    cout << "How Much Would You Like To Add: ";
                    int add;
                    cin >> add;
                    balance += add;
                    cout << "Your Total Amount is: " << balance << endl;
                    system("PAUSE");
                } else if (option == 3) {
                    cout << "How Much Would You like to Withdraw: ";
                    int withdraw;
                    cin >> withdraw;
                    if (withdraw > balance) {
                        cout << "INSUFFICIENT BALANCE" << endl;
                    } else {

                        balance -= withdraw;
                        cout << "Your New Balance is: " << balance << endl;
                    }
                    system("PAUSE");
                } else if (option == 4) {
                    cout << "Wait A Second To Take Your Card..." << endl;
                    Sleep(1000);
                    break;
                } else {
                    cout << "INVALID OPTION!!!" << endl;
                }
            }
            cout << "Thank You For Your Service." << endl;
            break;
        } else {
            system("CLS");
            cout << "INVALID PASSWORD" << endl;
            trial--;
            Sleep(500);
        }
        if (trial == 0) {
            cout << "Sorry No More Trials!!" << endl;
            break;
        }
    }
}