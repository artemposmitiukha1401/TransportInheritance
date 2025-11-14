#include "../include/Ship.h"

Ship::Ship(std::string name, int release_year, double max_speed, double weight, int passengers_count,
           int propellers_count, double waterline)
    : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->propellers_count = propellers_count;
    this->waterline = waterline;
}

void Ship::Print() const {
    Transport::Print();
    std::cout << "Propellers count: " << this->propellers_count;
    std::cout << "\nWaterline: " << this->waterline << std::endl;
}
