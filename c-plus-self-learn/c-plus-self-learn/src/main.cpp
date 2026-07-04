#include <iostream>
using namename space std;
struct AuthResult {
	bool success ;
	int index ;
};

AuthResult Authentication(char** UserName, char** Password, char* name, char* password);


int main() {

	char** username = new char* [10];
	char** password = new char* [10];
	char** role = new char* [10];
	int userCount = 0;
	int already_logged_in[10];

	while (1)
	{
		cout << "Enter 1 for Login" << endl;
		cout << "Enter 2 for Register" << endl;
		cout << "Enter 3 for exit" << endl;

		int choice;
		cin.getline(cin, choice);

		switch (choice) {
		case 1:
		{
			char name[50];
			char password[50];

			cout << "Enter username: ";
			cin.getline(name, 50);

			cout << "Enter password: ";
			cin.getline(password, 50);

			AuthResult result = Authentication(username, password, name, password);

			if (result.success) {
				cout << "Login successful!" << endl;
				already_logged_in[result.index] = 1;
			}
			else {
				cout << "Invalid username or password." << endl;
			}
			break;
		}
		case 2:
		{
			char *username = 
		}
		break;
		}


		
	}

	return 0;
}

AuthResult Authentication(char** UserName, char** Password,char *name, char *password )
{
	bool success = false;
	int index = -1;
	for (int i = 0; i < 10; i++)
	{
		if (strcmp(UserName[i], name) == 0 && strcmp(Password[i], password) == 0)
		{
			success = true;
			index = i;
		}
	}

	if (success)
	{
		return { true, index };
	}
	else
	{
		return { false, -1 };
	}

}