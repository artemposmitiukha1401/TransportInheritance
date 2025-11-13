#ifndef TRANSPORTINHERITANCE_SHIP_H
#define TRANSPORTINHERITANCE_SHIP_H
#include "Transport.h"


class Ship : public Transport {
    int propellers_count = 0;
    double waterline = 0;
public:
    Ship(std::string name, int release_year, double max_speed, double weight, int passengers_count, int propellers_count, double waterline);

    int GetPropellersCount() const { return this->propellers_count; }
    double GetWaterline() const { return this->waterline; }

    void SetWaterline(double waterline) { this->waterline = waterline; }
    void SetPropellersCount(int count) { this->propellers_count = count; }

    void Print() const;

};


#endif