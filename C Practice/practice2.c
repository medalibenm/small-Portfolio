// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>

// int main() {
//     // Declare variables
//     int number, originalNumber, remainder, n = 0, result = 0,new;

//     // Prompt user for input
//     printf("Enter a positive integer: ");
    
//     // Read the number from the user
//     scanf("%i", &number);
//     // Save the original number in another variable
//     originalNumber = number;
//     // Count the number of digits in the number
//     while (number != 0)
//     {
//         n++;
//         number = number / 10 ;
//     }
//     // Calculate the result
//     number = originalNumber;
//     while (number != 0)
//     {
//         new=1;
//         remainder = number % 10 ;
//         for (int i = 0; i < n; i++)
//         {
//             new = new * remainder;
//         } 
//         result = result + new;
//         number = number / 10 ;
//     }
    
//     // Check if the number is an Armstrong number
//     if (originalNumber==result)
//     {
//         printf("your number is very armstrong ;)");
//     } else {
//         printf("non hh");
//     }
    
//     // Print the result

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 100; i++) {
//         if (i % 3 == 0 && i % 5 == 0) {
//             printf("FizzBuzz ");
//         } else if (i % 3 == 0) {
//             printf("Fizz ");
//         } else if (i % 5 == 0) {
//             printf("Buzz ");
//         } else {
//             printf("%i ", i);
//         }
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     // Declare variables
//     char ch;

//     // Prompt user for input
//     printf("Enter a character: ");
    
//     // Read the character from the user
//     scanf("%c", &ch);
//     // Check if the character is an alphabet
//     if (isalpha(ch) == 0) {
//         printf("its not an alphabet");
//     } else  {
//         printf("yes alphabet");
//     }

//     return 0;
// }
// #include <stdio.h>

// #include <stdio.h>

// int main() {
//     // Declare variables
//     int number;

//     // Prompt user for input
//     printf("Enter an integer: ");
    
//     // Read the number from the user
//     scanf("%i", &number);

//     // Calculate the greatest factor
//     if (number % 2 == 0) {
//         printf("The greatest factor is %i\n", number / 2);
//     } else {
//         for (int i = number / 2; i > 0; i--) {
//             if (number % i == 0) {
//                 printf("The greatest factor is %i\n", i);
//                 break;
//             }
//         }
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     double salary, bonus;
//     int yearsOfWork;

//     // Prompt user for input
//     printf("Enter the employee's salary: ");
//     // Read the salary from the user
//     scanf("%lf", &salary);
//     printf("Enter the number of years the employee has worked: ");
//     // Read the years of work from the user
//     scanf("%i", &yearsOfWork);
//     // Calculate the bonus based on the years of service
//     if (yearsOfWork<5)
//     {
//         bonus =  (5*salary)/100;
//     } else if (yearsOfWork>=5 && yearsOfWork<10)
//     {
//         bonus =  (10*salary)/100;
//     } else if (yearsOfWork>=10)
//     {
//         bonus =  (15*salary)/100;
//     } else {
//         printf("enter a proper year");
//     }
    
    
    
//     // Display the bonus
//     printf("bonus is %lf and new salary is %lf", bonus, salary+bonus);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int number;

//     // Prompt user for input
//     printf("Enter a positive integer: ");
//     // Read the number from the user
//     scanf("%i", &number);
//     // Display the factors of the entered number
//     for (int i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//         {
//             printf("%i ", i);
//         }
        
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     double base, result = 1;
//     int exponent;

//     // Prompt user for input
//     printf("Enter the base number: ");
//     // Read the base from the user
//     scanf("%lf", &base);
//     printf("Enter the exponent: ");
//     // Read the exponent from the user
//     scanf("%i", &exponent);
//     // Calculate and display the result of base raised to the power of exponent
//     for (int i = 0; i < exponent; i++)
//     {
//         result = result * base;
//     }
//     printf("%lf", result);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int num;
//     int greatest;
//     // Prompt user for input
//     printf("Enter a positive integer: ");
//     // Read the number from the user
//     scanf("%i", &num);
//     // Find and print the greatest multiple of 7 less than or equal to the entered number
//     for (int i = 1; i <= num/7; i++)
//     {
//         greatest = 1;
//         if  (7*i<=num) {
//             greatest = 7*i;
//         }
//     }
//     if (greatest ==1)
//     {
//         printf("dont have greatest");
//     } else {
//         printf("greatest is %i", greatest);
//     }
    
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int angle1, angle2, angle3;

//     // Prompt user for input
//     printf("Enter the first angle: ");
//     // Read the first angle from the user
//     scanf("%i", &angle1);
//     printf("Enter the second angle: ");
//     // Read the second angle from the user
//     scanf("%i", &angle2);
//     printf("Enter the third angle: ");
//     // Read the third angle from the user
//     scanf("%i", &angle3);
//     // Check if the angles form a valid triangle
//     if (angle1+angle2+angle3==180)
//     {
//         if (angle1==90 || angle2==90 || angle3==90) {
//             printf("right triangle");
//         } else if (angle1<90 && angle2<90 && angle3<90)
//         {
//             printf("acute triangle");
//         } else {
//             printf("obtuse triangle");
//         }
        
//     } else {
//         printf("not a real triangle");
//     }
    
//     // Determine and print the type of triangle (acute, right, or obtuse)

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int original,number,r,sum=0;

//     // Prompt user for input
//     printf("Enter a positive integer: ");
//     // Read the number from the user
//     scanf("%i", &number);
//     original = number;
//     // Calculate the sum of its digits
//     while (number != 0) {
//         r = number % 10;
//         sum = sum + r;
//         number = number / 10;
//     }
//     // Determine and print whether the entered number is a Harshad number or not
//     if (original % sum ==0)
//     {
//         printf("yes Harshad number !!");
//     } else {
//         printf("NO not harshad number !");
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int number;
//     int sum = 0;
//     // Prompt user for input
//     printf("Enter a positive integer: ");
//     // Read the number from the user
//     scanf("%i", &number);
//     // Calculate the sum of its proper divisors
//     for (int i = 1; i <= number/2; i++)
//     {
//         if (number % i == 0)
//         {
//             sum += i;
//         }
//     }
    
//     // Determine and print whether the entered number is an abundant number or not
//     if (number < sum)
//     {
//         printf("abundant number");
//     } else {
//         printf("not  abundant");
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int add(int a, int b);
// int soustraction(int a, int b);
// int multiply(int a, int b);
// int divide(int a, int b);
// void display(int result);



// int main() {
//     int a,b,result;
//     char operator;


//     printf("your first number : ");
//     scanf("%i", &a);

//     printf("your second number : ");
//     scanf("%i", &b);

//     printf("operator + - / x : ");
//     scanf(" %c", &operator);

//     switch (operator)
//     {
//     case '+':
//         result = add(a, b);
//         break;
//     case '-':
//         result = soustraction(a, b);
//         break;
//     case 'x':
//         result = multiply(a, b);
//         break;
//     case '/':
//         if (b != 0)
//         {
//             result = divide(a, b);
//         } else {
//             printf("math error hbb");
//             return 1;
//         }
//         break;
//     default:
//         printf("wrong operator hbb");
//         return 1;
//         break;
//     }
//     display(result);
//     return 0;



// }

// int add(int a, int b) {
//     return a + b;
// }
// int soustraction(int a, int b) {
//     return a - b;
// }
// int multiply(int a, int b) {
//     return a * b;
// }
// int divide(int a, int b) {
//     return a / b;
// }
// void display(int result) {
//     printf("The result is %i", result);
// }









