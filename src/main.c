#include <genesis.h>
#include <gamestate.h>

int main()
{
    basicInit();

    while(1)
    {
        stateSelect();
        SYS_doVBlankProcess();
    }
    return (0);
}
