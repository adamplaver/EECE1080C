/*
Name: Adam Plaver
Date: 19/2/2017
Assignment: Lab 6
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;


// Helper function: Provider for you to display array
void display_array(int array[], unsigned length){
  cout << setw(6) << "Index" << setw(8) << "Value" << endl;
  for(unsigned i = 0; i < length; i++){
     cout << setw(6) << i << setw(8) << array[i] << endl;
  }
}

// Just return the Minimum value int a and int b
int Min(int a, int b){
  if(a < b){
    return a;
  }else{
    return b;
  }
}

// Just return the Maximum value int a and int b
int Max(int a, int b){
  if(a > b){
    return a;
  }else{
    return b;
  }
}


// init function sets all locations of an array to the "value"
// specified
void init(int array[], unsigned length, int value){
  for(int n=1;n<=length;n++){
    array[n] = value;
  }
}

// Return the sum of array elements. An empty array has a zero sum
int arraySum(int array[], unsigned length){
  int l = length-1;
  if(l >= 0){
    int sum;
    for(int n = 0;n<=l;n++){
      sum += array[n];
    }
    return sum;
  } else{
    return 0;
  }
}

// Return the mean of all array elements. An empty array has a zero mean
// Use arraySum above to calculate the Sum
double arrayMean(int array[], unsigned length){
  double x,mean;
  if(length > 0){
    x = arraySum(array,length);
    mean = x/length;
    cout << ""; // Does not work without this for some reason
    return mean;
  } else{
    return 0;
  }
}

// Return the minimum value of all array elements. 
// An empty array has a zero minimum value
// You must use Min() above in this function
int arrayMin(int array[], unsigned length){
  int m;
  if(length != 0){
    m = array[0];
    for(int n=1;n<length;n++){
      m = Min(array[n],m);
    }
    return m;
  } else{
    return 0;
  }
}

// Return the maximum value of all array elements. 
// An empty array has a zero minimum value
// You must use Max() above in this function
int arrayMax(int array[], unsigned length){
  int m;
  if(length != 0){
    m = array[0];
    for(int n=1;n<=length-1;n++){
      m = Max(array[n],m);
    }
    return m;
  }else{
    return 0;
  }
}

// Return the standard Deviation of all array elements. An empty array has
// a zero standard deviation value
// You should use the arrayMean() function above
double arrayStdDev(int array[], unsigned length){
  if(length != 0){
    double mean = arrayMean(array,length);
    int foo[length];
    for(int n = 0; n<length; n++){
      foo[n] = pow((array[n]-mean),2);
    }
    mean = sqrt(arrayMean(foo,length));
    return mean;
  } else {
    return 0;
  }
}

// Return the location in the array of the "search_value" 
// An empty array or a failed search should return a -1 
int arrayFind(int array[], unsigned length, 
	int search_value, unsigned position = 0){
  if(length != 0){
    for(position;position<length;position++){
      if(array[position] == search_value){
        return position;
      }
    }
    if(array[position] != search_value){
      return (-1);
    }
  } else {
    return (-1);
  }
}

// Return the number of times the "search_value"  was found in the array.  
// Return 0 if the length is 0 or less.
int count(int array[], unsigned length, int search_value){
  int x;
  int a = length;
  if(length > 0){
    for(int n = 0;n<a;n++){
      if(array[n] == search_value){
        x++;
      }
    }
    return x;
  } else {
    return 0;
  }
}

// Returns the array max - array min.  
// Return 0 if the length is 0 or less
// Should use arrayMax and arrayMin above
int range(int array[], unsigned length){
  int x,y;
  if(length > 0){
    x = arrayMax(array,length);
    y = arrayMin(array,length);
    return (x - y);
  }else{
    return 0;
  }
}

// Return a boolean: 
// true if the array contains the same integer at least twice 
// false if all values in the array are unique.
bool containsDups(int array[], unsigned length){
  for(int n = 0;n<length-1;n++){
    for(int i = 0;n<length-2;i++){
      if((array[n] == array[i]) && (i != n)){
          return true;
      }
    }
  }
  return false;
}

// Returns a boolean, true if the array is sorted from smallest to largest, 
// false if it is not sorted.  Adjacent duplicate elements are allowed.  
// A list of 1 or fewer elements is sorted
bool isSorted(int array[], unsigned length){
  if(length >= 1){
    for(int n = 0;n<length;n++){
      if( !(array[n] == array[n+1]) && (array[n] >= array[n+1])){
        return false;
      }
    }
    return true;
  }else{
    return true;
  }
}

int main(){

  cout << "Min(2,1) = 1 = " << Min(2,1) << endl;
  cout << "Max(2,1) = 2 = " << Max(2,1) << endl;
  cout << "Init w/ ints" << endl;
  int a1[] = {1,2,3,4,5};
  init(a1, 5, 99);
  cout << "99 = " << a1[3] << endl;
  cout << "99 = " << a1[1] << endl;
  
  cout << endl << "Count w/ ints" << endl;
  int a3[] = {1,2,3,4,5,6,7,1,2};
  cout << "1 = " << count(a3, 9, 5) << endl;
  cout << "2 = " << count(a3, 9, 1) << endl;
  int a4[100];
  for(int i = 0; i < 100; i++){
    a4[i] = (i + i %7 ) % 11;
  }
  cout << "8 = " << count(a4, 100, 5) << endl;
  cout << "9 = " << count(a4, 100, 1) << endl;
  
  cout << endl << "Range" << endl;
  int a6[] = {1,2,1,10,-5,34};
  cout << "39 = " << range(a6, 6) << endl;
  cout << "9  = " << range(a6, 4) << endl;
  
  cout << endl << "Contains Dups" << endl;
  cout << "1 = " << containsDups(a6, 6) << endl;
  cout << "0 = " << containsDups(a6, 2) << endl;
  cout << "1 = " << containsDups(a4, 100) << endl;
  
  cout << endl << "Is Sorted" << endl;
  int a7[] = {1,2,2,3,5,10,100};
  int a8[] = {1,2,3,4,4,5,4};
  cout << "0 = " << isSorted(a6, 6) << endl;
  cout << "1 = " << isSorted(a1, 5) << endl;
  cout << "1 = " << isSorted(a7, 7) << endl;
  cout << "0 = " << isSorted(a8, 7) << endl;

  int a9[] = {1,2,4,8,16,32,64};
  
  cout << endl;
  cout << "Array a9 Stats: " << endl;
  cout << "a9 Array" << endl;
  display_array(a9, 7);
  cout << endl;
  cout << "Min Array value = 1" << " = " << arrayMin(a9, 7) << endl;
  cout << "Max Array value = 64" << " = " << arrayMax(a9, 7) << endl;
  cout << "\tMax array element location = 6 = " << arrayFind(a9, 7, arrayMax(a9,7), 0) << endl;
  cout << "Sum Array value = 127" << " = " << arraySum(a9, 7) << endl;
  cout << "Array Mean value = 18.1429" << " = " << arrayMean(a9, 7) << endl;
  cout << "StdDev value = 21.2363" << " = " << arrayStdDev(a9, 7) << endl;
  cout << "End of a9 stats" << endl;
  
  return 0;
}