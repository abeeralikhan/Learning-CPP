/*
Create a function which takes two point objects as
arguements and returns distance between those points
*/

#include <iostream>
#include <cmath>

using namespace std;

class Point {
    float x, y;

    public:
        Point(float, float);
        friend float cal_distance(Point, Point);
};

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

float cal_distance(Point p1, Point p2) {
    return sqrt(pow((p2.x - p1.x), 2)+pow((p2.y - p1.y), 2));
}
int main() {
    Point p1(1, 1), p2(0, 1), p3(1, 0), q1(1, 1), q2(0, 6), q3(70, 0);

    cout << cal_distance(p1, q1) << endl;
    cout << cal_distance(p2, q2) << endl;
    cout << cal_distance(p3, q3) << endl;
    return 0;
}