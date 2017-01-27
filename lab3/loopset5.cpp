#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,x,y;
	cout << "Enter a value between 2 to 20:";
	cin >> n;
	for(x=0;x<=n;x++){
		for(y=n;y>=0;y--){
			if(y==0){
				cout << y*x << endl;
			}else{
				cout << y*x << ",";
			}
		}
	}
}