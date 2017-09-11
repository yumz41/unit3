/*Problem :Write a console application that inputs three integers from the user and displays the 
sum, average, products, and smallest and largest of the numbers.The calculation of
the average in this exercise should result in an integer representation of the average.
*/

#include <iostream>

using namespace std;

int main()
{

	int int1, int2, int3, sum, product, average, smalls, larges; //declaring variables

	cout << "Enter a number: "; //first interger for application
	cin >> int1;

	cout << "Enter another number"; //second interger for application
	cin >> int2;

	cout << "Enter another number"; //third interger for application
	cin >> int3;

	sum = int1 + int2 + int3;
	product = int1 * int2* int3;
	average = (int1 * int2* int3) / 3;
	
	if (int1 > int2 && int1 > int3) //loop used to obtain largest number
		cout << "Largest number is " << int1;
	else if (int2 > int3 && int2 > int1)
		cout << "Largest number is " << int2;
	else if (int3 > int1 && int3 > int2)
		cout << "Largest number is " << int3;

	if (int1 < int2 && int1 < int3) //loop used to obtain smallest number
		cout << " and smallest number is " << int1;
	else if (int2 < int3 && int2 < int1)
		cout << " and smallest number is " << int2;
	else if (int3 < int1 && int3 < int2)
		cout << " and smallest number is " << int3;
	
	cout << ", the sum is " << sum;
	cout << ", the product is " << product;
	cout << ", and the average is " << average;



	system("pause");




	return 0;
}