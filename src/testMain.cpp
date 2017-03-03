#include "testMain.h"
#include <iostream>

using namespace std;

testMain::testMain()
{
    //ctor
}

testMain::~testMain()
{
    //dtor
}


int main(){
    int x;
    int *p; //pointer to an integer

    p = &x; // Assign the address of x to p

    cout << "Enter your age: ";
    cin >> x; // put a value into x
    cin.ignore(); // Throws away the \n after cin

    cout << "Addresss: " << p << ", Value at address: " <<*p << endl;

    if (*p <= 0 ){
        cout << "You can't be that age!";
    } else if ( x < 30 ){
        cout << "You're still young!";
    } else {
        cout << "You are getting old";
    }

    int i = 0;
    while (x > 21){
        i++;
        x--;
    }

    cout << "You've been able to drink for " << i << " years!" << endl;

    // cin.get();
}
