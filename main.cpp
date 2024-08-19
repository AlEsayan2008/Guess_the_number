#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int user_number;
	bool while_wrong = false;
	do {
		int random_num = 1 + rand() % 10;
		cout << "Enter number:" << endl << endl;
		cin >> user_number;
		if (user_number != random_num) {
			cout << endl << "You don't guess the number" << endl;
			cout << "Noooo! computer hide number:" << random_num << endl;
		}
		else {
			cout << endl << "Yeah you guess this number" << endl;
			while_wrong = true; 
		} 				
	} while (!while_wrong);
	return 0;
}
