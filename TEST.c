#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>
 int x,y ;

    float mat_add(float A[x][y],float B[x][y],float C[x][y]);

int main()
{

     mat_add( A[x][y], B[x][y], C[x][y]);


return(0);}





 float mat_add(float A[x][y],float B[x][y],float C[x][y]);
{
     A[x][y] = B[x][y] = C[x][y] = x= y= 0;

  int row_num,colm_num,chk_row,chk_colm;

do
{
        fflush(stdout);

        printf("PLEASE! choose Array 'A' Rank (maximum 4x4)==>\n\n");
        sleep(1);
        printf(" \a 'A' rows=  ");
        chk_row =scanf("%i", &row_num);


       printf("  'A' columns=  ");
       chk_colm =scanf("%i", &colm_num);

        if( chk_row!=1||chk_colm!=1||row_num>4 || row_num<0|| colm_num>4 || colm_num<0) //restrictions for user input
{
        printf("\n \a Failure!!---->  Your Array Rank is not accepted !!.");
        sleep(1);
        printf("\n \n -----PLEASE!----- re-input your values ==>\n\n");
}

        sleep(2);
}while(  chk_row!=1||chk_colm!=1|| row_num>4 || row_num<0||  colm_num>4 || colm_num<0); //restrictions for user input

printf("\n\n\t \a Success!!---> Array 'A' set to rank = %ix%i i.e. (A[%i][%i]). \n\n",row_num,colm_num,row_num,colm_num);
x=row_num;y=colm_num;
printf("PLEASE! fill Array 'A' --(values row by row)-- ==>\n\n ------START INPUT-----=");

scanf("%f",A);
}
