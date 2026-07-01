#include <iostream>

using namespace std;
void ask_user_input_color(char* color);

// namespace not that complictated , its like using function inside a class,
// but in this case we are using function inside a namespace, so we can use the function without using namespace name

int main()
{
	
	/*cout << "Hello, World!" << endl;*/

	char* str = new char[100];
	cout << "Enter your favorite color: ";
	std::cin.getline(str, 100);
	ask_user_input_color(str);

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