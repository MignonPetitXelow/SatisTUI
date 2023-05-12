#include "VoidGenerator.h"

Machine Void_Generator(void)
{
    Machine _VoidGenerator;
    _VoidGenerator.name = "Void Generator";
    _VoidGenerator.powerConsumption = 0;
    _VoidGenerator.powerGeneration = 1020.24;
    _VoidGenerator.powerFluctuation = 0.3;
    _VoidGenerator.productionRate = 2.3;
    _VoidGenerator.color = 3;
    _VoidGenerator.machineType = "generator";
    return _VoidGenerator;
}