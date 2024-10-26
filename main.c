/** -----------------------------------
*  C  For Beginner 
*  Author Shahrear Hossain Shawon
*  cradit: javtpoint
*  github : algoscienceacademy
* Licence : LGPL Licence
* Date :  26 Oct 2024
------------------------------------------*/

//........................./  \..................------.................../  \.................
//......................../   \..............----......................../    \.............
//..... ................./     \............---........................./      \.............
//................... ../       \..........---........................./         \.............
//................. .../         \.........------------.............../           \.............
//.................../ ---------- \............. ----................/-------------\.............
//................../              \........... ---- .............../               \.............  
//................/                 \.......------ ................/                 \.............    
//............./                     \......----................../                   \.............       
//............/                       \....---.................../                     \.............    
  






/*
  Printf
  Scanf
*/

// Program to print cube of given number

/*
#include<stdio.h>    
int main(){    
int number;    
printf("enter a number:");    
scanf("%d",&number);    
printf("cube of number is:%d ",number*number*number);    
return 0;  
}  
*/


// Program to print sum of 2 numbers

/*
#include<stdio.h>    
int main(){    
int x=0,y=0,result=0;  
  
printf("enter first number:");  
scanf("%d",&x);  
printf("enter second number:");  
scanf("%d",&y);  
  
result=x+y;  
printf("sum of 2 numbers:%d ",result);  
  
return 0;  
}    

*/

//--------------------------------------------------------------------------------

// variable

/*
variable_name: It is the identifier for the variable, i.e., 
the name you give to the variable to access its value later in the program. 
The variable name must follow specific rules,
like starting with a letter or underscore and consisting of letters, 
digits, and underscores.
*/

// Rules for defining variables
// In C, Variable names must follow a few rules to be valid. The following are the rules for naming variables in C:

// Allowed Characters:
// Variable names include letters ( uppercase and lowercase ), digits, and underscores. They must start with a letter (uppercase or lowercase) or an underscore.

// Case Sensitivity:
// C is a case-sensitive programming language. It means that uppercase and lowercase letters are considered distinct.

// For example, myVar, MyVar, and myvar are all considered different variable names.

// Keywords:
// Variable names cannot be the same as C keywords (reserved words), as they have special meanings in the language.

// For example, you cannot use int, float, char, for, while, etc., as variable names.

// Spaces and Special Characters:
// Variable names cannot contain spaces or special characters (such as !, @, #, $, %, ^, &, *, (, ), -, +, =, [, ], {, }, |, \, /, <, >,., ?;, ', or ").


// Example 

/*
int age;  
float salary;  
char _status;  
double average_score;  
int studentCount;  

*/

/*
------------- of Variables in C
-----------------There are many types of variables in c:
--------------------local variable
-----------------------global variable
-------------------------static variable (use static keyword)
----------------------------automatic variable (use auto keyword)
--------------------------------external variable (use extern keywords)
*/
//-------------------------------------------------------------------------------------------


// data types 


/*
                    |-----------------|
                    | Data Types in C |
                    |-----------------|
                             |
  -----------------------------------------------------------
     |                 |                 |            |
  Basic             Derived        Enumeration      Void


  ------------------------------------------------------------------
            Types                 | .       Datatypes
  ------------------------------------------------------------------
  | . Basic Dta Type              | int, char, float, double       |
  | . Derived Data Types          | array,pointer, structure,union |
  | . Enumeration Data Types      | enum                           | 
  | . Void Data Types             | void                           |
  ------------------------------------------------------------------
                

  ----------------------------------------------------------------------------
        Dta Types     |    Memory Size    |       Range                      |
  ----------------------------------------------------------------------------
  |   char            |  1 Byte           |  -128 to 127                     |
  |   schar           |  1 Byte           |  -128 to 127                     |
  |   uchar           |  1 Byte           |    0 to 255                      |
  |   short           |  2 Byte           |  -32768 to 32767                 |
  |   schar           |  2 Byte           |  -32768 to 32767                 |
  |   uhar            |  2 Byte           |    0 to 65,535                   |
  |   int             |  2 Byte           |  -32,768 to 32,767               |
  |   short int       |  2 Byte           |  −32,768 to 32,767               |
  |   long int        |  4 Byte           |  -2,147,483,648 to 2,147,483,647 |
  |   float           |  4 Byte           |                                  |
  |   double          |  1 Byte           |                                  |
  |   long double     |  1 Byte           |                                  |
  ----------------------------------------------------------------------------
  
*/

//----------------------------------------------------------------------------

//    Keywords

/*----------------------------------------------------------------------------
--1. auto
------2. break
-------------3. case
-------------------4. char
----------------------5. const
----------------------------6. continue
----------------------------------7. default
----------------------------------------8. do
---------------------------------------------9. double
---------------------------------------------------10. else
-----------------------------------------------------------11. enum
--------------------------------------------------------------12. extern
--------------------------------------------------------------------13. float
--------------------------------------------------------------14. for
---------------------------------------------------16. goto
------------------------------------------------17. if
------------------------------------------18. int
------------------------------------19. long
-----------------------------20. register
------------------------21. return
--------------------22. short
---------------23. signed
--------24. sizeof
----25. static
--------26. struct
---------------27. switch
---------------------28. typedef
---------------------------29. union
------------------------------------30. unsigned
-------------------------------------------------31. void
---------------------------------------------------------32. volatile
---------------------------------------------------------------------33. while
----------------------------------------------------------------------------------*/


//---------------------------
// . auto


// #include <stdio.h>  
  
// int main() {  
//     auto int count = 10;  
// printf("Count: %d\n", count);  
  
//     {  
//         auto int count = 5;  
// printf("Inner Count: %d\n", count);  
//     }  
  
// printf("Count: %d\n", count);  
  
//     return 0;  
// }

//--------------------------------

// 2. break 

// #include <stdio.h>  
  
// int main() {  
//     for (inti = 0; i< 10; i++) {  
//         if (i == 5) {  
//             break;  
//         }  
// printf("%d ", i);  
//     }  
  
//     return 0;  
// }    

//----------------------------------

// 3. case

// #include <stdio.h>  
  
// int main() {  
// int choice = 2;  
//     switch (choice) {  
//         case 1:  
// printf("You chose option 1.\n");  
//             break;  
//         case 2:  
// printf("You chose option 2.\n");  
//             break;  
//         default:  
// printf("Invalid choice.\n");  
//     }  
  
//     return 0;  
// }

//------------------------------------

// 4. char 

// #include <stdio.h>  
  
// int main() {  
//     char grade = 'A';  
// printf("Grade: %c\n", grade);  
  
//     return 0;  
// } 

//-------------------------------------

// . 5. const

// #include <stdio.h>  
  
// int main() {  
// const int MAX_SIZE = 100;  
// printf("Max Size: %d\n", MAX_SIZE);  
  
//     return 0;  
// }

//----------------------------------------

// 6. continue 

// #include <stdio.h>  
  
// int main() {  
//     for (int i = 0; i< 10; i++) {  
//         if (i == 5) {  
//             continue;  
//         }  
// printf("%d ", i);  
//     }  
  
//     return 0;  
// }

//-----------------------------------------

// 7. default 

// #include <stdio.h>  
  
// int main() {  
// int choice = 3;  
//     switch (choice) {  
//         case 1:  
// printf("You chose option 1.\n");  
//             break;  
//         case 2:  
// printf("You chose option 2.\n");  
//             break;  
//         default:  
// printf("Invalid choice.\n");  
//     }  
  
//     return 0;  
// }  

//--------------------------------------------

// 8. do

// #include <stdio.h>  
  
// int main() {  
// int i = 0;  
//     do {  
// printf("%d ", i);  
// i++;  
//     } while (i< 5);  
  
//     return 0;  
// }

//---------------------------------------------

// . 9. double

// #include <stdio.h>  
  
// int main() {  
//     double pi = 3.14159;  
// printf("Pi: %lf\n", pi);  
  
//     return 0;  
// } 

//-----------------------------------------------

// 10. else 

// #include <stdio.h>  
  
// int main() {  
// int age = 20;  
//     if (age >= 18) {  
// printf("You are an adult.\n");  
//     } else {  
// printf("You are not an adult.\n");  
//     }  
  
//     return 0;  
// } 

//-----------------------------------------------

// 11. enum

// #include <stdio.h>  
  
// enum Days {  
//     Monday,  
//     Tuesday,  
//     Wednesday,  
//     Thursday,  
//     Friday,  
//     Saturday,  
//     Sunday  
// };  
  
// int main() {  
// enum Days today = Tuesday;  
// printf("Today is day number %d\n", today);  
  
//     return 0;  
// } 

//-----------------------------------------------

// 12. extern

// #include <stdio.h>  
  
// extern int global_variable;  
  
// int main() {  
// global_variable = 10;  
// printf("Global variable: %d\n", global_variable);  
  
//     return 0;  
// }  
  
// int global_variable;  

//----------------------------------------------

// 13 .  for

// #include <stdio.h>  
  
// int main() {  
//     for (int i = 0; i< 5; i++) {  
// printf("%d ", i);  
//     }  
// printf("\n");  
  
//     return 0;  
// }  

//----------------------------------------------

// 14. goto 

// #include <stdio.h>  
  
// int main() {  
//     for (int i = 0; i< 10; i++) {  
//         if (i == 5) {  
// goto end;  
//         }  
// printf("%d ", i);  
//     }  
  
//     end:  
// printf("Loop ended.\n");  
  
//     return 0;  
// }

//-------------------------------------------------

// 15. if

// #include <stdio.h>  
  
// int main() {  
// int x = 5;  
//     if (x > 0) {  
// printf("x is a positive number.\n");  
//     }  
  
//     return 0;  
// }  

//-------------------------------------------------

// 16. register

// #include <stdio.h>  
  
// int main() {  
//     register int reg_var = 5;  
// printf("Register Variable: %d\n", reg_var);  
  
//     return 0;  
// } 

//-------------------------------------------------

// 17. return

// #include <stdio.h>  
  
// int square(int num) {  
//     return num * num;  
// }  
  
// int main() {  
// int result = square(5);  
// printf("Square: %d\n", result);  
  
//     return 0;  
// }  

//-------------------------------------------------

// 18. sizeof

// #include <stdio.h>  
  
// int main() {  
// int size = sizeof(int);  
// printf("Size of int: %d bytes\n", size);  
  
//     return 0;  
// }

//-------------------------------------------------

// . 19. static 

// #include <stdio.h>  
  
// void increment() {  
//     static int count = 0;  
//     count++;  
// printf("Count: %d\n", count);  
// }  
  
// int main() {  
// increment();  
// increment();  
  
//     return 0;  
// } 

//-------------------------------------------------

//  20 . struct 

// #include <stdio.h>  
// #include <string.h>  
  
// struct Person {  
//     char name[20];  
// int age;  
// };  
  
// int main() {  
// struct Person student;  
// strcpy(student.name, "John");  
// student.age = 20;  
// printf("Name: %s, Age: %d\n", student.name, student.age);  
  
//     return 0;  
// }  

//--------------------------------------------------

// 21 . switch 

// #include <stdio.h>
 
// int main() {  
// int choice = 2;  
//     switch (choice) {  
//         case 1:  
// printf("You chose option 1.\n");  
//             break;  
//         case 2:  
// printf("You chose option 2.\n");  
//             break;  
//         default:  
// printf("Invalid choice.\n");  
//     }  
  
//     return 0;  
// } 

//-------------------------------------------------

// 21. typedef

// #include <stdio.h>  
  
// typedef int marks;  
  
// int main() {  
//     marks math_marks = 95;  
// printf("Math Marks: %d\n", math_marks);  
  
//     return 0;  
// } 

//--------------------------------------------------

// 22. union

// #include <stdio.h>  
  
// union Number {  
// int integer;  
//     float floating_point;  
// };  
  
// int main() {  
//     union Number num;  
// num.integer = 10;  
// printf("Integer: %d\n", num.integer);  
  
//     return 0;  
// } 

//-----------------------------------------------

// 23 . volatile 

//volatile: It is used to declare a variable that can be modified externally and should not be optimized by the compiler.

// #include <stdio.h>  
  
// int main() {  
//     volatile int sensor_reading = 0;  
  
//     // Simulating sensor reading update  
//     for (int i = 0; i< 10; i++) {  
// sensor_reading = i;  
// printf("Sensor Reading: %d\n", sensor_reading);  
//     }  
  
//     return 0;  
// }  

//---------------------------------------------

// 24. while

// #include <stdio.h>  
  
// int main() {  
// int i = 0;  
//     while (i< 5) {  
// printf("%d ", i);  
// i++;  
//     }  
// printf("\n");  
  
//     return 0;  
// }  

//------------------------------------------------------------------------------------

/*
  -------------------------------------------------------------------------------------------------------------------
                   keyword                              |                        identifier
  -------------------------------------------------------------------------------------------------------------------
  | . Keyword is a pre-defined word.                    | The identifier is a user-defined word                      |
  | . It must be written in a lowercase letter.         | It can be written in both lowercase and uppercase letters. |
  | . Its meaning is pre-defined in the c compiler.     | Its meaning is not defined in the c compiler.              | 
  | . It does not contain the underscore character.     | It can contain the underscore character.                   |
  --------------------------------------------------------------------------------------------------------------------


*/

/*------------------------------------------------------------------------------------------------------
--Arithmetic Operators
----Relational Operators
------Shift Operators
--------Logical Operators
----------Bitwise Operators
-------------Ternary or Conditional Operators
---------------Assignment Operator
-----------------Misc Operator


  --------------------------------------------------------------------------------
        Category         |    Operator                           | Associativity |
  --------------------------------------------------------------------------------
  |   Postfix            |  () [] ->. ++ - -                     | Left to right |
  |   Unary              | + - ! ~ ++ - - (type)* & sizeof       | Right to left |
  |   Muitiplicative     |  * / %                                | Left to right |
  |   Additive           |  + -                                  | Left to right |
  |   Shift              |  <<  >>                               | Left to right |
  |   Relational         |  < <= > >=                            | Left to right |
  |   Equality           |  == !=                                | Left to right |
  |   Bitwise AND        |  &                                    | Left to right |
  |   Bitwise XOR        |  ^                                    | Left to right |
  |   Bitwise OR         |  |                                    | Left to right |
  |   Logical AND        |  &&                                   | Left to right |
  |   Logical OR         |  ||                                   | Left to Right |
  |   Conditional        |  ?:                                   | Right to Left |
  |   Assignment         |  = += -= *= /= %=>>= <<= &= ^= |=     | Right to Left |
  |   Comma              |  ,                                    | Left to Right |
  --------------------------------------------------------------------------------


----------------------------------------------------------------------------------------------------------------*/

/*------------------------------------
-- Format Specifier

------ %d , %i  (int)
------ %u  (unsign int)
------ %f  (float)
------ %c  (char)
------ %lf (double)
---------------------------------------*/

/*
-- Funtion 

*/

//--------------------------------------------------------------

//Example for Function without argument and return value
//Example 1

// #include<stdio.h>  
// void printName();  
// void main ()  
// {  
//     printf("Hello ");  
//     printName();  
// }  
// void printName()  
// {  
//     printf("Javatpoint");  
// }  

//---------------------------------------------------------------
// #include<stdio.h>  
// void sum();  
// void main()  
// {  
//     printf("\nGoing to calculate the sum of two numbers:");  
//     sum();  
// }  
// void sum()  
// {  
//     int a,b;   
//     printf("\nEnter two numbers");  
//     scanf("%d %d",&a,&b);   
//     printf("The sum is %d",a+b);  
// } 

//-----------------------------------------------------------------

// #include<stdio.h>  
// int sum();  
// void main()  
// {  
//     int result;   
//     printf("\nGoing to calculate the sum of two numbers:");  
//     result = sum();  
//     printf("%d",result);  
// }  
// int sum()  
// {  
//     int a,b;   
//     printf("\nEnter two numbers");  
//     scanf("%d %d",&a,&b);  
//     return a+b;   
// }

//-----------------------------------------------------------------

// #include<stdio.h>  


// int square( )  
// {  
//     float side;  
//     printf("Enter the length of the side in meters: ");  
//     scanf("%f",&side);  
//     return side * side;  
// }  

// int main()  
// {  float area;
//     printf("Going to calculate the area of the square\n");  
//     area = square();  
//     printf("The area of the square: %f\n",area);  
//     return 0;
// }  

//---------------------------------------------------------------------

/*--------------

----- Array


------------------*/

// #include<stdio.h>  
// int main(){      
// int i=0;    
// int marks[5];//declaration of array       
// marks[0]=80;//initialization of array    
// marks[1]=60;    
// marks[2]=70;    
// marks[3]=85;    
// marks[4]=75;    
// //traversal of array    
// for(i=0;i<5;i++){      
// printf("%d \n",marks[i]);    
// }//end of for loop     
// return 0;  
// }    

//------------------------------------------

// #include<stdio.h>  
// int main(){      
// int i=0;    
// int marks[5]={20,30,40,50,60};//declaration and initialization of array    
//  //traversal of array    
// for(i=0;i<5;i++){      
// printf("%d \n",marks[i]);    
// }    
// return 0;  
// } 

//------------------------------------------------------------------------------

// #include<stdio.h>    
// int main ()    
// {    
//     int i, j,temp;     
//     int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
//     for(i = 0; i<10; i++)    
//     {    
//         for(j = i+1; j<10; j++)    
//         {    
//             if(a[j] > a[i])    
//             {    
//                 temp = a[i];    
//                 a[i] = a[j];    
//                 a[j] = temp;     
//             }     
//         }     
//     }     
//     printf("Printing Sorted Element List ...\n");    
//     for(i = 0; i<10; i++)    
//     {    
//         printf("%d\n",a[i]);    
//     } 
//     return 0;   
// }  

//----------------------------------------------------------------------------

//Two-dimensional array example in C

// #include<stdio.h>  
// int main(){      
// int i=0,j=0;    
// int arr[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}} ;    
// //traversing 2D array    
// for(i=0;i<4;i++){    
//  for(j=0;j<3;j++){    
//    printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
//  }//end of j    
// }//end of i    
// return 0;  
// }  
//-----------------------------------------------------------

//----------------------- Advanced --------------------------

// #include<stdio.h>   
// int* Bubble_Sort(int[]);  
// void main ()    
// {    
//     int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
//     int *p = Bubble_Sort(arr), i;  
//     printf("printing sorted elements ...\n");  
//     for(i=0;i<10;i++)  
//     {  
//         printf("%d\n",*(p+i));  
//     }  
// }    
// int* Bubble_Sort(int a[]) //array a[] points to arr.   
// { 
//   int i, j,temp;     
//     for(i = 0; i<10; i++)    
//     {    
//         for(j = i+1; j<10; j++)    
//         {    
//             if(a[j] < a[i])    
//             {    
//                 temp = a[i];    
//                 a[i] = a[j];    
//                 a[j] = temp;     
//             }     
//         }     
//     }     
//     return a;  
// }   

//------------------------------------------------------------

// #include<stdio.h>   
// void Bubble_Sort(int[]);  
// void main ()    
// {    
//     int arr[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};     
//     Bubble_Sort(arr);    
// }    
// void Bubble_Sort(int a[]) //array a[] points to arr.   
// {  
// int i, j,temp;     
//     for(i = 0; i<10; i++)    
//     {    
//         for(j = i+1; j<10; j++)    
//         {    
//             if(a[j] < a[i])    
//             {    
//                 temp = a[i];    
//                 a[i] = a[j];    
//                 a[j] = temp;     
//             }     
//         }     
//     }     
//     printf("Printing Sorted Element List ...\n");    
//     for(i = 0; i<10; i++)    
//     {    
//         printf("%d\n",a[i]);    
//     }  
// } 

//-----------------------------------------------------------------

