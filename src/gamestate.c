#include <gamestate.h>
#include <genesis.h>
#include <title.h>
#include <menu.h>
#include <game.h>


Sprite* logo;

void basicInit(){
    JOY_init();
    currentState = STATE_TITLE;
}

void stateSelect(){
    switch(currentState){
        case STATE_TITLE:{
            processStateTitle();
            break;
        }
        case STATE_MENU:{
            processStateMenu();
            break;
        }
        case STATE_GAME:{
            processStateGame();
            break;
        }
    }
}
