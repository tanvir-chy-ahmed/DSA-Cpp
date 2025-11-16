#include <iostream>
#include <string>
using namespace std;

// =============================
// Base Class: Drone
// =============================
class Drone {
private: // Encapsulation (hidden data)
    string name;
    string desc;

public:
    // 1. Default Constructor
    Drone() {
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor (Overloading)
    Drone(string name, string desc) { // Must be Diffrent from parent constructor
        this->name = name;   // Using 'this' pointer
        this->desc = desc;
        cout << "Drone Created: " << this->name << " - " << this->desc << endl;
    }

    // Setter & Getter (Encapsulation)
    void setData(string name, string desc) {
        this->name = name;
        this->desc = desc;
    }

    void showData() {
        cout << "Drone Info: " << name << " - " << desc << endl;
    }

    // Virtual Function (for Polymorphism)
    virtual void fly() {
        cout << name << " is flying in normal mode." << endl;
    }

    // Destructor
    ~Drone() {
        cout << "Destructor Called for Drone: " << name << endl;
    }
};

// =============================
// Derived Class: RacingDrone (Inheritance)
// =============================
class RacingDrone : public Drone {
public:
    RacingDrone(string name, string desc) : Drone(name, desc) {}

    // Overriding function (Polymorphism)
    void fly() override {
        cout << "Racing Drone is flying at super speed!" << endl;
    }
};

// =============================
// Main Program
// =============================
int main() {
    cout << "\n--- Constructors ---" << endl;
    Drone d1;                           // Default constructor
    Drone d2("DJI Mavic", "Pro Drone"); // Parameterized constructor

    cout << "\n--- Encapsulation ---" << endl;
    d1.setData("Phantom 4", "Photography Drone");
    d1.showData();

    cout << "\n--- Polymorphism (Virtual Function) ---" << endl;
    Drone* basePtr;              // Base class pointer
    RacingDrone r1("X-Speed", "FPV Racing Drone");

    basePtr = &d2;
    basePtr->fly(); // Calls base class version

    basePtr = &r1;
    basePtr->fly(); // Calls derived class overridden version

    cout << "\n--- Program End (Destructor will be called automatically) ---" << endl;
    return 0;
}
