#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int c = 0;
	int n = 1;
	while(c<10){
		cout << n << ' ';
		if(n%2==0) c++;
		if(c%3==0) n+=2;
		c++;
		n++;
	}
	return 0;
}