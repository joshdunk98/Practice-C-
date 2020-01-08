#include <iostream>
#include "Line.h"

using namespace std;

Line::Line(int point_A_x, int point_A_y, int point_B_x, int point_B_y)
{
    A.setX(point_A_x);
    A.setY(point_A_y);

    B.setX(point_B_x);
    B.setY(point_B_y);
}

Line::~Line()
{
    //do nothing
}

void Line::setPointA(Point new_point_A)
{
    A.setX(new_point_A.getX());
    A.setY(new_point_A.getY());
}

void Line::setPointB(Point new_point_B)
{
    B.setX(new_point_B.getX());
    B.setY(new_point_B.getY());
}

int main()
{
    Line l(10, 5, -2, -3);

    cout << "The distance of Line l is " << l.getDistance() << endl;

    cout << "The x-coordinate for Point A is " << l.get_point_A_x() << endl;
    cout << "The y-coordinate for Point A is " << l.get_point_A_y() << endl;
    cout << "The x-coordinate for Point B is " << l.get_point_B_x() << endl;
    cout << "The y-coordinate for Point B is " << l.get_point_B_y() << endl;

    return 0;
}