#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int start, end, n, odd, even, c, x;
	even = 0; odd = 0; c = 0;

	cout << "Start Number: ";
	cin >> start;
	cout << "Ending Number: ";
	cin >> end;
	cout << "Steps: ";
	cin >> n;

	if(start > end){ main(); }

	for(x=start;x<=end;x+=n){
		if(x%2==0){
			even+=x;
		}else{
			odd+=x;
		}
		c++;
	}

	cout << "ODD Number Sum: " << odd << endl;
	cout << "EVEN Number Sum: " << even << endl;
	cout << "Sum of ALL Numbers: " << odd+even << endl;
	cout << "Average: " << (odd+even)/c << endl;

	return 0;
}