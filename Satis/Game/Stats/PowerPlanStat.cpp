#include "PowerPlanStat.h"

std::string PowerPlan::getPowerPlanStatFromInt(int state3)
{
    switch(state3)
    {
        case 0:
            return "NOT_INSTALLED";
        case 1:
            return "ONLINE";
        case 2: 
            return "OFFLINE";
        case 3: 
            return "OVERLOAD";   
        default:
            return "NOT_INSTALLED";
    }
}

void PowerPlan::UpdateIndicator(void)
{
    if(STATES[1] > STATES[0])
        STATES[3] = 3;
    else if(STATES[0] == 0)
        STATES[3] = 0;
    else
        STATES[3] = 1;

    return;
}