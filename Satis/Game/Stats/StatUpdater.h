#ifndef STAT_UPDATER_HEADER
#define STAT_UPDATER_HEADER

#include <vector>
#include <string>
#include <ncurses.h>
#include <cmath>
#include <cstdlib>
#include "../Items/Item.h"
#include "../Machines/Machine.h"
#include "../../Satis.h"
#include "PowerPlanStat.h"
#include "../../Core/Lang/Translator.h"
#include "../World/ObjectDrawer.h"
#include "../World/ObjectEmplacement.h"

class StatUpdate
{
    public:
        void updateStats(const std::vector<MachineEmplacement>& machines);
        void updateStatsWindow(std::vector<float> stats);
};

#endif // !STAT_UPDATER_HEADER