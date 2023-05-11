#include <string>
#include "../Items/Item.cpp";

struct Machine {
    std::string name;
    float powerConsumption;
    float powerGeneration;
    Item itemConsumption;
    Item itemGeneration;
    float productionRate;
    std::string machineType;
};