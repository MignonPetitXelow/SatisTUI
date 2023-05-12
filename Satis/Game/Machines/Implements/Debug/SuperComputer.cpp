#include "SuperComputer.h"

Machine Super_Computer(void)
{
    Machine _SuperComputer;
    _SuperComputer.name = "Super Computer";
    _SuperComputer.powerConsumption = 1304;
    _SuperComputer.powerGeneration = 0;
    _SuperComputer.productionRate = 1;
    _SuperComputer.powerFluctuation = 0.8;
    _SuperComputer.color = 2;
    _SuperComputer.machineType = "Debug";
    return _SuperComputer;
}