#include "pico/stdlib.h"
#include "window.h"

void fibonacci(void *appWindow)
{
	uint64_t a = 0, b = 1, c;

	while (true)
	{
		if (c > 9000000)
		{
			a = 0;
			b = 1;
			Window_clear(appWindow);
		}
		Window_printf(appWindow, "\n%u", a);
		c = a + b;
		a = b;
		b = c;
		Window_delay(500);
	}
}

void xPlusY(void *appWindow)
{
	float x, y;
	while (true)
	{
		Window_printf(appWindow, "Enter two numbers\n");
		Window_scanf(appWindow, "%f%f", &x, &y);
		Window_printf(appWindow, "%.2f + %.2f = %.2f\n\n", x, y, x + y);
	}
}

void stickyNote(void *appWindow)
{
	Window_printf(appWindow, "Use Shift+Tab to change\nfocus between windows!\n");
	Window_printf(appWindow, "You can type in this\narea!");

	while (true)
	{
		char c = Window_getchar(appWindow);
		Window_printf(appWindow, "%c", c);
	}
}

void helloWorld(void *appWindow)
{
	while (true)
	{
		for (int i = 1; i < 8; i++)
		{
			Window_setTextColour(appWindow, i);
			Window_printf(appWindow, "Hello world! ");
			Window_delay(100);
		}
		Window_printf(appWindow, "\n");
		Window_delay(1000);
	}
}
