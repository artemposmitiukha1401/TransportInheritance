#include <iostream>
#include "../include/Transport.h"
#include "../include/Truck.h"
#include "../include/Ship.h"
#include "../include/Airplane.h"

int main() {

    Transport base("Generic Transport", 2000, 120.0, 5000.0, 20);
    base.Print();
    std::cout << "\n--- Testing Transport Getters ---\n";
    std::cout << base.GetName() << "\n";
    std::cout << base.GetReleaseYear() << "\n";
    std::cout << base.GetMaxSpeed() << "\n";
    std::cout << base.GetWeight() << "\n";
    std::cout << base.GetPassengersCount() << "\n";

    base.SetName("Updated Transport");
    base.SetReleaseYear(2024);
    base.SetMaxSpeed(150);
    base.SetWeight(5500);
    base.SetPassengersCount(30);

    std::cout << "\n--- Updated Base Transport ---\n";
    base.Print();

    Truck truck("Volvo FH16", 2020, 180, 18000, 2, 22.5, 16.1);
    std::cout << "\n\n=== TRUCK ===\n";
    truck.Print();

    std::cout << "\nTruck wheel size: " << truck.GetWheelSize() << "\n";
    std::cout << "Truck engine volume: " << truck.GetEngine() << "\n";

    truck.SetWheelSize(24.0);
    truck.SetEngine(18.0);

    std::cout << "\n--- Updated Truck ---\n";
    truck.Print();

    Airplane airplane("Boeing 747", 2015, 920, 183500, 416, 68.5, 280000);
    std::cout << "\n\n=== AIRPLANE ===\n";
    airplane.Print();

    std::cout << "\nWingspan: " << airplane.GetWingspan() << "\n";
    std::cout << "Engine power: " << airplane.GetEnginePower() << "\n";

    airplane.SetWingspan(70.0);
    airplane.SetEnginePower(300000);

    std::cout << "\n--- Updated Airplane ---\n";
    airplane.Print();

    Ship ship("Titanic II", 2022, 40, 523000, 3000, 3, 10.5);
    std::cout << "\n\n=== SHIP ===\n";

    ship.Print();

    return 0;
}