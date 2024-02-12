// #include <stdio.h>

// int main() {
//     int T[20];
//     int N;
//     do
//     {
//         printf("La taille du vecteur : ");
//         scanf("%i", &N);
//     } while (N<0 || N>20);
    
//     for (int i = 0; i <= N-1; i++) {
//         printf("value %i: ", i+1);
//         scanf("%i", &T[i]);
//     }


//     for (int i =0; i<N-1;  i++) {
//         for (int j = i+1; j<=N-1; j++)
//         {
//             if (T[i]==T[j]) {
//                 for (int k = j; k< N-1; k++)
//                 {
//                     T[k]=T[k+1];
//                 }
//                 N--;
//             }
//         } 
//     }
//     printf("{");
//     for (int i = 0; i <N; i++)
//      {
//         printf("%d",T[i]);
//         if (i==N-1)
//         {
//             break;
//         }
//         printf(",");
//     }
//     printf("}");
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int T[50][50];
//     int i,j,x,n,m;
    
//     printf("Enter N rows : ");
//     scanf("%i", &n);

//     printf("Enter M rows : ");
//     scanf("%i", &m);

//     for (i=0; i<n; i++) {
//         for ( j = 0; j < m; j++)
//         {
//             printf("enter value : ");
//             scanf("%i", &T[i][j]);
//         }
        
//     }
//     for (i=0; i<n; i++) {
//         for ( j = 0; j < m; j++)
//         {
//             printf("%i ", T[i][j]);
//         }
//         printf("\n");
//     }
//     for ( i = 0; i < n; i++)
//     {
//         x = T[i][0];
//         for ( j = 0; j < m-1; j++)
//         {
//             T[i][j] = T[i][j+1];
//         }
//         T[i][m-1] = x;
//     }
//     printf("----------\n");
//     for (i=0; i<n; i++) {
//         for ( j = 0; j < m; j++)
//         {
//             printf("%i ", T[i][j]);
//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     int T[50];

//     printf("La taille du vecteur : ");
//     scanf("%i", &n);

//     for (int i =0; i <n; i++) {
//         printf("value : ");
//         scanf("%i", &T[i]);
//     }

//     for (int i=0; i <n ; i++) {
//         printf("%i ", T[i]);
//     }
//     printf("\n");
//     printf("--------\n");
    
//     for (int i =0; i<n; i++) {
//         if (T[i] % 2 == 0) {
//             printf("%i ", T[i]);
//         }
//     }
//     printf("\n");
//     printf("--------\n");
//     srand(time(NULL));
//     for (int i =0; i <n; i++) {
//         T[i] = rand() % 10 + 1;
//     }

//     for (int i=0; i <n ; i++) {
//         printf("%i ", T[i]);
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int i,j,n,x,h;
//     int T[50];

//     printf("La taille du vecteur : ");
//     scanf("%i", &n);

//     for (int i =0; i <n; i++) {
//         printf("value : ");
//         scanf("%i", &T[i]);
//     }
//     for (int i=0; i <n ; i++) {
//         printf("%i ", T[i]);
//     }
//     printf("\n");
    // i = 0;
    // j = n-1;
    // h = (n-1) / 2;
    // while (j>=h && i<=h) {
    //     x = T[i];
    //     T[i] = T[j];
    //     T[j] = x;
    //     i++;
    //     j--;
    //     if (i==j) {
    //         break;
    //     }
    // }
//     for (int i=0; i <n ; i++) {
//         printf("%i ", T[i]);
//     }
//     return 0;
//     }

// #include <stdio.h>

// int main() {
//     int n,number,count;
//     int T[50];
//     count = 0;
//     printf("La taille du vecteur : ");
//     scanf("%i", &n);
//     printf("your number : ");
//     scanf("%i", &number);
//     for (int i =0; i <n; i++) {
//         printf("value : ");
//         scanf("%i", &T[i]);
//     }
//     for (int i = 0; i < n ; i++)
//     {
//         if (T[i] == number)
//         {
//             count++;
//         } 
//     }
//     printf("occ of %i is %i", number, count);
// }
// #include <stdio.h>

// int main() {
//     // Declare variables
//     int n;
//     int sum;
//     sum = 0;
//     // Prompt user for input
//     printf("Enter a positive integer: ");
    
//     // Read the integer from the user
//     scanf("%i", &n);
//     // Calculate the sum of natural numbers
//     for (int i = 0; i <= n; i++)
//     {
//         sum += i;
//     }
    
//     // Print the result
//     printf("%i", sum);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int yy,ii,i,y,x,n;
//     printf("enter : ");
//     scanf("%i", &n);
//     x = n;
//     i = 1;
//     while (i<=n)
//     {
//         y = 0;
//         while (y<(n-1-i)/2)
//         {
//             printf(" ");
//             y = y+1;
//         }
//         yy = 0;
//         while (yy<i)
//         {
//             printf("*");
//             yy=yy+1;
//         }
//         ii = 0;
//         while (ii<(n-1-i)/2)
//         {
//             printf(" ");
//             ii = ii + 1;
//         }
//         printf("\n");
//         i = i + 2;
        
//     }
    
// }

