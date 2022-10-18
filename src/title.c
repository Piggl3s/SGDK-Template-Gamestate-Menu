#include <title.h>
#include <genesis.h>
#include <resources.h>
#include <gamestate.h>


Sprite* tomatoSprite;


void drawTitleScreen(){
    VDP_drawText("A", 19, 8);
    VDP_drawText("Plump Studios", 13, 10);
    SPR_init();
    PAL_setPalette(PAL2,tomato.palette->data, DMA);
    tomatoSprite = SPR_addSprite(&tomato,120,90,TILE_ATTR(PAL2, TRUE, FALSE, FALSE));
    tomatoSprite = SPR_addSprite(&tomato,150,90,TILE_ATTR(PAL2, TRUE, FALSE, FALSE));
    SPR_update();
    VDP_drawText("Game", 17, 16);
    waitMs(6000);
    currentState = STATE_MENU;
}

void destroyScreen(){
    //Cleanup
    VDP_resetSprites();
    VDP_updateSprites(0, FALSE);
    VDP_clearPlane(BG_A, FALSE);
}

void processStateTitle(){
    //Init
    drawTitleScreen();

    //Update
    while(currentState == STATE_TITLE){
        SYS_doVBlankProcess();      
    }

    destroyScreen();

}