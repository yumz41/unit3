/*Write a C++ application that asks the user to enter two integers, obtains them from the 
user and displays their sum, products, differences and quotient (division) and Modulus(%).*/
//Bryce Bentulan

#include <iostream>

using namespace std;

int main()
{

	int int1, int2, sum, product, difference1, difference2, quotient1, quotient2, modulus1, modulus2;



	cout << "Enter a number: "; //first interger for application
	cin >> int1;

	cout << "Enter another number"; //second interger for application
	cin >> int2;

	
	sum = int1 + int2;
	product = int1 * int2;
	difference1 = int1 - int2;	// Two differences are needed because the two numbers might be asked in different order
	difference2 = int2 - int1;
	quotient1 = int1 / int2; //Two quotients are needed because the two numbers might be asked in different order
	quotient2 = int2 / int1;
	modulus1 = int1 % int2; // Two odulus are needed because the two numbers might be asked in different order
	modulus2 = int2 % int1;
	
	cout << "The sum is " << sum; 
	cout << ". The product is " << product;
	cout << ". The first differnce is " << difference1;
	cout << ". The second difference, if numbers are reveresed, is" << difference2;
	cout << ". The first quotient is " << quotient1;
	cout << ". The second quotient, if numbers are reversed, is " << quotient2;
	cout << ". The remainder is " << modulus1;
	cout << ". The remainder, if numbers are reversed, is " << modulus2;

	system("pause");


	

	return 0;
}