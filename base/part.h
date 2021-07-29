#ifndef PART_H
#define PART_H

#include <QtCore>


class Part
{
private:
    qint64 mass; // in grams
    struct coordinate
    {
       qint64 x; // 10^-3 mm
       qint64 y;
       qint64 z;
    };
    coordinate center_of_mass;
    coordinate geometric_center;
    QString material_mark;
    qint64 volume; // mm^3 * 10^-3
    qfloat16 density; // gramm / cm^3 * 10^-3
    QString finishing;
    qint8 class_of_accuracy;



public:
    Part();

    void SetMaterial(QString material_mark);

    coordinate GetCenterOfMass();
    coordinate GetGemetricCenter();
    QString GetMaterial();

    void UpdateVolume();
    void UpdateGeometricCenter();
    void UpdateMassCenter();

};

#endif // PART_H
