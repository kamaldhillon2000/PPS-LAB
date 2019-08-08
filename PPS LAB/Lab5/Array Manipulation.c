#include<stdio.h>

 

void main()

{

     int i, a[12], b[12], k;

      printf("Enter a sample input data: \n");

      scanf_s("%d", &k);

     for(i = 0;k != 8; i = i + 1)

      {

            a[i] = k;

            scanf_s("%d", &b[i]);

            scanf_s("%d", &k);

            printf("a[%d] = %d\n", i, a[i]);

      printf(" b[%d] = %d\n", i, b[i]);

      }

      printf("\n");

