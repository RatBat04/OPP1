#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;

    // Constructor to initialize the car details
    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    // Function to display car details
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Function to simulate driving and increase mileage
    void drive(int distance) {
        mileage += distance;
        cout << "The car has been driven for " << distance << " miles." << endl;
        cout << "Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
    // Step 6: Create a Car object with the given details
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Step 7: Display car details
    myCar.display();
    cout << endl;

    // Step 8: Drive for 150 miles and display updated mileage
    myCar.drive(150);
    cout << endl;

    // Step 9: Drive for 300 miles and display updated mileage
    myCar.drive(300);
    cout << endl;

    return 0;
}