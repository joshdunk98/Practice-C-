#include <iostream>

using namespace std;

class SimpleCat
{
    public:
        SimpleCat(int age, int weight);
        ~SimpleCat(){}

        int getAge(){ return itsAge;}
        int getWeight(){ return itsWeight;}

    private:
        int itsAge;
        int itsWeight;

};

SimpleCat::SimpleCat(int age, int weight): 
itsAge(age), itsWeight(weight) {}

SimpleCat * TheFunction();

int main()
{
    SimpleCat *pCat = TheFunction();
    int age = pCat->getAge();
    cout << "pCat's age is " << age << endl;
    cout << "&pCat: " << &pCat << endl;


    return 0;
}

//Creates a new object and places it on the heap
//Returns a pointer to the object on the heap and then safely deletes the pointer created in TheFunction
SimpleCat * TheFunction(){
    SimpleCat *pFrisky = new SimpleCat(3, 25);
    cout << "pFrisky: " << pFrisky << endl;
    return pFrisky;
}