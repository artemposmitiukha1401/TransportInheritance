#ifndef TRANSPORTINHERITANCE_BYCICLE_H
#define TRANSPORTINHERITANCE_BYCICLE_H
#include "Tank.h"

enum class BicycleType {
    Road,
    Mountain,
    Hybrid,
    Gravel,
    BMX,
    Touring,
    Electric
};

enum class FrameMaterial {
    Aluminum,
    Carbon,
    Steel,
    Titanium,
    Magnesium,
    Bamboo
};


class Bicycle : public Transport {
    BicycleType type;
    FrameMaterial frame_material;

public:
    static std::string TypeToString(BicycleType type);

    static std::string MaterialToString(FrameMaterial material);

    Bicycle(std::string name, int release_year, double max_speed, double weigh, int passengers_count, BicycleType type,
            FrameMaterial frame_material);

    BicycleType getType() const { return type; }
    FrameMaterial getFrameMaterial() const { return frame_material; }

    void Print() const;
};


#endif
