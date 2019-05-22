#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d;
	
	cout << "Selection Sorting...\n";
	cout << "Enter the array size:\n";
	cin >> a;
	
	int array[a];
	
	cout << "Enter the " << a << " integers:\n";
	
	for (b=0;b<a;b++)
	{
		cin >> array[b];
	}
	
	cout << "Your data: ";
	
	for (b=0;b<a;b++)
	{
		cout << array[b] << ' ';
	}
	
	cout << "\n\nAfter using selection sort...\n\n";
	
	for (b=0;b<a;b++)
	{
		for (c=b+1;c<a;c++)
		{
			if (array[b]>array[c])
			{
				d = array[b];
				array[b] = array[c];
				array[c] = d;
			}
		}
	}
	
	cout << "Sorted data: ";
	
	for (b=0;b<a;b++)
	{
		cout << array[b] << ' ';
	}
	
	return 0;
}
