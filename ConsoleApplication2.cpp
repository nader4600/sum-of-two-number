#include <iostream>
using namespace std;
int main()
{
	int num1, num2,sum;
	char choice;
	do {
		cout << "Enter the first Number : " << endl;
		cin >> num1;
		cout << "Enter the second Number  : " << endl;
		cin >> num2;
		sum = num1 + num2;
		cout << sum << endl;
		cout << "Do you want to repeat : " << endl;
		cout << "Press y for yes" << endl;
		cout << "Press n for no" << endl;
		cin >> choice;
	} while (choice == 'y');
}