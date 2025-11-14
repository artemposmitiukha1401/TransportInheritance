#include "../include/Airplane.h"

Airplane::Airplane(std::string name, int release_year, double max_speed, double weight, int passengers_count,
                   double wingspan, double engine_power)
    : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->wingspan = wingspan;
    this->engine_power = engine_power;
}

void Airplane::Print() const {
    Transport::Print();
    std::cout << "Wingspan : " << this->wingspan;
    std::cout << "\nEngine power: " << this->engine_power << std::endl;
}
