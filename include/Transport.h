#ifndef TRANSPORTINHERITANCE_TRANSPORT_H
#define TRANSPORTINHERITANCE_TRANSPORT_H
#include <iostream>

class Transport {
protected:

    std::string name;
    int release_year = 0;
    double max_speed = 0;
    double weight = 0;
    int passengers_count = 0;

public:

    Transport(std::string name, int release_year, double max_speed, double weigh, int passengers_count);
    void Print() const;
    std::string GetName() const { return name; };
    int GetReleaseYear() const { return release_year; };
    double GetMaxSpeed() const { return max_speed; };
    double GetWeight() const { return weight; };
    int GetPassengersCount() const { return passengers_count; };

    void SetName(std::string name) { this->name = name; };
    void SetReleaseYear(int release_year) { this->release_year = release_year; };
    void SetMaxSpeed(double max_speed) { this->max_speed = max_speed; };
    void SetWeight(double weight) { this->weight = weight; };
    void SetPassengersCount(int passengers_count) { this->passengers_count = passengers_count; };


};


#endif