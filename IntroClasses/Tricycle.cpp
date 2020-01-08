#include "Tricycle.h"

int main()
{
    Tricycle trike(5, 1); 

    trike.pedal();
    trike.pedal();
    trike.pedal();
    trike.brake();
    trike.brake();
    trike.brake();

    trike.print_tricycle_info();

    trike.brake();
    trike.setWheelSize(6);

    trike.print_tricycle_info();
}