// convert Fahrenheit to Celsius

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: exercise_4 degree\n");
	return 1;
    }

    float F = atof(argv[1]);
    float C = (F - 32) / 1.8;

    printf("Celsius is %.2f\n", C);

    return 0;
}
