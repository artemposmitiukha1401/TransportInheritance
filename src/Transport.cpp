#include "../include/Transport.h"

Transport::Transport(std::string name, int release_year, double max_speed, double weigh, int passengers_count) {
    this->name = name;
    this->release_year = release_year;
    this->max_speed = max_speed;
    this->weight = weigh;
    this->passengers_count = passengers_count;
}

void Transport::Print() const {
    std::cout << "\nTransport: " << this->name;
    std::cout << "\nRelease Year: " << this->release_year;
    std::cout << "\nMax Speed: " << this->max_speed;
    std::cout << "\nWeigh: " << this->weight;
    std::cout << "\nPassengers: " << this->passengers_count;
}
