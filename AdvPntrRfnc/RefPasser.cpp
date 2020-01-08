#include <iostream>

using namespace std;

class SimpleCat
{
    public:
        SimpleCat();
        SimpleCat(SimpleCat&);
        ~SimpleCat();

        int getAge() const{ return itsAge;}
        void setAge(int age) { itsAge = age;}

    private:
        int itsAge;
};

SimpleCat::SimpleCat()
{
    cout << "Simple Cat Constructor ..." << endl;
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    cout << "Simple Cat Copy Constructor ..." << endl;
}

SimpleCat::~SimpleCat()
{
    cout << "Simple Cat Destructor ..." << endl;
}

const SimpleCat & FunctionTwo(const SimpleCat & theCat);

int main()
{
    cout << "Making a cat ..." << endl;
    SimpleCat Frisky;
    cout << "Frisky is " << Frisky.getAge() << " years old." << endl;

    int age = 5;
    Frisky.setAge(age);
    cout << "Frisky is " << Frisky.getAge() << " years old." << endl;   
    cout << endl;

    cout << "Address of Frisky " << &Frisky << endl;
    cout << "Calling FunctionTwo ..." << endl;
    FunctionTwo(Frisky);
    cout << "Address of Frisky " << &Frisky << endl;
    cout << endl;

    cout << "Frisky is " << Frisky.getAge() << " years old." << endl;  

    return 0; 
}

const SimpleCat & FunctionTwo(const SimpleCat & theCat)
{
    cout << "Address of theCat is " << &theCat << endl;
    cout << "Function Two. Returning..." << endl;
    cout << "Frisky is now " << theCat.getAge() << " years old." << endl;
    cout << "Address of theCat is " << &theCat << endl;

    return theCat;
}