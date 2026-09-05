#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
using namespace chrono;
using namespace this_thread;

void wait() {
	sleep_for(milliseconds(20));
}

int main() {
	string pas;
	bool check;
	string nums = " AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz01234567890";

	do {
		cout << "Enter alphanumeric password (max 4 characters): ";
		cin >> pas;

		if (pas.size() > 4) {
			cout << "4 characters only" << endl;
			check = true;
		}
		else {
			check = false;
		}
	} while (check);

	for (char i : nums) {
		// first nums
		cout << i << endl;
		wait();

		if (pas[0] == i) {
			// second nums
			for (char j : nums) {
				cout << i << ' ' << j << endl;
				wait();

				if (pas[1] == j) {
					// third nums
					for (char a : nums) {
						cout << i << ' ' << j << ' ' << a << endl;
						wait();

						if (pas[2] == a) {
							// fourt nums
							for (char b : nums) {
								cout << i << ' ' << j << ' ' << a << ' ' << b << endl;
								wait();

								if (pas[3] == b) {
									break;
								}
							}
							break;
						}
					}
					break;
				}
			}
			break;
		}
	}
	return 0;
}