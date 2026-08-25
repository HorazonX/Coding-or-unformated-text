#include <iostream>
using namespace std;

int main() {
    int choice;
    int balance = 1000;
    int breaknatayo = true;

    while (true) {
        cout << "============ MINI ATM ============" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. exit" << endl;

        cout << endl;
        cout << "choice: ";
        cin >> choice;

        if (choice == 1) {
            while (true){
                cout << "============ Balance ============" << endl;
                cout << endl;
                cout << "Your Balance: " << balance << endl;

                int a;

                cout << "Press 1 to exit: ";
                cin >> a;

                cout << endl;

                if (a == 1) {
                    break;
                } else {
                    cout << "plss put the correct number" << endl;
                    continue;
                }
            }
        } else if (choice == 2) {
                int m;
                int b;
                cout << "============ Deposit ============" << endl;
                cout << endl;

                cout << "Insert Money: ";
                cin >> m;

                balance = balance + m;

                cout << endl;
                
            while (true) {
                cout << "press 1 to exsit: " << endl;
                cin >> b;

                if (b == 1){
                    break;
                } else {
                    cout << "============ Deposit ============" << endl;
                    cout << endl;
                    cout << "Money Deposited: " << m << endl;
                    cout << endl;
                    cout << "plss put the correct number" << endl;
                    continue;
                }
            }
        } else if ( choice == 3) {
            while (breaknatayo) {
                int w;
                int b;
                int b1;


                cout << "============ Withdraw ============" << endl;

                cout << endl;

                cout << "Input amount to withdraw: ";
                cin >> w;

                cout << endl;

                if (balance < w){
                    cout << "balance kulang" << endl;
                    cout << "press 1 to exit" << endl;
                    cin >> breaknatayo;

                    if (b1 == 1) {
                        breaknatayo = false;
                    } else {
                        continue;
                    }

                } else {
                    balance = balance - w;
                }

                while (true) {
                    cout << "============ Withdraw ============" << endl;
                    cout << endl;
                    cout << "press 1 to exit" << endl;
                    cin >> b;

                    if (b == 1){
                        break;
                    } else {
                        cout << "invalid number" << endl;
                        continue;
                    }
                }
                break;
            }
        } else if (choice == 4) {
            cout << "thanks you" << endl;
            break;

        } else {
            cout << "plss put the avilable number" << endl;

        }
    }
}
