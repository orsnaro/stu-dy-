#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>

 int x=4,y=4 ; //global
 float mat_add( float A[x][y], float B[x][y],float C[x][y]);

 int main()
 {
  float Z[4][4],W[4][4],K[4][4];

  mat_add( Z , W, K) ;

  return 0;}

  float mat_add(float A[4][4],float B[4][4],float C[4][4])
{

x=4,y=4;

  int row_num,colm_num,chk_row,chk_colm;

do
{
        fflush(stdout)
        
        printf("PLEASE! choose Array 'A' Rank (maximum 4x4)==>\n\n");
        sleep(1);
        printf(" \a 'A' rows=  ");
        chk_row =scanf("%d", &row_num);


       printf("  'A' columns=  ");
       chk_colm =scanf("%d", &colm_num);

        if( chk_row!=1||chk_colm!=1||row_num>4 || row_num<0|| colm_num>4 || colm_num<0) //restrictions for user input
{
        printf("\n \a Failure!!---->  Your Array Rank is not accepted !!.");
        sleep(1);
        printf("\n \n -----PLEASE!----- re-input your values ==>\n\n");
}

        sleep(2);
}while(  chk_row!=1||chk_colm!=1|| row_num>4 || row_num<0||  colm_num>4 || colm_num<0); //restrictions for user input

x= row_num,y= colm_num;

printf("\n\n\t \a Success!!---> Array 'A' set to rank = %ix%i i.e. (A[%i][%i]). \n\n",row_num,colm_num,row_num,colm_num);


printf("PLEASE! fill Array 'A' --(values row by row)-- ==>\n\n ------START INPUT-----=");

scanf("%f",A);
return 0;}
