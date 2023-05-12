#include "Satis.h"

WINDOW *StatPanel;
WINDOW *MainPanel;

std::vector<MachineEmplacement> MACHINES = 
{
    Machine_Emplacement(-12,6,Void_Generator()),
    Machine_Emplacement(9,1,Super_Computer()),
    Machine_Emplacement(2,-2,Useless_Drill(),false),
};

std::vector<float> STATES = 
{
    0, // Kilowatt/s generated
    0, // Kilowatt/s used
    0, // Kilowatt/s max conso
    0, // Power Plan Stats
};

bool ProgramRunning = true;

int main()
{
    loadTranslations("eng");
    initscr();
    use_default_colors();
    cbreak();
    noecho();

    start_color();
    init_pair(1, COLOR_CYAN, -1); 
    init_pair(2, COLOR_MAGENTA, -1); // DEBUG
    init_pair(3, COLOR_GREEN, -1);   // GENERATOR
    init_pair(4, COLOR_YELLOW, -1);  // DRILL
    init_pair(5, COLOR_RED, -1);     // CRAfTER / FURNACES

    MainPanel = newwin(LINES, COLS, 0,0);
    box(MainPanel, 0,0);

    StatPanel = newwin(30,26,1,(COLS - 26)-2);
    wattron(StatPanel, COLOR_PAIR(1));
    box(StatPanel, 0,0);
    wattroff(StatPanel, COLOR_PAIR(1));

    refresh();
    wrefresh(StatPanel);
    wrefresh(MainPanel);
    
    std::thread state(States);
    std::thread render(Rendering);
    std::thread generate(Generation);

    while (ProgramRunning)
    {
        int ch = getch();

        switch (ch)
        {
            case 'q':
            case 27: // Escape key
                ProgramRunning = false;
                break;

            default:
                // Handle other shits
                break;
        }
    }

    endwin();
    state.join();
    render.join();
    generate.join();
    
    return 0;
}