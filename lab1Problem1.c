// Name: Steven Gobran  
// lab1Problem1.c 

#include <stdio.h> 

int main(){ 

    //Iinitialization 
    char startLetter, endLetter; 
    double temp, result;

    //Inputs 
    printf("Enter starting temerature scale (F/C/K): "); 
    scanf(" %c", &startLetter);  

    printf("Enter target temerature scale (F/C/K): "); 
    scanf(" %c", &endLetter);

    printf("Enter temerature value: "); 
    scanf(" %lf", &temp); 


    //Conversion logic:  
        //Using 5.0/9.0 ensures floating point division rather than integer division
        // We use 5.0/9.0 instead of 5/9 because 5/9 does integer division in C, 
        // which would round down to 0 and give the wrong result. 
        // Using 5.0/9.0 ensures floating point division, so the conversion is correct

    if ((startLetter == 'F' || startLetter == 'f') && (endLetter == 'C' || endLetter =='c')){ 

        result = ((temp - 32) * (5.0/9.0));  
        
    } 

    else if ((startLetter == 'F' || startLetter == 'f') && (endLetter == 'K' || endLetter == 'K')){
        
        result = ((temp - 32) * 5.0/9.0 + 273.15);
    } 

    else if ((startLetter == 'C' || startLetter == 'c') && (endLetter == 'F' || endLetter == 'f')){ 

        result = ((temp * 9.0/5.0) + 32);
        
    } 

    else if ((startLetter == 'C' || startLetter == 'c') && (endLetter == 'K' || endLetter == 'k')){
      
        result = (temp + 273.15);      
    } 

    else if ((startLetter == 'K' || startLetter == 'k') && (endLetter == 'F' || endLetter == 'f')){ 
        
        result = (((temp - 273.15) * 9.0/5.0) + 32);
    } 

    else if ((startLetter == 'K' || startLetter == 'k') && (endLetter == 'C' || endLetter == 'c')){  
        
        result = (temp - 273.15);
        
    }     
    
    else{

        printf("Error in input.\n"); 
        return 1; 
    }

    //Output 
    printf("%.2f°%c is equivalent to %.2f°%c.\n",
        temp, startLetter, result, endLetter);


    return 0; 
}