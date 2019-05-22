#include <iostream>
using namespace std;

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus1(int a, int b);

int main ()
{
	int c, num1, num2, add, subtract, multiply, divide, modulus;
	char b;
	bool stop=false;
	
	do
	{
		cout << "MENU:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n";
		cout << "Enter your operation choice (from 1 to 5):\n";
		cin >> c;
		cout << "Enter first integer value for the calculation:\n";
		cin >> num1;
		cout << "Enter second integer value for the calculation:\n";
		cin >> num2;
	
		switch (c)
		{
			case 1:
				{
					add=addition(num1, num2);
					cout << "Result: " << add;
				}
			break;
		
			case 2:
				{
					subtract=subtraction(num1, num2);
					cout << "Result: " << subtract;
				}
			break;
			
			case 3:
				{
					multiply=multiplication(num1, num2);
					cout << "Result: " << multiply;
				}
			break;
			
			case 4:
				{
					divide=division(num1, num2);
					cout << "Result: " << divide;
				}
			break;
			
			case 5:
				{
					modulus=modulus1(num1, num2);
					cout << "Result: " << modulus;
				}
			break;
			
			default:
			cout << "For the operation choice, you must enter a number between 1 and 5.";	
		}

		cout << "\n\nContinue? ";
		cin >> b;
	
		switch (b)
		{
			case 'y':
			case 'Y':
				{
					cout << '\n';
					stop=false;
				}
			break;
			
			default:
				stop=true;
		}	
	}
	
	while(!stop);
	return 0;
}

int addition(int a, int b)
{
	return (a+b);
}

int subtraction(int a, int b)
{
	return (a-b);
}

int multiplication(int a, int b)
{
	return (a*b);
}

int division(int a, int b)
{
	return (a/b);
}

int modulus1(int a, int b)
{
	return (a%b);
}
