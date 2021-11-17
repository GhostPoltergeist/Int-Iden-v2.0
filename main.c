#include <stdio.h>
#include <stdlib.h>

//This program will indentify a specific integer value and create it's output

int main() {

//Giving some delay
void delay( unsigned int value)
{
    unsigned int count1 =0;
    unsigned int count2 = 0;
    system("COLOR 0A");

    for(count1 = 0; count1 < value ; count1++ )
    {
        for(count2 = 0; count2 < count1 ; count2++ )
        {

        }
    }
}


// string to display Rocket
// Animation & design before the Int-iden program
const char rocket[] =
    "           ^ \n\
          /^\\\n\
          |-|\n\
          |I|\n\
          |N|\n\
          |T|\n\
          |-|\n\
          |I|\n\
         /|D|\\\n\
        / |E| \\\n\
       |  |N|  |\n\
        `-\"\"\"-`\n\
     LOADING DATABASE \n\
";

    int jumpControlAtBottom = 0;
    const int someDelay = 6000;
    int shifControl = 0;


    //jump to bottom of console

    for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    //Print rocket
    fputs(rocket,stdout);

    for (shifControl = 0; shifControl < 30; ++shifControl)
    {
        // Rocket move on the basis of delay
        delay(someDelay);
        delay(someDelay);

        // move rocket a line upward
        printf("\n");
        printf("\n");
        printf("\n");
    }

    printf("\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+\n");
    printf("|I|n|t|-|I|d|e|n|-|B|E|T|A|\n");
    printf("|by: Harold Edsel Cabaluna|\n");
    printf("+-+-+-+-+-+-+-+-++-++-+-+-+\n");
    printf("\n");

    char username [20];
    char password [20];
    printf("Enter Username: ");
    gets(username);
    printf("Enter Password: ");
    gets(password);

    if(strcmp(username, "A")==0)
    {
     if(strcmp(password, "A")==0)
     {
        printf(" WELCOME.\n");
            int i, j, k;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
                printf(" ");
        }
        for(k=1;k<(i*2);k++)
        {
                printf("*");
        }
        printf("\n");
    }
     }
    else{
        printf("\nInvalid Password\n");
        return 0;
     }
    }
    else {
        printf("\nInvalid Username\n");
        return 0;
    }

    printf("\n");
    printf("|I|n|t|-|I|d|e|n|-|v2.0|\n");
    printf("\n");

    char choice;
    int num1, num2, cont;
    printf("Enter the first Integer: ");
    scanf("%d", &num1);
    getchar ();
    printf("Enter the second Integer: ");
    scanf("%d", &num2);
    getchar ();
    printf("-->$: A - Addition\n");
    printf("-->$: S - Subtraction\n");
    printf("-->$: M - Multiplication\n");
    printf("-->$: D - Division\n");
    printf("Choose Your Operator [ASMD]? ");
    choice = (char)toupper(getchar());
    getchar ();
    printf("\n");
    switch(choice)
    {
        case 'A':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case 'S':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 'M':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case 'D':
            if (num2 == 0)
                fprintf(stderr, "The divisor can not be zero");
            else
            {
                printf("%d / %d = %f", num1, num2, (double)num1 / num2);
            }
            break;
        default :
            fprintf(stderr, "Invalid entry");
            break;
    }
    printf("\n");
    for (;;)
    {
      printf("Continue [YN]? ");
      cont = toupper(getchar());
      getchar ();
      if (cont == 'Y')
          return main(); // the difference.
      else if (cont == 'N')
          return EXIT_SUCCESS;
    }
}

