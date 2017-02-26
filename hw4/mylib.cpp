#include <cmath>
#include <iostream>
#include <string>

using namespace std;

const double PI = atan(1.0)*4.0;
const double PRECISION = 0.00001;
const int LEFT_DIR = 1;
const int RIGHT_DIR = 2;

double factorial(double n){
	double k = n;
	for(int i = n-1;i > 0;i--){
		k = k * i;
	}
	return k;
}

double degreesToRadians(double angle_in_degrees){
	double radian = (angle_in_degrees*180)/PI;
	return radian;
}

bool isPrime(int number){
	bool prime;
	int divisor = 3;
	if(number <=1){
		return false;
	} else if(number == 2){
		return true;
	} else if(number % 2 == 0){
		return false;
	}
	else{
		int divisor = 3;
		while(divisor <= number+1){
			if(number % divisor == 0){
				prime = false;
			}
			divisor += 2;
		}
		return prime;
	}
}

int countChars(string input, char which_char){
	int k;
	for(int n = 0; n <= input.size(); n++){
		if(input[n] == which_char){
			k++;
		}
	}
	return k;
}

bool containsDups(string sarray[], int length){
	int size = sarray->size();
	for(int a = 0; a <= size;a++){
		for(int n = 0; n <= size; n++){
			if(sarray[a] == sarray[n]){
				return true;
			}
		}
	}
	return false;
}



string rotateString(string to_rotate, int direction, int offset){
	string output;
	for(int a = 0; a < to_rotate.size(); a++){
		output[a] = to_rotate[a];
	}
	if (direction == RIGHT_DIR){
		for(int n = 0;n<to_rotate.size();n++){
			if((n + offset) > to_rotate.size()){
				output[(n+offset) - to_rotate.size()] = to_rotate[n];
			}else{
				output[n+offset] = to_rotate[n];
			}
		}
	} else{
		for(int n = 0;n<to_rotate.size();n++){
			if((n - offset) < to_rotate.size()){
				output[(n-offset)+to_rotate.size()] = to_rotate[n];
			}else{
				output[n-offset] = to_rotate[n];
			}
		}
	}
}

int main(){
    string A[] = {"XYZ", "xyz", "abc" };	// No dups
    string B[] = {"xyz", "xyz", "abc" };	// has dups

    cout << "Contains Dupslicates" << endl;
    cout << "0 = " << containsDups(A, 3) << endl;
    cout << "1 = " << containsDups(B, 3) << endl;
    cout << endl;


    string X = "xyz123456";
    string Y;

    cout << "For Rotated Strings" << endl;
    cout << "Right Shift of 3: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, RIGHT_DIR, 3) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 456xyz123" << endl;

    cout << "Right Shift of 6: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, RIGHT_DIR, 6) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 123456xyz" << endl;

    cout << "Left Shift of 6: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, LEFT_DIR, 6) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 456xyz123" << endl;

    cout << "Left Shift of 3: " << endl;
    cout << "Org: " << X << endl;
    Y =  rotateString(X, LEFT_DIR, 3) ;
    cout << "Actual Output: " << Y << endl;
    cout << "Expected: 123456xyz" << endl;

    return 0;
}