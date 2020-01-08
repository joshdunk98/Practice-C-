#include <iostream>

using namespace std;

int main()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int *pAge = &myAge;

    cout << "\nmyAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << endl;
    cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << endl;

    cout << "pAge:\t" << pAge << endl;
    cout << "*pAge:\t" << *pAge << endl << endl;

    pAge = &yourAge;

    cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << endl;
    cout << "&myAge:\t" << &myAge << "\t\t&yourAge:\t" << &yourAge << endl;

    cout << "pAge:\t" << pAge << endl;
    cout << "*pAge:\t" << *pAge << endl << endl;

    cout << "&pAge:\t" << &pAge << endl << endl;;

    cout << "yourAge * *pAge: " << (yourAge * *pAge) << endl << endl;
    *pAge = 7;

    cout << "*pAge:\t" << *pAge << endl;
    cout << "yourAge:\t" << yourAge << endl;
    cout << "yourAge * *pAge: " << (yourAge * *pAge) << endl << endl;  

    return 0;
}