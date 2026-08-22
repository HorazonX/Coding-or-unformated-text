#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int choice;
    int exitc;

    while (true) {
        cout << "-------------------- Calculator-------------------- " << endl;
        cout << " Please put choice a number following bellow" << endl;

        cout << endl;

        cout << " 1: addition (+)" << endl;
        cout << " 2: subtraction (-)" << endl;
        cout << " 3: multiplication (*)" << endl;
        cout << " 4: division (/)" << endl;
        cout << " 5: exit" << endl;

        cout << endl;

        cout << " please input your choice" << endl;
        cout << " >>> ";
        cin >> choice;

        cout << endl;

        if (choice == 5){
            break;
        } else if (choice >= 5 or choice <= 0) {
            cout << "ano????" << endl;
            cout << endl;
            continue;
        }

        cout << " put your first number: ";
        cin >> num1;

        cout << " put your second number: ";
        cin >> num2;

        cout << endl;

        if (choice == 1) {
            cout << " answer: " << num1 + num2 << endl;
        } else if (choice == 2) {
            cout << " answer: " << num1 - num2 << endl;
        } else if (choice == 3) {
            cout << " answer: " << num1 * num2 << endl;
        } else if (choice == 4) {
            if (num2 == 0) {
                cout << " ulol!!! hindi yan pwede bossing, 0??? error yan ya" << endl;
            } else {
                cout << " answer: " << num1 / num2 << endl;
            }
        } else {
            cout << " ulol" << endl;
        }

        cout << endl;

        cout << " you wanna exit? (0 = NO / 1 = YES): ";
        cin >> exitc;

        if (exitc == 1) {
            break;
        } else if (exitc == 0) {
            cout << "ok" << endl;
        } else {
            cout << "huh?????" << endl;
        }
        
    }
}