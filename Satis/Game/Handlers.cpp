#include "Handlers.h"

StatUpdate statUpdate;

void States()
{
    while(ProgramRunning)
    {
        statUpdate.updateStats(MACHINES);

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

void Rendering()
{
    while(ProgramRunning)
    {
        // DRAW MACHINES
        werase(MainPanel);
        box(MainPanel, 0,0);

        for (const auto& machine : MACHINES)
        {
            DrawMachine(machine);
        }

        statUpdate.updateStatsWindow(STATES);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Generation()
{
    while(ProgramRunning)
    {
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}