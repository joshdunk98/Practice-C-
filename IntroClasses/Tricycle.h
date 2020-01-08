#include <iostream>

class Tricycle
{
public:

    //Good practice to always have a constructor and destructor for every class
    //Even if they do nothing at first
    Tricycle(int initial_speed, int initial_wheel_size);
    ~Tricycle();

    //const can only be used with function that don't change the 
    //values of member variables in a class, i.e. some void and all getter functions

    void setWheelSize(int new_wheel_size);
    int getWheelSize() const;
    void setSpeed(int new_speed);
    int getSpeed() const;
    void pedal();
    void brake();
    void print_tricycle_info() const;

private:

    unsigned int speed;
    unsigned int wheel_size;

};

Tricycle::Tricycle(int initial_speed, int initial_wheel_size)
{
    setSpeed(initial_speed);
    setWheelSize(initial_wheel_size);
}

Tricycle::~Tricycle()
{
    //do nothing for now
}

void Tricycle::setWheelSize(int new_wheel_size)
{
    wheel_size = new_wheel_size;
}

int Tricycle::getWheelSize() const
{
    return wheel_size;
}

void Tricycle::setSpeed(int new_speed)
{
    if(new_speed >= 0){
        speed = new_speed;
    }
}

int Tricycle::getSpeed() const
{
    return speed;
}

void Tricycle::pedal()
{
    setSpeed(++speed);
    std::cout << "Pedaling: tricycle speed is " << getSpeed() << std::endl << std::endl;
}

void Tricycle::brake()
{
    setSpeed(--speed);
    std::cout << "Pedaling: tricycle speed is " << getSpeed() << std::endl << std::endl;
}

void Tricycle::print_tricycle_info() const
{
    std::cout << "Tricycle Info:\n  -Speed = " << speed << "\n  -Wheel Size = " << wheel_size << std::endl << std::endl;
}