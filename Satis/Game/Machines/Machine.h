#ifndef MACHINE_HEADER
#define MACHINE_HEADER

#include "../Items/Item.h"
#include <string>

struct Machine 
{
    std::string name;

    // ⚠️ IN WATT/secondes
    float powerConsumption;
    float powerGeneration; 
    float powerFluctuation;

    Item itemConsumption;
    Item itemGeneration;
    float itemPerMinutes;

    short color;

    float productionRate;
    std::string machineType;
};

#endif // !MACHINE_HEADER
