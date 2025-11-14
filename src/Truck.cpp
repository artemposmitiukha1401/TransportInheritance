#include "../include/Truck.h"
#include "../include/Transport.h"

Truck::Truck(std::string name, int release_year, double max_speed, double weight, int passengers_count,
    double wheel_size, double engine_volume) : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->wheel_size = wheel_size;
    this->engine_volume = engine_volume;
}

void Truck::Print() const {
    Transport::Print();
    std::cout <<"\nWheel size: " << this->wheel_size;
    std::cout << "\nEngine volume: " << this->engine_volume << std::endl;
}
