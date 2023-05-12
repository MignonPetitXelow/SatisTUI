#ifndef OBJECT_EMPLACEMENT_HEADER
#define OBJECT_EMPLACEMENT_HEADER

#include "../Machines/Machine.h"

struct MachineEmplacement
{
    int posY;
    int posX;
    Machine machine;
    bool isActive = false;
};

extern MachineEmplacement Machine_Emplacement(int posY, int posX, Machine machine);
extern MachineEmplacement Machine_Emplacement(int posY, int posX, Machine machine, bool isActive);

#endif // !OBJECT_EMPLACEMENT_HEADER
