#include "../include/Car.h"

std::string Car::TransmissionTypeToString(TransmissionType type) {
    switch (type) {
        case TransmissionType::Manual: return "Manual";
        case TransmissionType::Automatic: return "Automatic";
        case TransmissionType::CVT: return "CVT";
        case TransmissionType::DualClutch: return "Dual Clutch";
        case TransmissionType::SemiAutomatic: return "Semi-Automatic";
    }
    return "Unknown";
}

Car::Car(std::string name, int release_year, double max_speed, double weigh, int passengers_count,
         TransmissionType transmission_type, double engine_volume, double horse_power)
    : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->transmission_type = transmission_type;
    this->horse_power = horse_power;
    this->engine_volume = engine_volume;
}

void Car::Print() const {
    Transport::Print();

    std::cout << "Transmission type: " << TransmissionTypeToString(this->transmission_type) << std::endl;
    std::cout << "Horse power: " << this->horse_power << std::endl;
    std::cout << "Engine volume: " << this->engine_volume << std::endl;
}
