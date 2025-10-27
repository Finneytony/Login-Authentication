#include <iostream>
#include <string>
using namespace std;

int main() {
	string username, password;
	string correctUsername = "admin";
	string correctPassword = "12345";
	int attempts = 0;

	const int MAX_ATTEMPTS = 3;

	cout << "=== Welcome to the Secure Login System ===" << endl;
	while (attempts < MAX_ATTEMPTS) {
		cout << "\nEnter username: ";
		getline(cin, username);

		cout << "Enter password: ";
		getline(cin, password);

		if (username == correctUsername && password == correctPassword) {
			cout << "\n✅ Login successful! Access granted." << endl;
			int option;
			cout << "\n1. View Account Info\n2. Change Password\n3. Exit\n";
			cout << "Choose an option: ";
			cin >> option;

			if (option == 1) {
				cout << "Your username: " << username << endl;
			}
			else if (option == 2) {
				string newPassword;
				cout << "Enter new password: ";
				cin >> newPassword;
				correctPassword = newPassword;
				cout << "Password successfully changed!" << endl;
			}
			else {
				cout << "Logging out..." << endl;
			}
			return 0;
		}
		else {
			cout << "\n❌ Incorrect username or password." << endl;
			attempts++;

			if (attempts < MAX_ATTEMPTS)
				cout << "Try again (" << (MAX_ATTEMPTS - attempts) << " attempts left)." << endl;
			else
				cout << "🚫 Too many failed attempts. Access denied." << endl;
		}
	}
	return 0;
}