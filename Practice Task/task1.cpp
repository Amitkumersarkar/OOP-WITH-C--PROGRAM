#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle
{
private:
    string registrationNumber;
    string brand;

protected:
    float rentalRate;

public:
    // Constructor to initialize common attributes
    Vehicle(string regNo, string br, float rate) : registrationNumber(regNo), brand(br), rentalRate(rate) {}

    // Public method to display common details
    virtual void displayDetails() const
    {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Brand: " << brand << endl;
        cout << "Rental Rate: $" << rentalRate << "/day" << endl;
    }

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Derived class: Car
class Car : public Vehicle
{
private:
    int numberOfDoors;

public:
    // Constructor to initialize Car-specific attributes
    Car(string regNo, string br, float rate, int doors) : Vehicle(regNo, br, rate), numberOfDoors(doors) {}

    // Overriding displayDetails method
    void displayDetails() const override
    {
        Vehicle::displayDetails();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }

    // Overloaded method to calculate rental cost
    float calculateRentalCost(int days) const
    {
        return days * rentalRate;
    }
};

// Derived class: Bike
class Bike : public Vehicle
{
private:
    bool isElectric;

public:
    // Constructor to initialize Bike-specific attributes
    Bike(string regNo, string br, float rate, bool electric) : Vehicle(regNo, br, rate), isElectric(electric) {}

    // Overriding displayDetails method
    void displayDetails() const override
    {
        Vehicle::displayDetails();
        cout << "Electric Bike: " << (isElectric ? "Yes" : "No") << endl;
    }

    // Overloaded method to calculate rental cost
    float calculateRentalCost(int hours) const
    {
        return hours * (rentalRate / 24);
    }
};

int main()
{
    // Create a Car instance
    Car car("CF-11-11", "BMW", 90.0, 4);
    cout << "Car Details:" << endl;
    car.displayDetails();
    int carRentalDays = 2;
    cout << "Rental Cost for " << carRentalDays << " days: $" << car.calculateRentalCost(carRentalDays) << endl;

    cout << "\n";

    // Create a Bike instance
    Bike bike("XY-7189", "RoyalEndfield", 10.0, true);
    cout << "Bike Details:" << endl;
    bike.displayDetails();
    int bikeRentalHours = 10;
    cout << "Rental Cost for " << bikeRentalHours << " hours: $" << bike.calculateRentalCost(bikeRentalHours) << endl;

    return 0;
}
