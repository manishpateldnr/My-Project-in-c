#include <stdio.h> 
#include <conio.h>
#include <math.h>
 
void calculater1(void);

int main(){

	int clear=1;
	char opt[3];  
    int n1, n2;   
    float res;
	do{ 
	    printf ("\nChoose an operator(+, -, *, /) to perform the operation in C Calculator \n ");  
	    scanf ("%s", &opt); // take an operator  
	    if (opt[0] == '/' )  
	    {  
	        printf (" You have selected: Division");  
	    }  
	    else if (opt[0] == '*')  
	    {  
	        printf (" You have selected: Multiplication");  
	     }  
	       
	    else if (opt[0] == '-')  
	    {  
	        printf (" You have selected: Subtraction");  
	     }  
	        else if (opt[0] == '+')  
	    {  
	        printf (" You have selected: Addition");  
	     }     
	    printf (" \n Enter the first number: ");  
	    scanf("%d", &n1); // take fist number  
	    printf (" Enter the second number: ");  
	    scanf ("%d", &n2); // take second number  
	      
	    switch(opt[0])  
	    {  
	        case '+':  
	            res = n1 + n2; // add two numbers  
	            printf (" Addition of %d and %d is: %.1f", n1, n2, res);  
	            break;  
	          
	        case '-':  
	            res = n1 - n2; // subtract two numbers  
	            printf (" Subtraction of %d and %d is: %.1f", n1, n2, res);  
	            break;  
	              
	        case '*':  
	            res = n1 * n2; // multiply two numbers  
	            printf (" Multiplication of %d and %d is: %.1f", n1, n2, res);  
	            break;            
	          
	        case '/':  
	            if (n2 == 0)   // if n2 == 0, take another number  
	            {  
	                printf (" \n Divisor cannot be zero. Please enter another value ");  
	                scanf ("%d", &n2);        
	                }  
	            res = n1 / n2; // divide two numbers  
	            printf (" Division of %d and %d is: %.1f", n1, n2, res);  
	            break;  
	        default:  /* use default to print default message if any condition is not satisfied */  
	            printf (" Something is wrong!! Please check the options ");               
	    }
		}while(clear);
return 0;
}
