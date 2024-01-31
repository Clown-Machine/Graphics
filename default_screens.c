#include "screen_manager.h"
#include <stdio.h>

bool CONTINUE = false;
void customDelay(uint64_t CYCLES)
{
    uint64_t j;
    //this could throw a warning: Detected SW delay loop using empty loop. Recommend using a timer module instead
    //but the creator has decided not to use another timer to implement this function
    for (j = 0; j < CYCLES; j++)
    {
    }
}

void waitToContinue()
{
    while (!CONTINUE)
    {
        //TODO check for B1 to have been pressed
        customDelay(500000);
        CONTINUE = true;
    }
    CONTINUE = false;
}
void _screenInit()
{
    _graphicsInit();
    cleanScreen();
}

void screenBluetoothPairing()
{

    setForegroundColor(White);
    setBackgroundColor(Black);

    drawImage(BLUETOOTH, SCREEN_WIDTH/2-32, 0);
    writeToScreen("Check that the", SCREEN_WIDTH / 2,
    SCREEN_HEIGHT / 2,
                  CENTERED);
    writeToScreen("Bluetooth modules", SCREEN_WIDTH / 2,
    SCREEN_HEIGHT / 2 + 10,
                  CENTERED);
    writeToScreen("are paired", SCREEN_WIDTH / 2,
    SCREEN_HEIGHT / 2 + 20,
                  CENTERED);

    writeToScreen("Press B1 to continue", SCREEN_WIDTH / 2,
    SCREEN_HEIGHT - 20,
                  CENTERED);

    waitToContinue();
}
void screenMenuPosizione()
{
    cleanScreen();
    setForegroundColor(White);
    setBackgroundColor(Black);
    writeToScreen("Select a position", SCREEN_WIDTH / 2, 10, CENTERED);
    drawLine(0, 25, SCREEN_WIDTH, 25);
    uint8_t offset = 20;
    uint8_t base = 30;

    writeToScreen("Position: A", SCREEN_WIDTH / 2 + 10, base + offset,
                  CENTERED);

    writeToScreen("Position: B", SCREEN_WIDTH / 2 + 10, base + 2 * offset,
                  CENTERED);

    writeToScreen("Position: C", SCREEN_WIDTH / 2 + 10, base + 3 * offset,
                  CENTERED);

    writeToScreen("Position: D", SCREEN_WIDTH / 2 + 10, base + 4 * offset,
                  CENTERED);
    waitToContinue();
    //TODO fai controllo scelta menu con interrupts? e joystick?
}

void screenIntroduction()
{
    cleanScreen();
    writeToScreen("Press B1", 5, 10, LEFT);
    writeToScreen("to switch mode", 5, 20, LEFT);
    writeToScreen("Press B2 ", 5, 35, LEFT);
    writeToScreen("to save position", 5, 45, LEFT);
    writeToScreen("Press B3 ", 5, 60, LEFT);
    writeToScreen("to control the claw", 5, 70, LEFT);

    writeToScreen("Current mode:", SCREEN_WIDTH / 2, SCREEN_HEIGHT - 35,
                  CENTERED);
    writeToScreen("TODO", SCREEN_WIDTH / 2, SCREEN_HEIGHT - 25, CENTERED);

    writeToScreen("Move joystick to use", SCREEN_WIDTH / 2, SCREEN_HEIGHT - 10,
                  CENTERED);
    waitToContinue();
}

void screenSavingPosition()
{
    cleanScreen();
    writeToScreen("Saved new position", SCREEN_WIDTH / 2, 40, CENTERED);
    drawImage(THUMBSUP, SCREEN_WIDTH / 2 - 24, SCREEN_HEIGHT - 60);
    waitToContinue();
}

