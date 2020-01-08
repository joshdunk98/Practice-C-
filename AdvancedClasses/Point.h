class Point
{
private:
    int x;
    int y;

public:
    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int new_x) { x = new_x; }
    void setY(int new_y) { y = new_y; }
};