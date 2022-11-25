#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
	float num1, num2 ;
	cout << "Enter the number" ;
	cin >> num1>> num2 ;
	
	cout<<showpoint ;
	cout<<fixed ;
	cout<<setprecision(3) ;
	
	float sum = num1 + num2 ;
	cout <<setw(20) <<"sum is :" <<sum ;
	cout << endl ;
	
	//cout<<noshowpoint ;
	float sub = num1 - num2 ;
	cout  <<setw(20) <<"subtraction is :" <<sub ;
	cout << endl ;
	
	float mul = num1 * num2 ;
	cout <<setw(20) <<"multiplication is: " <<mul ;
	cout << endl ;
	
	double div = (float) num1 / num2 ;
	cout <<setw(20) <<"division is :" <<div ;
	cout <<endl ;
	
	///float rem = num1 % num2 ;
	///cout <<"reminder is :" <<rem ;
	///cout <<endl ;
	
	return 0 ;
}
