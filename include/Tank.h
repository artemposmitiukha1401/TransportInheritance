#ifndef TRANSPORTINHERITANCE_TANK_H
#define TRANSPORTINHERITANCE_TANK_H
#include "Transport.h"


class Tank : public Transport {
    double armour_thickness = 0;
    double caliber = 0;
    double track_width;
    bool canFire = false;

public:
    Tank(std::string name, int release_year, double max_speed, double weigh, int passengers_count,
         double armour_thickness, double caliber, double track_width, bool canFire);

    double GetArmourThickness() const { return this->armour_thickness; }
    double GetCaliber() const { return this->caliber; }
    double GetTracWidth() const { return this->track_width; }

    void SetArmourThickness(double armour_thickness) { this->armour_thickness = armour_thickness; }
    void SetCaliber(double caliber) { this->caliber = caliber; }
    void SetTrackWidth(double trac_width) { this->track_width = trac_width; }

    void Print() const;
};


#endif
