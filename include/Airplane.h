#ifndef TRANSPORTINHERITANCE_AIRPLANE_H
#define TRANSPORTINHERITANCE_AIRPLANE_H
#include "Transport.h"


class Airplane : public Transport {
    double wingspan = 0;
    double engine_power = 0;
    public:
    Airplane(std::string name, int release_year, double max_speed,
        double weight, int passengers_count, double wingspan, double engine_power);
    double GetWingspan() const { return this->wingspan; }
    double GetEnginePower()const { return this->engine_power; }

    void SetWingspan(double wingspan) { this->wingspan = wingspan; }
    void SetEnginePower(double engine_power) { this->engine_power = engine_power; }

    void Print() const;

};


#endif //TRANSPORTINHERITANCE_AIRPLANE_H