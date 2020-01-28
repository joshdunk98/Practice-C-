#include <iostream>

using namespace std;

enum BREED { YORKIE, CAIRN, POMERANIAN, LAB, SPRINGER };

class Animal{
    public:
        Animal(): age(1), weight(10){}
        ~Animal(){}
        
        int getAge() const {return this->age;}
        void setAge(int age) {this->age = age;}
        int getWeight() const {return this->weight;}
        void setWeight(int weight) { this->weight = weight;}

        virtual void speak() const;
        void sleep();

    private:
        int age;
        int weight;
};

class Dog : public Animal {
    public:
        Dog():isBreed(LAB){}
        ~Dog(){}

        BREED getBreed() const {return this->isBreed;}
        void setBreed(BREED isBreed) {this->isBreed = isBreed;}
        void speak() const;

    private:
        BREED isBreed;
};

int main(){

    Dog fido;
    fido.setAge(10);
    fido.speak();

    cout << "Dog's Breed is " << fido.getAge() << " year's old." << endl;

    return 0;
}


void Animal::speak() const{
    cout << "SPEAK" << endl;
}

void Animal::sleep(){
    cout << "Going to sleep" << endl;
}

void Dog::speak() const{
    cout << "BARK!" << endl;
}