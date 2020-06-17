//The development was done on cloud9

#include <stdio.h>
#include <math.h>

int average_and_standard_deviation (int arr[], int size, double results[]); //function statement 

int main() {
    
    //example for "average_and_standard_deviation" function
    int arr[] = {84, 81, 80, 79, 76};
    double results[] = {0.0, 0.0};
    int size =5;
    
    average_and_standard_deviation(arr, size, results);
    
    //print the function results
    printf("average = %lf\n", results[0]);
    printf("standard deviation = %lf", results[1]);
}

//this function receive an array of integers, the array size, and a 2-cell array for function results,
//calculates the average number (index 0 in the results array) 
//and their standard deviation (index 1 in the results array).
int average_and_standard_deviation (int arr[], int size, double results[]) {
    
    int sum = 0; //sum of the array numbers
    double average = 0; //average of the array numbers
    double standard_deviation = 0; //standard deviation of the array numbers
    
    //calculates the sum of the array elements
    for (int i=0; i<size; i++) {
        sum+=arr[i]; //add the current number to the sum
    }
    
    average = (double) sum/size; //calculates the numbers average and converts it to double
    
    //calculates the standard deviation of the array numbers
    for (int i=0; i<size; i++) {
        standard_deviation+= pow(arr[i]-average, 2); //i from 0 to the array size - (Xi-average)^2
    }
    
    standard_deviation = sqrt(standard_deviation/size); //square root of the result divided by the amount of numbers
    
    //insert the average and the standard deviation into the results array
    results[0] = average;
    results[1] = standard_deviation;
}