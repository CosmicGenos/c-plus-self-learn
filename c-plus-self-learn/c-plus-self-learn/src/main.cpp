#include <iostream>

using namespace std;
void ask_user_input_color(char* color);

// namespace not that complictated , its like using function inside a class,
// but in this case we are using function inside a namespace, so we can use the function without using namespace name

int main()
{
	
	/*cout << "Hello, World!" << endl;*/

	char* str1 = new char[100];
	char* str2 = new char[100];
	cout << "Enter your Frist Name: ";
	cin.getline(str1, 100);
	cout << "Enter your Last Name: ";
	cin.getline(str2, 100);
	cout << "Hello, " << str1 << " " << str2 << endl;

	return 0;
	
}

//#include <cstdio>
//using namespace std;
//
//int main()
//{
//	puts("Click on Button");
//	puts("Create a new player");
//	puts("Add life to player");
//	return 0;
//}


char is_char(char c)
{
	return c; 
}

void ask_user_input_color(char* color)
{
	std::cout << "Hey my favorite color also " << color << "\n";
}