//The development was done on cloud9

#include <stdio.h>
#include <string.h>

int uppercase (char input_string[], char result[]); //function statement 

int main() {
    
    //example for "uppercase" function
    char input_string[] = "HeLLo7#"; //the input string
    char result[7] = {0}; //the result will be set in this string
    uppercase(input_string, result); //call the function
    
    //if there are no big letters print a message
    if (result[0] == 0) {
        printf("There are no big letters");
        return 0; }
        
    //else print the resukt string
    puts(result); //print the function result by "puts" function
}

//this function receive string and result string 
//and set the result (string that containing only the uppercase of the input string) in the result string
int uppercase (char input_string[], char result[]) {
    
    int l = 0; //result index
    int i = 0; //input string index

    //go into the loop as long as you have not reached '\0' character that marks the end of the string
    while (input_string[i] != '\0') {
        
        //check whether this is a big letter using the the ASCII table values
        if (input_string[i]>64 && input_string[i]<91) {
            result[l] = input_string[i]; //if this is a big letter add it to the result string
            l++;
        } 
    i++;
    }
}