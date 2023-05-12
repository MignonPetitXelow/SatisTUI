#include "StatUpdater.h"

PowerPlan powerPlan;

void StatUpdate::updateStats(const std::vector<MachineEmplacement>& machines)
{
    if (STATES[3] != 3)
    {
        STATES = {0, 0, 0, 0};
        float instability, powerGeneration, powerConsumption, productionRate;
        for (const auto& machine : machines)
        {
            if(machine.isActive)
            {
                instability = ((float)rand() / (float)RAND_MAX) * (2 * machine.machine.powerFluctuation) - machine.machine.powerFluctuation;
                STATES[0] += powerGeneration = machine.machine.powerGeneration * machine.machine.productionRate + instability;
                STATES[1] += machine.machine.powerConsumption * machine.machine.productionRate + instability;
            }
            STATES[2] += machine.machine.powerConsumption * machine.machine.productionRate + machine.machine.powerFluctuation;
        }
    }
    powerPlan.UpdateIndicator();
}

void StatUpdate::updateStatsWindow(std::vector<float> stats)
{
    werase(StatPanel);
    wattron(StatPanel, COLOR_PAIR(1));
    box(StatPanel, 0,0);
    wattroff(StatPanel, COLOR_PAIR(1));

    mvwprintw(StatPanel, 1, 1, translate("STATPANE_POWER_GENERATED").c_str());
    mvwprintw(StatPanel, 2, 2, std::to_string(stats[0]/1000).c_str());
    mvwprintw(StatPanel, 3, 1, "------------------------");
    mvwprintw(StatPanel, 4, 1, translate("STATPANE_POWER_USED").c_str());
    mvwprintw(StatPanel, 5, 2, std::to_string(stats[1]/1000).c_str());
    mvwprintw(StatPanel, 6, 1, "------------------------");
    mvwprintw(StatPanel, 7, 1, translate("STATPANE_POWER_MAXCONSO").c_str());
    mvwprintw(StatPanel, 8, 2, std::to_string(stats[2]/1000).c_str());
    mvwprintw(StatPanel, 9, 1, "------------------------");
    mvwprintw(StatPanel, 10, 1, translate("STATPANE_POWER_PLAN_STAT").c_str());
    mvwprintw(StatPanel, 11, 2, translate(powerPlan.getPowerPlanStatFromInt(stats[3])).c_str());
    wrefresh(StatPanel);
}