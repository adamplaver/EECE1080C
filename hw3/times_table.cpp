#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void tableHeader(int n);
int multiplication(int x, int y);

int main(){
	int w;
	cout << "Width: ";
	cin >> w;
	tableHeader(w);
	for(int x = 1;x<=w;x++){
		cout << x << "\t|";
		for(int n = 1;n<=x;n++){
			cout << multiplication(x,n) << "\t";
		}
		cout << endl;
	}
	return 0;
}

int multiplication(int x, int y){
	return(y*x);
}

void tableHeader(int n){
	// _x_|1__2_
	cout << "x\t|";
	for(int x=1;x<=n;x++){
		cout << x << "\t";
	}
	cout << "\n" << "________|";
	for(int x=n;x>0;x--){
		cout << "________";
	}
	cout << endl;
	return;
}