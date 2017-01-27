#include <iostream>
#include <cmath>
#define pi 3.1415
using namespace std;
int main(){
	double inr, outr, sa, v;
	cout << "Torus" << "\n" << "Inner Radius? ";
	cin >> inr;
	cout << "Outer Radius? ";
	cin >> outr;
	sa = 4 * (pi*pi) * inr * outr;			// Surface area
	v = 2 * (pi*pi) * outr * (inr * inr);	// Volume
	cout << "Surface Area: " << sa << endl;
	cout << "Volume: " << v << endl;
	return 0;
}