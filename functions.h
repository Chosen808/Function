#pragma
#include <stdio.h>

// This function is use to initialize int, float, doubles etc from string input. Edit to suite
void getInputValuesFromString (char string[], int input1, int input2, int input3)
{
    sscanf (string, "%d %d %d", &input1, &input2, &input3);
}