#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x,y;
	int trigger = 0;
	do{
		cout << "Enter Positive Number to Add or Enter Zero or Negative Number to End: ";
		cin >> x;
		if(x <= 0){
			trigger = 1;
		}else{
			y+=x;
		}
	}while(trigger == 0);
	cout << "\nSum of Entered Numbers: " << y << endl;
}