#include <iostream>

using namespace std;

class ClassA {
    private:
        float privateAttrib;   // Could be accessed from here only

    protected:
        float protectedAttrib; // Could be accessed from here and derived classes

    public:
        float publicAttrib;    // Could be accessed from anywhere

        void setPrivateAttrib(float value) {
            privateAttrib = value;
        }

        float getPrivateAttrib() {
            return privateAttrib;
        }
};

class ClassB : public ClassA {
    public:
        void setProtectedAttrib(float value) {
            protectedAttrib = value;
        }

        float getProtectedAttrib() {
            return protectedAttrib;
        }
};

int main() {
    // Init object
    ClassB cb;

    // Sets
    cb.setPrivateAttrib(10);
    cb.setProtectedAttrib(20);
    cb.publicAttrib = 30;
    
    // Output
    cout << "Object private attribute   : " << cb.getPrivateAttrib() << endl;
    cout << "Object protected attribute : " << cb.getProtectedAttrib() << endl;
    cout << "Object public attribute    : " << cb.publicAttrib << endl;

    return 0;
}