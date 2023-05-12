#include "UselessDrill.h"

Machine Useless_Drill(void)
{
    Machine _UselessDrill;
    _UselessDrill.name = "Useless Drill";
    _UselessDrill.powerConsumption = 170;
    _UselessDrill.powerGeneration = 0;
    _UselessDrill.productionRate = 1.3;
    _UselessDrill.powerFluctuation = 0.8;
    _UselessDrill.color = 4;
    _UselessDrill.machineType = "Drill";
    return _UselessDrill;
}