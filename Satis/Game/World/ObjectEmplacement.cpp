#include "ObjectEmplacement.h"

MachineEmplacement Machine_Emplacement(int posY, int posX, Machine machine)
{
    MachineEmplacement machineEmplacement;
    machineEmplacement.posY = posY;
    machineEmplacement.posX = posX;
    machineEmplacement.machine = machine;
    machineEmplacement.isActive = true;

    return machineEmplacement;
}

MachineEmplacement Machine_Emplacement(int posY, int posX, Machine machine, bool isActive)
{
    MachineEmplacement machineEmplacement;
    machineEmplacement.posY = posY;
    machineEmplacement.posX = posX;
    machineEmplacement.machine = machine;
    machineEmplacement.isActive = isActive;

    return machineEmplacement;
}