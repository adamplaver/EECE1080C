#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double factorial(double factorial);

int main(){
	setprecision(4);
	int n;
	cout << "Factorial Test Driver" << endl;
	cout << "Enter N: ";
	cin >> n;
	cout << "Factorial: " << factorial(n) << endl;
	return 0;
}

double factorial(double factorial){
	int x;
	for(x = factorial - 1;x>0;x--){
		factorial = factorial * x;
	}
	return factorial;
}