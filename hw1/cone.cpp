#include <iostream>
#include <cmath>
#define pi 3.1415
using namespace std;
int main(){
	double r,h,sa,v,s;
	cout << "Cone" << "\n" << "Radius? ";
	cin >> r;
	cout << "Height? ";
	cin >> h;
	s = sqrt(r*r + h*h); 		// Side length
	sa = pi * r * (r + s); 		// Surface area
	v = (pi*(r*r)*h)/3;		 	// Volume
	cout << "Surface Area: " << sa << endl;
	cout << "Volume: " << v << endl;
	return 0;
}