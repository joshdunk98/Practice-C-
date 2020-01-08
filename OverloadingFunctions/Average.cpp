#include <iostream>
#include <iomanip>

using namespace std;

int average(int num1, int num2);
long average(long num1, long num2);
float average(float num1, float num2);

int main()
{
    //The type assumed by the compiler for the auto variable is the type assumed when it is first initialized
    //The type of an auto variable cannot change throughout the program
    float num1 = 0;
    float num2 = 0;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "The value of the first number is " << setprecision(2) << num1 << endl << endl;
    
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "The value of the second number is " << setprecision(2) << num2 << endl << endl;

    auto average_number = average(num1, num2);
    cout << "The average of " << num1 << " and " << num2 << " is " << setprecision(2) << average_number << "." << endl << endl;

    return 0;
}

int average(int num1, int num2){
    cout << "Int function called." << endl;
    return (num1 + num2) / 2;
}

long average(long num1, long num2){
    cout << "Long function called." << endl;
    return (num1 + num2) / 2;
}

float average(float num1, float num2){
    cout << "Float function called." << endl;    
    return (num1 + num2) / 2;
}