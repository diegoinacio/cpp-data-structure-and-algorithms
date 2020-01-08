#include <iostream>
#include <math.h>

using namespace std;

class Shape {
    protected:
        float radius = 1;

    public:
        float getRadius() {
            return radius;
        }

        void setRadius(float r) {
            radius = r;
        }

        virtual void showArea() {
            // This message is not going to be shown
            // because we are using virtual before
            cout << "Shape area method: " << radius << endl;
        }
};

class Circle : public Shape {
    public:
        void showArea() {
            // A = pi*r^2
            float A = M_PI*radius*radius;
            cout << "Circle area method: " << A << endl;
        }
};

class Sphere : public Shape {
    public:
        void showArea() {
            // P = 4*pi*r^2
            float A = 4.0f*M_PI*radius*radius;
            cout << "Sphere area method: " << A << endl;
        }
};

int main() {
    // Circle object
    Circle circle;
    circle.setRadius(1.5);

    // Sphere object
    Sphere sphere;
    sphere.setRadius(2.5);


    // Shape pointer object
    Shape *shape;

    // Reference to circle
    shape = &circle;
    shape->showArea();

    // Reference to sphere
    shape = &sphere;
    shape->showArea();

    return 0;
}