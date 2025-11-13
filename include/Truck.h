
#ifndef TRANSPORTINHERITANCE_TRUCK_H
#define TRANSPORTINHERITANCE_TRUCK_H
#include "Transport.h"


class Truck : public Transport {
    double wheel_size = 0;
    double engine_volume = 0;
    public:
    Truck(std::string name, int release_year, double max_speed,
        double weight, int passengers_count, double wheel_size, double engine_volume);

    double GetWheelSize() const { return this->wheel_size; };
    double GetEngine() const { return this->engine_volume; };

    void SetWheelSize(double wheel_size) { this->wheel_size = wheel_size; }
    void SetEngine(double engine_volume) { this->engine_volume = engine_volume; }
    void Print() const;
};


#endif