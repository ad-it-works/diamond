/*
    diamond
    diamond terminal diisplay program

    For submission to https://code.golf/diamonds#c

    Created by amd

*/


// ------------------------------
// ******************************
// Preprocessor Declaration
// ******************************
// ------------------------------


#define P_OK 0;

#define DIAMOND_MAX 9

#include <stdio.h>



// ******************************
// display_diamond
// Function
// ******************************
int display_diamond(int count)
{
    
    // ----------------------------
    // Variable declaration
    int res;

    int x;
    int y;

    int z;
    int k;


    // ---------------------------
    // Actual Function Run

    // display for Upper Diamond
    x=1;
    while(x <= count)
    {
        // For lest size
        z=1;
        k=DIAMOND_MAX-x;

        printf(" ");

        y=1;
        while(y<=DIAMOND_MAX)
        {
            if(y>k)
            {
                printf("%i", z);
                z++;
            }else
            {
                printf(" ");
            };
            y++;
        };

        // For right side

        z--;
        z--;
        while(z>=1 && x>1)
        {
            printf("%i", z);
            z--;
        };

        printf("\n");

        x++;

    };

    // Display for lower diamond

    x=count-1;
    while(x>=1)
    {
        // For left Side
        printf("  ");

        k=(DIAMOND_MAX-x);
        z=1;

        y=1;
        while(y<DIAMOND_MAX)
        {
            if(y>=k)
            {
                printf("%i", z);
                z++;
            }else
            {
                printf(" ");
            };
            y++;
        };

        // For right Side
        z--;
        z--;

        while(z>=1)
        {
            printf("%i", z);
            z--;
        }


        printf("\n");

        x--;
    };


    // Set to function result to OK
    res=P_OK;

    return res;

};



// ------------------------------
// ******************************
// Program Entry Point
// ******************************
// ------------------------------
int main(int argc, char *argv[])
{
    // ----------------------------
    // Variable declaration
    int x;

    // ---------------------------
    // Actual program Run

    // looping for 9 display
    for(x=1; x<=9; x++)
    {
        // calling to  display
        display_diamond(x);
        printf("\n");
    };



    // program end
    return 0;

};
