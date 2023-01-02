#include <iostream>
using namespace std;
//Menu
void showMenu() {
    cout << "********************" << endl;
    cout << "1: Check Balance" << endl;
    cout << "2: Deposit" << endl;
    cout << "3: Withdraw" << endl;
    cout << "4: Transfer Money" << endl;
    cout << "5: Exit" << endl;
    cout << "********************" << endl;
}

int main() {
    int actNumber;
    double actBalance = 0;
    double * pActBal = &actBalance;

    int act2Number;
    double secondActBalance = 0;
    double * p2ActBal = &secondActBalance;

    double depositAmt;
    double withdrawAmt;
    double transferAmt;
    
    int optChoice;
    do {
        cout << "Enter account number " << endl;
        cin >> actNumber;
        showMenu();
        cout << "Select an option ";
        cin >> optChoice;
//ATM options
//Pointers are used to keep track of each accounts balance
        switch (optChoice) {
            case 1:
                if (act2Number != actNumber) {
                    cout << "Balance: " << *pActBal << endl;
                }
                else {
                    cout << "Balance: " << *p2ActBal << endl;
                }
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> depositAmt;
                *pActBal = *pActBal + depositAmt;
                cout << depositAmt << " deposited" << endl;
                break;

            case 3:
                cout << "Enter withdraw amount: ";
                cin >> withdrawAmt;
                *pActBal = *pActBal - withdrawAmt;
                cout << withdrawAmt << " withdrew" << endl;
                break;

            case 4:
                cout << "Enter account to transfer to ";
                cin >> act2Number;
                cout << "Enter amount to transfer ";
                cin >> transferAmt;
                *p2ActBal = *p2ActBal + transferAmt;
                *pActBal = *pActBal - transferAmt;
                cout << transferAmt << " transferred" << endl;
                break;
        }
    }while (optChoice != 5);
    return 0;
}
