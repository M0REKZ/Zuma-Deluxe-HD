#ifndef APPLICATION_H
#define APPLICATION_H

#include <stdbool.h>

#include "gameplay/Game.h"
#include "menu/MenuMgr.h"

#define MAX_FPS 60
#define FRAME_DELAY 1000 / MAX_FPS

struct AppStruct
{
  Game game;
  MenuMgr menuMgr;

  int curLvl;
  int curDifficulty;

  int inMenu;
  int mouseClicked;

  uint32_t frameStart;
  int frameTime;

  bool isRunning;
};

extern struct AppStruct app;

int ApplicationZuma_Start(void);

#endif