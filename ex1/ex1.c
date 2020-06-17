//The development was done on cloud9

#include <stdio.h>

    double weights[10]; //double array for the weights values
    double input = 0; //ingredients input
    double final_weights = 0; //weights of the final product
    int sum = 0; //how many ingredients
    int i = 0; //index
    int pure = 0; //pure of the final product

int main() {
    
    printf("Welcome, please enter the weights of each ingredient:\n");
    
    //Enter to the loop as long as no more than 10 ingredients values have been inserted
    while (sum <= 10) {
        
        //input test - if the input is not double value print message and the program will end
        if (scanf("%lf",&input) != 1) {
        printf("invalid input - the weights of each ingredient should be a numbers");
        return 0;
        }
        
        //if the input is a negative number, this is the last value and we get out from the loop
        if (input<0) {
            break;
            
        //if the input is a positive number, add him to the ingredients array
        } else {
            weights[i] = input;
        }
          
        sum++;  
        i++;
    }
    
    //if the input include more than 10 different ingredients then the program will end
     if (sum==11) {
         printf("Too many ingredients.");
         return 0;
     }
            
    //if the input include less than 3 different ingredients then the program will end
    if(sum<3) {
        printf("Not enough ingredients.");
        return 0;
    }
    
    //final weights calculation - the average weight of the components separately
    for (i=0; i<sum; i++) {
        final_weights += weights[i]/sum;
    }

    //pure calculation - each component adds 10% to the purity of the product.
    pure = sum*10;
    
    printf("The final product weighs %.3lf pounds and is %d percent pure.", final_weights, pure);
}
