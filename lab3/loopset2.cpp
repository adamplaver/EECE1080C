#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float n,y; //Counter for the .5 loop
	int x, a, b; // Counter, sums
	for(n=25;n>=0;n-=.5){
		if(n==0){
			cout << n << endl;
		}else{
			cout << n << ",";
		}
	}
	n = 25;
	while(n>=0){
		if(n==0){
			cout << n << endl;
		}else{
			cout << n << ",";
		}
		n-=.5;
	}
	b = 0;
	for(a=200;a>=20;a--){
		x+=a;
		b++;
	}
	cout << "AVERAGE: " << x/b << endl;
	b = 0; x = 0; a = 200; // Resets Vars.
	while(a>=20){
		x+=a;
		b++;
		a--;
	}
	cout << "AVERAGE: " << x/b << endl;
	b = 0; x = 0;
	for(n=40;n>=2;n-=.5){
		y+=n;
	}
	cout << "SUM: " << y << endl;
	b = 0; y = 0; n=40;
	while(n>=2){
		y+=n;
		n-=.5;
	}
	cout << "SUM: " << y << endl;
	return 0;
}