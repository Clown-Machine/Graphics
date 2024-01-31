#include <ti/devices/msp432p4xx/inc/msp.h>
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include <stdio.h>
#include "default_screens.h"

void main(void)
{
    WDT_A_holdTimer();
    _screenInit();
    screenBluetoothPairing();
//    screenMenuPosizione();
//    screenIntroduction();
//    screenSavingPosition();
    while (1)
    {
    }

}
