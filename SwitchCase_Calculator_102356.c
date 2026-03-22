#include <stdio.h>

int numberIntChoice;
char numberChoice;
int numberIntOne;
int numberIntTwo;
int numberIntResult;
float numberFloatOne;
float numberFloatTwo;
float numberFloatResult;

int main (void)
{
    printf("1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Modulous.\n\n**********Menu**********\n\nEnter The Menu.\nA For Addition.\nS For Subtraction.\nM For Multiplication.\nD For Division.\nR For Modulous\n\n");
    printf("Enter The Choice For Calculation : ");
    scanf("%c", &numberChoice);

    switch(numberChoice)
    {
        case 'A':
        {
            printf("Entered Choice %c For Addition.\n\n", numberChoice);
            printf("1.Integer Addition.\n2.Float Addition.\n\n");
            printf("Enter The Value For Addition : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 1:
            {
                printf("Entered Choice %d For Integer Addition.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntResult = numberIntOne + numberIntTwo;

                printf("Addition : %d + %d = %d\n", numberIntOne, numberIntTwo, numberIntResult);
            }
            break;

            case 2:
            {
                printf("Entered Choice %d For Float Addition.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                numberFloatResult = numberFloatOne + numberFloatTwo;

                printf("Float Addition : %.2f + %.2f = %.2f\n", numberFloatOne, numberFloatTwo, numberFloatResult);
            }
            
        }
        break;

        case 'S':
        {
            printf("Entered Choice %c For Subtraction.\n\n", numberChoice);
            printf("1.Integer Subtraction.\n2.Float Subtraction.\n\n");
            printf("Enter The Value For Subtraction : ");
            scanf("%d", &numberIntChoice);
        }

        switch(numberIntChoice)
        {
            case 1:
            {
                printf("Entered Choice %d For Integer Subtraction.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%d", &numberIntOne);
                printf("Enter The Number Two : ");
                scanf("%d", &numberIntTwo);

                numberIntResult = numberIntOne - numberIntTwo;

                printf("Subtraction : %d - %d = %d\n", numberIntOne, numberIntTwo, numberIntResult);
            }
            break;

            case 2:
            {
                printf("Entered Choice %d For Float Subtraction.\n\n", numberIntChoice);
                printf("Enter The Number One : ");
                scanf("%f", &numberFloatOne);
                printf("Enter The Number Two : ");
                scanf("%f", &numberFloatTwo);

                
                numberFloatResult = numberFloatOne - numberFloatTwo;

                printf("Subtraction : %.2f - %.2f = %.2f\n", numberFloatOne, numberFloatTwo, numberFloatResult);
            }
            
        }
        break;

        case 'M':
        {
            printf("Entered Choice %c For Multiplication.\n\n", numberChoice);
            printf("1.Integer Multiplication.\n2.Float Multiplication.\n\n");
            printf("Enter The Value For Multiplication : ");
            scanf("%d", &numberIntChoice);

            switch(numberIntChoice)
            {
                case 1:
                {
                    printf("Entered Choice %d For Integer Multiplication.\n\n", numberIntChoice);
                    printf("Enter The Number One : ");
                    scanf("%d", &numberIntOne);
                    printf("Enter The Number Two : ");
                    scanf("%d", &numberIntTwo);

                    numberIntResult = numberIntOne * numberIntTwo;

                    printf("Multiplication : %d * %d = %d\n", numberIntOne, numberIntTwo, numberIntResult);
                }
                break;

                case 2:
                {
                    printf("Entered Choice %d For Float Multiplication.\n\n", numberIntChoice);
                    printf("Enter The Number One : ");
                    scanf("%f", &numberFloatOne);
                    printf("Enter The Number Two : ");
                    scanf("%f", &numberFloatTwo);

                    numberFloatResult = numberFloatOne * numberFloatTwo;

                    printf("Multiplication : %.2f * %.2f = %.2f\n", numberFloatOne, numberFloatTwo, numberFloatResult);
                }
            }
               
        }
        break;

        case 'D':
        {
            printf("Entered Choice %c For Division.\n\n", numberIntChoice);
            printf("1.Integer Division.\n2.Float Division.\n\n");
            printf("Enter The value For division : ");
            scanf("%d", numberIntChoice);

            switch(numberIntChoice)
            {
                case 1:
                {
                    printf("Entered choice %d for Integer Division.\n\n", numberIntChoice);
                    printf("Enter The NumberOne : ");
                    scanf("%d", &numberIntOne);
                    printf("Enter The NumberTwo : ");
                    scanf("%d", &numberIntTwo);

                    numberIntResult = numberIntOne / numberIntTwo;

                    printf("Division : %d / %d = %d\n", numberIntOne, numberIntTwo, numberIntResult);
                }
                break;

                case 2:
                {
                    printf("Entered Choice %d For Float choice.\n\n", numberIntChoice);
                    printf("Enter The NumberOne : ");
                    scanf("%f", &numberFloatOne);
                    printf("Enter The Number Two : ");
                    scanf("%f", &numberFloatTwo);

                    numberFloatResult = numberFloatOne / numberFloatTwo;

                    printf("Division : %.2f / %.2f = %.2f\n", numberFloatOne, numberFloatTwo, numberFloatResult);
                }
            }
        }
        break;

        case 'R':
        {
            printf("Entered Choice %c For Moduloud.\n\n", numberIntChoice);
            printf("1.Integer Mod.\n2.Float Mod.\n\n");
            printf("Enter The value For division : ");
            scanf("%d", numberIntChoice);

            switch(numberIntChoice)
            {
                case 1:
                {
                    printf("Entered choice %d for Integer Mod.\n\n", numberIntChoice);
                    printf("Enter The NumberOne : ");
                    scanf("%d", &numberIntOne);
                    printf("Enter The NumberTwo : ");
                    scanf("%d", &numberIntTwo);

                    numberIntResult = numberIntOne / numberIntTwo;

                    printf("Modulous : %d / %d = %d\n", numberIntOne, numberIntTwo, numberIntResult);
                }
                break;

                case 2:
                {
                    printf("Entered Choice %d For Float Mod.\n\n", numberIntChoice);
                    printf("Enter The NumberOne : ");
                    scanf("%f", &numberFloatOne);
                    printf("Enter The Number Two : ");
                    scanf("%f", &numberFloatTwo);

                    numberFloatResult = numberFloatOne / numberFloatTwo;

                    printf("Modulous : %.2f / %.2f = %.2f\n", numberFloatOne, numberFloatTwo, numberFloatResult);
                }
            }
        }
        break;

        default:
        {
            puts("");
            printf("Default Case.\n");
        }
        
    }

    return(0);
}