#include <iostream>
#include <vector>

#include "../include/Airplane.h"
#include "../include/Car.h"
#include "../include/Ship.h"
#include "../include/Bicycle.h"
#include "../include/Transport.h"
#include "../include/Truck.h"


int main() {
    Bicycle bicycle(
        "Trek Domane SL6",
        2022,
        45.0,
        8.5,
        1,
        BicycleType::Road,
        FrameMaterial::Carbon
    );

    Car car(
        "BMW 330i",
        2020,
        250.0,
        1600.0,
        5,
        TransmissionType::Automatic,
        2.0,
        258.0
    );

    Tank tank(
        "Leopard 2A7",
        2015,
        70.0,
        62000.0,
        4,
        80.0,
        120.0,
        0.60,
        true
    );

    Airplane airplane(
        "Airbus A320",
        2018,
        870.0,
        73500.0,
        180,
        35.8,
        120000.0
    );

    Ship ship(
        "Ever Given",
        2018,
        22.0,
        199000.0,
        30,
        2,
        15.7
    );

    Truck truck(
        "Volvo FH16",
        2019,
        120.0,
        18000.0,
        2,
        22.5,
        16.1
    );

    std::cout << "=== Detailed info (Print methods) ===\n";
    bicycle.Print();
    car.Print();
    tank.Print();
    airplane.Print();
    ship.Print();
    truck.Print();

    car.SetHorsePower(270.0);
    car.SetEnginePower(2.0);
    car.SetTransmissionType(TransmissionType::DualClutch);

    std::cout << "\n=== Car updated values ===\n";
    std::cout << "Horse power: " << car.GetHorsePower() << "\n";
    std::cout << "Engine volume: " << car.GetEnginePower() << "\n";
    std::cout << "Transmission (enum index): "
            << static_cast<int>(car.GetTransmissionType()) << "\n";

    truck.SetWheelSize(24.0);
    truck.SetEngine(15.6);

    std::cout << "\n=== Truck updated values ===\n";
    std::cout << "Wheel size: " << truck.GetWheelSize() << "\n";
    std::cout << "Engine volume: " << truck.GetEngine() << "\n";

    tank.SetCaliber(125.0);
    tank.SetArmourThickness(90.0);

    std::cout << "\n=== Tank updated values ===\n";
    std::cout << "Caliber: " << tank.GetCaliber() << "\n";
    std::cout << "Armour thickness: " << tank.GetArmourThickness() << "\n";

    airplane.SetWingspan(36.0);
    airplane.SetEnginePower(122000.0);

    std::cout << "\n=== Airplane updated values ===\n";
    std::cout << "Wingspan: " << airplane.GetWingspan() << "\n";
    std::cout << "Engine power: " << airplane.GetEnginePower() << "\n";

    ship.SetPropellersCount(3);
    ship.SetWaterline(16.2);

    std::cout << "\n=== Ship updated values ===\n";
    std::cout << "Propellers: " << ship.GetPropellersCount() << "\n";
    std::cout << "Waterline: " << ship.GetWaterline() << "\n";

    BicycleType bType = bicycle.getType();
    FrameMaterial fMat = bicycle.getFrameMaterial();
    std::cout << "\n=== Bicycle enum values ===\n";
    std::cout << "BicycleType (enum index): " << static_cast<int>(bType) << "\n";
    std::cout << "FrameMaterial (enum index): " << static_cast<int>(fMat) << "\n";

    return 0;
}
