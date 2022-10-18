#ifndef GAMESTATE_H
#define GAMESTATE_H

enum GAME_STATE
{
    STATE_TITLE,
    STATE_MENU,
    STATE_GAME
};

enum GAME_STATE currentState;
void basicInit();
void stateSelect();
#endif