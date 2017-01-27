#include <iostream>
#include <cmath>
using namespace std;

int main(){
        int d1, d2;
    do {
        cout << "Die 1:";
        cin >> d1;
        cout << "Die 2:";
        cin >> d2;
        cout << "\nYou rolled " << d1 << " and " << d2 <<" for a Total of " << d1 + d2;
        if(!(d1+d2 == 7 || d1+d2 == 9 || d1+d2 == 11 || d1+d2 == 2 || d1+d2 == 3 || d1+d2 == 5)){
            cout << "Please Roll Again" << endl;
        }
    } while(!(d1+d2 == 7 || d1+d2 == 9 || d1+d2 == 11 || d1+d2 == 2 || d1+d2 == 3 || d1+d2 == 5));
    if(d1+d2 == 7 || d1+d2 == 9 || d1+d2 == 11){
        //Winner
        cout << "\nYou are a winner!";
    }else{
        //Loser
        cout << "\nSorry you are not a winner.";
    };
    cout << "\nGame Over.";
    return 0;
}