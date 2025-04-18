#include <stdio.h>
#include <stdlib.h>

// creating global variable for stack
int top = -1; 

void Push(int Msize, int a[]) 
{
    //declaring variables
    int i;

    //checking overflow condition
    if (top == Msize - 1) 
    {
        printf("Stack OVERFLOW!\n");
    } 
    else 
    {
        //taking inputs
        printf("Enter the value: ");
        scanf("%d", &i);
        top++;

        //inserting value in stack
        a[top] = i;
    }
}

void Pop(int a[]) 
{
    //checking underflow condition
    if (top == -1) 
    {
        printf("Stack UNDERFLOW!\n");
    } 
    else 
    {
        //removing element from stack
        printf("Popped element: %d\n", a[top]);
        top--;
    }
}

void Display(int a[])
{
    //declaring variable
    int i;
    //displaying stack
    printf("[ ");
    for(i = 0;i <= top;i++)
    {
        printf("%d,",a[i]);
    }
    printf("]\n");
}

int main() 
{

    int Msize;
    //taking subscript value from user
    printf("Enter the size of stack: ");
    scanf("%d", &Msize);

    int a[Msize], ch;
    char op;

    //infinite loop
    while (1) 
    {
        printf("\nDo you want to enter the menu? [Y/n]: ");
        scanf(" %c",&op); 

        //checking condition for YES
        if (op == 'Y' || op == 'y') 
        {
            printf("Menu:\n1. Push an element\n2. Pop an element\n3. Display the stack\n4. Exit\nChoose an option: ");
            scanf("%d", &ch);
            
            //cases
            switch (ch) 
            {
                case 1:
                    Push(Msize, a);
                    break;
                case 2:
                    Pop(a);
                    break;
                case 3:
                    Display(a);
                    break;
                case 4:
                    exit(0);
                default:
                    printf("Entered wrong choice!\n");
                    break;
            }
        } 
        else 
        {
            printf("Exiting...\n");
            break;
        }
    }

    return 0;
}
