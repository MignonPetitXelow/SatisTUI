#ifndef HANDLERS_HEADER
#define HANDLERS_HEADER

#include <ncurses.h>
#include <vector>
#include <thread>
#include <chrono>

#include "Stats/StatUpdater.h"
#include "../Satis.h"

#include "World/ObjectDrawer.h"
#include "World/ObjectEmplacement.h"

extern void States(void);
extern void Rendering(void);
extern void Generation(void);

#endif // !HANDLERS_HEADER
