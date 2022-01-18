#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int a[] = {1,2,4,6,9}; 
	double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 
	 
	cout << "Address of the highest value in array A is " << &a << "\n";
	cout << "The highest value in array A is "<< *max_element(a, a+5) << "\n";
	
	cout << "Address of the highest value in array B is " << &b << "\n";
	cout << "The highest value in array B is "<< *max_element(b,b+9) << "\n";

	return 0;
}