//The development was done on cloud9

#include<stdio.h>

char C = 0; //char to count input
char input = 0; //chars sequence input
int sum = 0; //the number of times the counted char appears

int main() {
    
    printf("Enter char to count:\n");
    scanf("%c", &C);
    
    //if the input char is different from all of these chars, the program will end without printing anything
    if (!(C == 's' || C == 'S' || C == 'm' || C == 'M')) {
        return 0;
    }
    
    printf("Enter the chars sequence:\n");
    scanf("%c", &input);
    
    //Enter to the loop as long as we have not reached the char '$' that marks the end of the input
    while (!(input == '$')) {
        
        //if we reach the same char we count - add 1 to the sum value
        if (input == C) {
            sum++;
        }
        
        //set input with the next char in the buffer.
        scanf("%c", &input);
    }
    
    //if the count char does not appear at all, the program will end without printing anything
    if (sum==0) {
        return 0;
    }
    
    printf("The char with ASCII code %d appeared %d times.", C, sum);
}