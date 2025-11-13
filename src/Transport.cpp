#include "../include/Transport.h"

Transport::Transport(std::string name, int release_year, double max_speed, double weigh, int passengers_count) {
    this->name = name;
    this->release_year = release_year;
    this->max_speed = max_speed;
    this->weight = weigh;
    this->passengers_count = passengers_count;
}

void Transport::Print() const {
    std::cout << "Transport: " << this->name << std::endl;
    std::cout << "Release Year: " << this->release_year << std::endl;
    std::cout << "Max Speed: " << this->max_speed << std::endl;
    std::cout << "Weigh: " << this->weight << std::endl;
    std::cout << "Passengers: " << this->passengers_count << std::endl;
}
