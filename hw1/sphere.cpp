#include <iostream>
#include <cmath>
#define pi 3.1415
using namespace std;
int main(){
	double r, sa, v;
	cout << "Sphere" << "\n" << "Radius? ";
	cin >> r;
	sa = 4 * pi * pow(r,2); 	//Surface Area
	v = (4 * pi * pow(r,3))/3; 	// Volume
	cout << "Surface Area: " << sa << endl << "Volume: " << v << endl;
	return 0;
}