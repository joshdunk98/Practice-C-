#include <cmath>
#include "Point.h"

class Line
{
private:
    Point A;
    Point B;

public:
    Line(int point_A_x, int point_A_y, int point_B_X, int point_B_y);
    ~Line();

    int get_point_A_x() const { return A.getX(); }
    int get_point_A_y() const { return A.getY(); }
    int get_point_B_x() const { return B.getX(); }
    int get_point_B_y() const { return B.getY(); }

    void setPointA(Point new_point_A);
    void setPointB(Point new_point_B);

    int getDistance() const { return sqrt( pow((B.getX() - A.getX()) , 2) + pow((B.getY() - A.getY()) , 2) ); }
};