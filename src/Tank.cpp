#include "../include/Tank.h"

Tank::Tank(std::string name, int release_year, double max_speed, double weight, int passengers_count,
           double armour_thickness, double caliber, double track_width, bool canFire)
    : Transport(name, release_year, max_speed, weight, passengers_count) {
    this->armour_thickness = armour_thickness;
    this->caliber = caliber;
    this->track_width = track_width;
    this->canFire = canFire;
}

void Tank::Print() const {
    Transport::Print();
    std::cout << "Armour thickness: " << this->armour_thickness;
    std::cout << "\nCaliber: " << this->caliber;
    std::cout << "\nTrack width: " << this->track_width;
}
