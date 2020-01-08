#include <iostream>

using namespace std;

int main()
{

    //auto lets the compiler decide what the variable type is based in the value given
    auto strength = 80;
    auto accuracy = 45.5;
    auto dexterity = 24.0;

    //const variables do not change in value like regula variables
    const auto MAXIMUM = 50;

    auto attack = strength * (accuracy / MAXIMUM);
    auto damage = strength * (dexterity / MAXIMUM);

    //endl is similar to the newline character
    //sizeof() returns the amount of space the variable takes up in bytes
    cout << endl;
    cout << "Attack is: " << attack << endl;
    cout << "Attack variable takes up " << sizeof(attack) << " bytes." << endl;
    cout << "Damage is: " << damage << endl;
    cout << "Damage variable takes up " << sizeof(damage) << " bytes." << endl;
    cout << endl;

    return 0;
}