#include <iostream>

using namespace std;

void showchoice();
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);


int sum = 0;
int main()
{
	int choice = 0, num1 = 1, num2 = 1;

	do
	{
		
		showchoice();
		cout << "Please enter your choice of calculation or choose 0 to exit: ";
		cin >> choice;


		switch (choice)
		{
		case 1:
		{
			cout << "you have chosen Addition" << endl;
			cout << "please enter your first number: ";
			cin >> num1;

			cout << endl << endl;

			cout << "please enter your second number: ";
			cin >> num2;

			int sub = add(num1, num2);
			cout << endl;
			break;
		}
		case 2:
		{
			cout << "you have chosen Subtraction" << endl;
			cout << "please enter your first number: ";
			cin >> num1;

			cout << endl << endl;

			cout << "please enter your second number: ";
			cin >> num2;

			int sub = subtract(num1, num2);
			cout << endl;

			break;
		}
		case 3:
		{
			cout << "you have chosen Multiplication" << endl;
			cout << "please enter your first number: ";
			cin >> num1;

			cout << endl << endl;

			cout << "please enter your second number: ";
			cin >> num2;
			int sub = multiply(num1, num2);
			cout << endl;
			break;
		}
		case 4:
		{
			cout << "you have chosen Division" << endl;
			cout << "please enter your first number: ";
			cin >> num1;

			cout << endl << endl;

			cout << "please enter your second number (divider): ";
			cin >> num2;
			int sub = divide(num1, num2);
			cout << endl;
			break;
		}

		}


	} while (choice != 0);


	system("pause");
	return 0;

}




int add(int num1, int num2)
{
	sum = num1 + num2;

	cout << num1 << " + " << num2 << " = " << sum << endl;

	return sum;
}



int subtract(int num1, int num2)
{
	sum = num1 - num2;

	cout << num1 << " - " << num2 << " = " << sum << endl;

	return sum;

}


int multiply(int num1, int num2)
{
	sum = num1 * num2;

	cout << num1 << " * " << num2 << " = " << sum << endl;

	return sum;


}

int divide(int num1, int num2)
{

	sum = num1 / num2;

	cout << num1 << " / " << num2 << " = " << sum << endl;

	return sum;

}


void showchoice()
{
	cout << endl;
	cout << "1) Addition" << endl;
	cout << "2) Subtraction" << endl;
	cout << "3) Multipication" << endl;
	cout << "4) Division" << endl;
	cout << "0) Exit" << endl << endl;

}