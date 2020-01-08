#include <iostream>
#include <math.h>

using namespace std;

class Shape {
    protected:
        float radius;

    public:
        float getRadius() {
            return radius;
        }

        void setRadius(float r) {
            radius = r;
        }

        void showArea() {
            // This function will be overridded in other
            // in other derivated classes 
            cout << "Shape area  : " << radius << endl;
        }
};

class Circle : public Shape {
    public:
        void showArea() {
            // Override function from Shape
            // A = pi*r^2
            float A = M_PI*radius*radius;
            cout << "Circle area : " << A << endl;
        }
};

class Sphere : public Shape {
    public:
        void showArea() {
            // Override function from Shape
            // P = 4*pi*r^2
            float A = 4.0f*M_PI*radius*radius;
            cout << "Sphere area : " << A << endl;
        }
};

int main() {
    // Shape object
    Shape shape;
    shape.setRadius(1);
    shape.showArea();

    // Circle object
    Circle circle;
    circle.setRadius(1.5);
    circle.showArea();

    // Sphere object
    Sphere sphere;
    sphere.setRadius(2.5);
    sphere.showArea();

    return 0;
}