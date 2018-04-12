/**
 * This is the codes for the IT Bootcamp questionnaire
 * 
 * Created by : Wilsin Lucianto
 * Student ID: 27121666
 * Email: wluc1@student.monash.edu
 * Date created: 3 November 2017
 * 
 * This is created in C
 * 
 * For mac and linux users: to run this program in your local machine, 
 * simply copy the codes and save it as a .c file in your home directory 
 * (The directories can be changed but the best 
 * is to save on the directory where your terminal first accessed)
 * open terminal
 * to compile, type ->  gcc -Wall -o filename filename.c
 * to run this program, type ->  ./filename
 * 
 * limitations: I haven't found a way to make users put in the elements of the array like this:
 * The list: 3, 10, 4, 9, 8, 7
 * instead I put it in a incremetal user request
*/

#include <stdio.h>

/**
 * this is a constant 
 * to show that the elements of the array is 5
 * if you want the elements more than 5 
 * please change the number to what you want.
*/
#define ARRAYCOUNT 7 

/**
 * this is the function to show number pairs which results the first number when added
*/
void findNumbers(int array[], int arrayLength, int firstNumber)
{
    for (int i = 0; i<arrayLength; i++)
    {
        for (int j=i+1; j<=(arrayLength-1); j++)
        {
            if (array[i] >= firstNumber)
            {
                /**
                 * if the number in that particular element 
                 * is bigger than or equal to the first number.
                 * it skips the number and i will go to the next
                 */
                break; 
            }
            if (array[i] + array[j] == firstNumber)
            {
                printf("%d and %d\n",array[i],array[j]); //print the numbers
            }
        }
    }
}


/**
 * this is where the program asks user input
 * for first number and each elements for list
 * gets the length
 * puts into the function 
 * and shows the results of the function to the screen
*/
int main()
{
    /**
     * num is first number 
     * len is to count the elements
     * li is the list
    */
    int num, len, li[ARRAYCOUNT];

    printf("Enter the first number: "); //asks for user input
    if (scanf("%d",&num))
    {
        for(int c=0; c<ARRAYCOUNT; c++) //this is to ask the elements in a incremental way
        {
            printf("Enter the list no.%d: ",c+1);
            if (scanf("%d",&li[c]) != 1)
            {
                printf("element ERROR: Please provide an integer number\n");
                break;
            }
        }
        len = sizeof(li)/sizeof(li[0]);
        findNumbers(li, len, num); //this is to implement the function
    }
    else
    {
        printf("first number ERROR: Please provide an integer number\n");
    }
    return 0;
}