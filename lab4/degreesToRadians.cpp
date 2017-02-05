#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double degreesToRadians(double angle_in_degrees);
const double pi = atan(1.0)*4.0;

int main(){
	setprecision(4);
	double radian, angle_in_degrees;
	cout << "Degrees to Radians Test Driver" << endl;
	cout << "Enter angle in degrees: ";
	cin >> angle_in_degrees;
	radian = degreesToRadians(angle_in_degrees);
	cout << "Angle in Radians: " << radian << endl;
	return 0;
}

double degreesToRadians(double angle_in_degrees){
	return (angle_in_degrees * pi/180);
}