#include "../include/Bicycle.h"

std::string Bicycle::TypeToString(BicycleType type) {
    switch (type) {
        case BicycleType::Road: return "Road";
        case BicycleType::Mountain: return "Mountain";
        case BicycleType::Hybrid: return "Hybrid";
        case BicycleType::Gravel: return "Gravel";
        case BicycleType::BMX: return "BMX";
        case BicycleType::Touring: return "Touring";
        case BicycleType::Electric: return "Electric";
    }
    return "Unknown";
}

std::string Bicycle::MaterialToString(FrameMaterial material) {
    switch (material) {
        case FrameMaterial::Aluminum: return "Aluminum";
        case FrameMaterial::Carbon: return "Carbon";
        case FrameMaterial::Steel: return "Steel";
        case FrameMaterial::Titanium: return "Titanium";
        case FrameMaterial::Magnesium: return "Magnesium";
        case FrameMaterial::Bamboo: return "Bamboo";
    }
    return "Unknown";
}

Bicycle::Bicycle(std::string name, int release_year, double max_speed, double weigh, int passengers_count,
                 BicycleType type, FrameMaterial frame_material)
    : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->type = type;
    this->frame_material = frame_material;
}

void Bicycle::Print() const {
    Transport::Print();
    std::cout << "Type: " << TypeToString(type);
    std::cout << "\nMaterial: " << MaterialToString(frame_material) << std::endl;
}
