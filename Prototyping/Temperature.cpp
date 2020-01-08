#include <iostream>

using namespace std;


//When you prototype a function with the auto keyword
//The function declaration must be before the function is called anywhere in the program

//When you prototype a function with any other return type
//You can declare the function anywhere above or below the main function as long as the 
//function declaration is after the prototype
double convert(double celsius);

double convert(double celsius)
{
    double fahrenheit;
    cout << celsius << endl;
    fahrenheit = (celsius - 32) * (5.0/9.0);
    cout << fahrenheit << endl;
    return fahrenheit;
}

int main()
{
    //Can't declare an auto variable unless you initialize it
    double celsius, fahrenheit;

    cout << "Please provide a temperature in Celsius (C): ";
    cin >> celsius;

    fahrenheit = convert(celsius);
    cout << "The current temperature is " << celsius << " Celsius, or "
         << fahrenheit << " Fahrenheit." << endl;

    return 0;
}
