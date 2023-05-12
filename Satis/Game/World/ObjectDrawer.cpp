#include "ObjectDrawer.h"

void DrawMachine(MachineEmplacement machineEmplacement)
{
    WINDOW* subWindow = newwin(
        3, 
        machineEmplacement.machine.name.length()+2,
        (LINES - 3)/2+machineEmplacement.posY,
        (COLS -  machineEmplacement.machine.name.length()+2)/2+machineEmplacement.posX
    );
    
    wattron(subWindow, COLOR_PAIR(machineEmplacement.machine.color));
    box(subWindow, 0,0);
    wattroff(subWindow, COLOR_PAIR(machineEmplacement.machine.color));

    mvwprintw(subWindow, 1, 1, machineEmplacement.machine.name.c_str());

    wrefresh(subWindow);
}