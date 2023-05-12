#ifndef POWER_PLAN_STAT_HEADER
#define POWER_PLAN_STAT_HEADER

#include "../../Satis.h"
#include <string>
class PowerPlan
{
    public:
        std::string getPowerPlanStatFromInt(int state3);
        void UpdateIndicator(void);
};

#endif // !POWER_PLAN_STAT_HEADER
