#include <iostream>
#include <cmath>
using namespace std;

int main(){
        int d1, d2;
        cout << "Die 1:";
        cin >> d1;
        cout << "Die 2:";
        cin >> d2;
        cout << "\nYou rolled " << d1 << " and " << d2 <<" for a Total of " << d1 + d2;
    switch(d1+d2){
        case 7:  cout << "\nYou are a winner!"; break;
        case 9:  cout << "\nYou are a winner!"; break;
        case 11: cout << "\nSorry you are not a winner."; break;
        case 2: cout << "\nSorry you are not a winner."; break; 
        case 3: cout << "\nSorry you are not a winner."; break;
        case 5: cout << "\nSorry you are not a winner."; break;
        default: cout << " Please Roll Again" << endl; main();
    }
    cout << "\nGame Over.";
    return 0;
}