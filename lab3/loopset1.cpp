#include <iostream>
#include <cmath>
using namespace std;
int main(){
	// Display even ints between 1 and 101
	int n, x;
	for(n = 1; n<101; n++){ // 1 to 101
		if(n%2==0){
			cout << n << endl;
		}
	}
	n = 1;
	while(n < 101){
		if(n%2==0){
			cout << n << endl;
		}
		n++;
	}
	x = 0;
	for(n = 2; n<=35; n += 3){ // Sum of numbers
		x += n;
	}
	cout << "SUM: " << x << endl;
	x = 0; n = 2;
	while(n<=35){
		x += n;
		n += 3;
	}
	cout << "SUM: " << x << endl;
	x = 0; int a = 0;
	for(n=2;n<=40;n+=2){ // Abverage
		x+=n;
		a++;
	}
	cout << "Average: " << x/a << endl;
	x = 0; a = 0; n = 0;
	while(n<=40){
		n++;
		x+=n;
		a++;
	}
	cout << "Average: " << x/a << endl;
	return 0;
}