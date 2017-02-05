#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double degreesToRadians(double angle_in_degrees);
double factorial(double factorial);
double mySine(double x);
double myCosine(double x);
double myTangent(double x);
const double PI = atan(1) * 4;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.setf(ios::left);
	cout.width(8);
	cout.precision(4);
	cout <<"\t\t\tSystem\t\tSystem\t\tSystem\t\n";
	cout.width(8);
	cout.precision(4);
	cout.setf(ios::left);
	cout <<"Degrees\t\tRadians\tSin\tSin\tCos\tCos\tTan\tTan\n";
	for(int x = 0;x<=360;x+=15){
		if(x == 90 || x == 270){
			cout.width(8);
			cout.precision(4);
			cout.setf(ios::right);
			cout << x << "\t" << 
			degreesToRadians(x) << "\t" << 
			sin(degreesToRadians(x)) << "\t" <<
			mySine(degreesToRadians(x)) << "\t" << 
			cos(degreesToRadians(x)) << "\t" <<
			myCosine(degreesToRadians(x)) << "\t" <<
			"inf" << "\t" <<
			"inf" << "\n";
		}else{
			cout.width(8);
			cout.precision(4);
			cout.setf(ios::right);
			cout << x << "\t" << 
			degreesToRadians(x) << "\t" << 
			sin(degreesToRadians(x)) << "\t" <<
			mySine(degreesToRadians(x)) << "\t" << 
			cos(degreesToRadians(x)) << "\t" <<
			myCosine(degreesToRadians(x)) << "\t" <<
			tan(degreesToRadians(x)) << "\t" <<
			myTangent(degreesToRadians(x)) << "\n";
		}
	}
}

double degreesToRadians(double angle_in_degrees){
	double radian = (angle_in_degrees * PI/180);
	return radian;
}

double factorial(double factorial){
	int x;
	for(x = factorial - 1;x>0;x--){
		factorial = factorial * x;
	}
	return factorial;
}

double mySine(double x){
	double a,b;
	int n = 3; 		// Counter
	int i = 1; 		// Counter
		a = x;	 	// a is current clac
		b = 1000;
	while(abs(b-a) >= 0.00001){
		b = a;
		if(i%2 == 0){
			// Add
			a = a + pow(x,n) / factorial(n);
		}else{
			// Subtract
			a = a - pow(x,n) / factorial(n);
		}
		i++;
		n+=2;
	}
	return a;
}

double myCosine(double x){
	double a,b;
	int n = 2; 		// Counter
	int i = 1; 		// Counter
		a = 1;	 	// a is current clac
		b = 1000;
	while(abs(b-a) >= 0.00001){
		b = a;
		if(i%2 == 0){
			// Add
			a = a + pow(x,n) / factorial(n);
		}else{
			// Subtract
			a = a - pow(x,n) / factorial(n);
		}
		i++;
		n+=2;
	}
	return a;
}

double myTangent(double x){
	double result = mySine(x)/myCosine(x);
	return result;
}