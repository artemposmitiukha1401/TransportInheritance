#ifndef TRANSPORTINHERITANCE_CAR_H
#define TRANSPORTINHERITANCE_CAR_H
#include <string>

#include "Transport.h"

enum class TransmissionType {
    Manual,
    Automatic,
    CVT,
    DualClutch,
    SemiAutomatic
};

class Car : public Transport {
    TransmissionType transmission_type;
    double engine_volume = 0;
    double horse_power = 0;

public:
    static std::string TransmissionTypeToString(TransmissionType type);

    Car(std::string name, int release_year, double max_speed, double weigh, int passengers_count,
        TransmissionType transmission_type, double engine_volume, double horse_power);

    TransmissionType GetTransmissionType() const { return this->transmission_type; }
    double GetEnginePower() const { return this->engine_volume; }
    double GetHorsePower() const { return this->horse_power; }

    void SetTransmissionType(TransmissionType transmission_type) { this->transmission_type = transmission_type; }
    void SetEnginePower(double engine_volume) { this->engine_volume = engine_volume; }
    void SetHorsePower(double horse_power) { this->horse_power = horse_power; }

    void Print() const;
};


#endif
