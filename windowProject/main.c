#include "pico/stdlib.h"
#include "window.h"

#include "myApps.h"

#define PS2_DATA 1
#define PS2_CLK 0
#define VGA_VSYNC 16
#define VGA_HSYNC 17
#define VGA_BLUE 18

int main()
{
  Window_initIO(PS2_DATA, PS2_CLK, VGA_VSYNC, VGA_HSYNC, VGA_BLUE);

  Window_createTaskWithWindow(fibonacci, 50, 90, 160, 128, "Fibonacci", BLUE);
  Window_createTaskWithWindow(xPlusY, 240, 90, 160, 128, "x+y", RED);
  Window_createTaskWithWindow(stickyNote, 440, 90, 160, 128, "Sticky note", GREEN);
  Window_createTaskWithWindow(helloWorld, 50, 270, 550, 128, "Hello World!", MAGENTA);

  Window_startRTOS();

  return 0;
}
