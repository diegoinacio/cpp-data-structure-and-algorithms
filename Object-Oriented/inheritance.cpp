#include <iostream>
#include <math.h>

using namespace std;

class Shape {
    public:
        float getRadius() {
            return radius;
        }

        void setRadius(float r) {
            radius = r;
        }

    protected:
        float radius;
};

class Circle : public Shape {
    public:
        float getPerimeter() {
            // P = 2*pi*r
            return 2.0f*M_PI*radius;
        }

        float getArea() {
            // A = pi*r^2
            return M_PI*radius*radius;
        }
};

class Sphere : public Shape {
    public:
        float getArea() {
            // P = 4*pi*r^2
            return 4.0f*M_PI*radius*radius;
        }

        float getVolume() {
            // A = 4*pi*r^3/3
            return 4.0f*M_PI*radius*radius*radius/3.0f;
        }
};

int main() {
    // Declare object fom class Circle
    Circle c;
    c.setRadius(1.5);
    // Output
    cout << "Circle radius    | " << c.getRadius() << endl;
    cout << "Circle perimeter | " << c.getPerimeter() << endl;
    cout << "Circle area      | " << c.getArea() << endl;

    cout << endl;

    // Declare object fom class Sphere
    Sphere s;
    s.setRadius(2.5);
    // Output
    cout << "Sphere radius | " << s.getRadius() << endl;
    cout << "Sphere area   | " << s.getArea() << endl;
    cout << "Sphere volume | " << s.getVolume() << endl;

    return 0;
}