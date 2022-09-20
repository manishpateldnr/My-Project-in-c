#include <stdio.h>
#include <conio.h>
int rows=25;
void triangle1(void);
void triangle2(void);
void triangle3(void);
void triangle4(void);
void triangle5(void);
void triangle6(void);
void triangle7(void);
void triangle8(void);
void triangle9(void);
void triangle10(void);
void triangle11(void);
void triangle12(void);
void triangle13(void);
void triangle14(void);
void triangle15(void);
void triangle16(void);
void triangle17(void);
void triangle18(void);
void triangle19(void);
void triangle20(void);
void triangle21(void);
void triangle22(void);
void triangle23(void);
void triangle24(void);
void triangle25(void);
void triangle26(void);
void triangle27(void);
void triangle28(void);

int main(){
	
	system("cls");
	triangle1();
	sleep(2);
	system("cls");
	triangle2();
	sleep(2);
	system("cls");
    triangle3();
    sleep(2);
    system("cls");
    triangle4();
    sleep(2);
    system("cls");
	triangle5();
	sleep(2);
	system("cls");
    triangle6();
    sleep(2);
    system("cls");
    triangle7();
    sleep(2);
    system("cls");
    triangle8();
    sleep(2);
    system("cls");
	triangle9();
	sleep(2);
	system("cls");
    triangle10();
    sleep(2);
    system("cls");
    triangle11();
    sleep(2);
    system("cls");
	triangle12();
	sleep(2);
	system("cls");
    triangle13();
    sleep(2);
    system("cls");
    triangle14();
    sleep(2);
    system("cls");
	triangle15();
	sleep(2);
	system("cls");
    triangle16();
    sleep(2);
    system("cls");
    triangle17();
    sleep(2);
    system("cls");
    triangle18();
    sleep(2);
    system("cls");
	triangle19();
	sleep(2);
	system("cls");
    triangle20();
    sleep(2);
    system("cls");
    triangle21();
    sleep(2);
    system("cls");
    triangle22();
    sleep(2);
    system("cls");
	triangle23();
	sleep(2);
	system("cls");
    triangle24();
    sleep(2);
    system("cls");
    triangle25();
    sleep(2);
    system("cls");
    triangle26();
    sleep(2);
    system("cls");
    triangle27();
    sleep(2);
    system("cls");
    triangle28();
    sleep(2);
    system("cls");
    return 0;
}


void triangle1(){
	 int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);  
    printf("\n");  
    for (i = 1; i <= rows; ++i) // outer loop  
    {  
        for (j = 1; j <= i; ++j) // inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    } 
}


void triangle2(){
	int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");   
    }
}
 
void triangle3(){
	int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    
}

void triangle4(){
	 int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)  
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
     
}

void triangle5(){
	int num, i, j, m = 1; // declare local variables  
//    printf (" Enter the number to define the columns: \n");  
//    scanf ("%d", & num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "* ");  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("* ");  
        }  
        printf("\n");  
    }  
 
}

void triangle6(){
	int i, j, k;  
//    printf (" Enter a number to define the columns: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf(" ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 2; j <= i; j++)  
        {  
            printf(" ");   
        }  
        for (k = i; k <= rows; k++)  
        {  
            printf("*"); // print the Star  
        }  
        printf ("\n");   
    }  
    
}

void triangle7(){
	 int i, j, k = 0;  
  //  printf (" Enter a number to define the rows: \n");  
    //scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
 
}

void triangle8(){
	// declare the local variables  
    int i, j, k, m = 1;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows);   
    printf("\n");  
      
    for ( i = rows; i >= 1; i--)  
    {  
          
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  "); // print the space  
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        m++;  
        printf ("\n");  
    }  
    
}

void triangle9(){
	 // declare the local variables  
    int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf("  "); // print the number  
        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf(" *");  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }  

}

void triangle10(){
	// declare the local variables  
    int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("%d ", j);   
        }  
        printf ("\n");   
    }  
     
}

void triangle11(){
	 int i, j, k;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows); // take a number  
    printf("\n");  
    for ( i = 1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows; j++)  
        {  
            if( j <= i)  
            printf ("%d", j);   
            else  
            printf(" ");  
        }  
        for (j = rows; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("%d", j);  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }  
 
}

void triangle12(){
	// declare the local variables  
    int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i)   
    {  
        for (j = 1; j <= i; ++j)   
        {  
            printf ("%d ", i); // print the number  
        }  
        printf ("\n");   
    }  
     
}

void triangle13(){
	// declare the local variables  
    int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 0; i--) // define the outer loop  
    {  
        for (j = i; j > 0; j--) // define the inner loop  
        {  
            printf ("%d ", j);  
        }  
        printf ("\n");  
    }  
     
}

void triangle14(){
	int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf("  ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf(" %d", k);   
        }  
        printf ("\n");   
    }  
   
}

void triangle15(){
	 // declare the local variables  
int i, j, k;  
//printf (" Enter a number to define the rows: \n ");  
//scanf("%d", &rows);   
printf("\n");  
for (i = 1; i <= rows; i++)   
{  
        for (j = 1; j <= i; j++)   
             {  
                 printf("  ");   
           }  
        for (k = i; k <= rows; k++)  
            {  
               printf(" %d", k);   
           }  
          printf ("\n");   
 }       
}

void triangle16(){
	 // declare the local variables  
    int i, j, k = 1;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }  
    
}

void triangle17(){
	  int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);  
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)  
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf(" ");   
        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf("%d", k);  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }     
     
}

void triangle18(){
	// declare the local variables  
    int i, j, k = 0;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows); // take a number  
      
    for ( i =1; i <= rows; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  "); // print the space  
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ",i); // print the number  
        }  
        printf ("\n");  
    }  
 
}

void triangle19(){
	 // declare the local variables  
    int i, j, k, m = 1;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows); // take a number  
    printf("\n");  
    // outer loop define the total rows and i should be greater than equal to 1  
    for ( i = rows; i >= 1; i--)  
    {  
        // inner loop define j should be less than equal to m  
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");   
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%d ", i); // print the number  
        }  
        m++;  
        printf ("\n");  
    }  
 
}

void triangle20(){
	// declare the local variables  
    int i, j, k, m;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows);   
    printf("\n");  
    // outer loop define the total rows and i should be less than equal to rows  
    for ( i = 1; i <= rows; i++)  
    {  
        // inner loop define j should be less than equal to rows- i  
        for ( j = 1; j <= rows-i; j++)  
        {     
            printf (" ");   
        }  
        // use for loop where k is less than equal to i  
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k); // print the number  
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); // print the number  
        }  
        printf ("\n");  
    }  
 
}

void triangle21(){
	// declare the local variables  
    int i, j;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; ++i) // define the outer loop  
    {  
        for (j = 1; j <= i; ++j) // define the inner loop  
        {  
            printf ("%c ", 'A' + j - 1); // print the alphabets   
        }  
        printf ("\n"); // jump to next line  
    }  
    
}

void triangle22(){
	 int i, j, ch = 'A';  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = rows; i > 1; i--)   
    {  
        for (j = 1; j < i; j++)   
        {  
            printf ("%c ", ch);   
        }  
        ch++;  
        printf ("\n");  
    }  
 
}

void triangle23(){
	int i, j, k, ch='A';  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = i; j < rows; j++)   
        {  
            printf("  ");   
        }  
        for (k = 1; k <= i; k++)  
        {  
            printf(" %c", ch);  
        }  
        ch++;  
        printf ("\n");   
    }  

}

void triangle24(){
	int i, j, k;  
//printf (" Enter a number to define the rows: \n ");  
//scanf("%d", &rows);   
printf("\n");  
for (i = 1; i <= rows; i++)   
{  
        for (j = 1; j <= i; j++)   
             {  
                 printf("  ");   
           }  
        for (k = i; k <= rows; k++)  
            {  
               printf(" %c", 'A' + k);  
           }  
          printf ("\n");   
 }     
}

void triangle25(){
	 int i, j, k, ch = 'A';  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", ch);   
        }  
        ch++;  
        printf ("\n");  
    }  
 
}

void triangle26(){
	// declare the local variables  
    int i, j, k, m = 1;  
//    printf (" Enter a number to define the rows: \n");  
//    scanf ("%d", &rows);   
    printf("\n");  
      
    for ( i = rows; i >= 1; i--)  
    {  
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", 'A' + k - 1);   
        }  
        m++;  
        printf ("\n");  
    }  

}


void triangle27(){
	 // declare the local variables  
    int i, j, k;  
//    printf (" Enter a number to define the rows: \n ");  
//    scanf("%d", &rows);   
    int space = rows-1, num=1;  
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= space; j++)   
        {  
            printf(" ");          
                        }  
        for ( k= 1; k <= num; k++)  
        {  
            printf("%c", 'A' + k - 1);  
        }  
        if(space > i)  
        {  
            space = space -1;  
            num = num+2;  
        }  
        if(space <i)  
        {  
            space = space + 1;  
            num = num -2;  
        }  
        printf("\n");  
    }     

}

void triangle28(){
	 int num, i, j, m = 1; // declare local variables  
//    printf (" Enter the number to define the columns: \n");  
//    scanf ("%d", & num);  
    for (i = 1; i <= num; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( "%c", 'A' + j -1);  
        }  
        printf("\n");  
    }  
    for (i = num-1; i >= 1; i--)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf ("%c", 'A' + j -1);  
        }  
        printf("\n");  
    }  
 
}

 
