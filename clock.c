#include <stdio.h>
#include <windows.h>

int main()
{
    int hours, minutes, seconds, delay = 1000;
    printf("Set time:\n\t");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    if (hours > 12 || minutes > 60 || seconds > 60)
    {
        printf("\nERROR\n");
        exit(0);
    }
    while (1)
    {
        seconds++;
        if (seconds > 59)
        {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59)
        {
            hours++;
            minutes = 0;
        }
        if (hours > 12)
        {
            hours = 1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d", hours, minutes, seconds);
        Sleep(delay);
        system("cls");
    }
}