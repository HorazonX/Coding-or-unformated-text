#include <iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;
using namespace chrono;
using namespace this_thread;

void song(string l,int t) {
	for (char i : l) {
		cout << i;
		sleep_for(milliseconds(t));
	}
	cout << endl;
}
void nt(int t2) {
	sleep_for(seconds(t2));
}

int main() {

	string game;

	cout << "coded by Random Access Memory" << endl;

	cout << "Game?: ";
	cin >> game;

	cout << endl;

	song("I SWEAR - MINIONS", 50);

	nt(3); cout << endl;

	song("Ah lapo da talachi matol lina", 200);
	nt(1);
	song("Ah, labadi hochi la nocha", 200);

	nt(2); cout << endl;

	song("Wu planachi leh ji", 130);
	nt(2);
	song("Fuh pa pu seh lamani", 100);

	nt(2); cout << endl;

	song("Anda wei", 150);
	nt(1);
	song("Lakareh lireywi gih leh bya", 160);
	nt(1);
	song("Mah ke reh", 150);

	nt(2); cout << endl;

	song("Anda wei", 150);
	nt(1);
	song("Lapahkreh lehguari teh lah keh", 150);
	nt(1);
	song("Lah peh reh", 120);

	nt(2); cout << endl;

	song("Anda wei", 150);
	nt(1);
	song("Lahcheh pe libeda ee leh gua", 150);
	nt(1);
	song("Lah gua reh", 120);

	nt(1);

	song("Ley show lee leh du", 130);
	nt(1);
	song("Lah keh rey dee zu", 130);
	nt(1);
	song("Bleh ah boh dee zu re kah zoh reh kah la", 130);
	nt(1);
	song("Anda wei", 150);

	nt(2);

	song("Lah du, leh ah mo de anda wei", 80);

	return 0;
}