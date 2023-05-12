#ifndef SATIS_HEADER
#define SATIS_HEADER

#include <ncurses.h>
#include <vector>
#include <thread>
#include <chrono>

#include "Game/Machines/Machine.h"
#include "Game/Machines/Implements/Generator/VoidGenerator.h"
#include "Game/Machines/Implements/Debug/SuperComputer.h"
#include "Game/Machines/Implements/Drill/UselessDrill.h"

#include "Game/Stats/StatUpdater.h"
#include "Game/Stats/PowerPlanStat.h"
#include "Game/World/ObjectDrawer.h"
#include "Game/World/ObjectEmplacement.h"
#include "Core/Lang/Translator.h"
#include "Game/Handlers.h"

extern WINDOW *StatPanel;
extern WINDOW *MainPanel;
extern std::vector<MachineEmplacement> MACHINES;
extern std::vector<float> STATES;
extern bool ProgramRunning;

#endif // !SATIS_HEADER
