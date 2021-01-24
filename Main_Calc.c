

 /***********************************************************************************************
 *                       d(Programmer): omar rashad salem 'ALSAQF'                               * 
 *                                Date:13/1/2021                                                * 
 *    info:                                                                                    *
 *          this is  this is my first project written in c language <3  i tried not           *
  *                  to make the easiest\efficient calculator code!!                         *
   *       but tried hard -(not too hard XD- to practice all what i learned together        * 
    *                          at once "until array chapter".                              * 
     *                                                                                    * 
      *                     All Rights Reserved 2020/2021 ©                              * 
       *                                                                                * 
        *                                                                              * 
         *                                                                            * 
          *                                                                          * 
           *                                                                        * 
            ************************************************************************/ 
//code starts here ==>
#include <stdio.h>
#include <math.h>
#include <error.h>
#include <string.h>

/*add multiple opretions
option*/
/* will try different  types of declaring funcitons */

#include "subtraction_header.h" //i know am just missing man XD.  save ure bad words plz T_T 
#include "quadratic_eqn.h"
#include "matrix_operations.h"

#define addtion(x,y) (x+y)
#define multiplication(x,y) (x*y)
float division(float x ,float y);



int main()
{
    char operation_type;
char y_nans;
float x,y,z,a,b,c;  /* u can choose diffrent variables than the ones assosiated with funcs btw 'z' i for matc if we needed */ 
float  RES=0 ;
printf("\n // HI! this program  is a simple calculator ^_^. \n");
printf( " \t-----------------------------------------------\n "
 );


Selection1 :
operation_type=0;
y_nans=0;

printf("\n FIRST THING IS FIRST!  assign your  operands 'x' 'y' VALUES : \n\n");

printf("\n PLEASE! choose the first number ^_^ ==> ");
fflush(stdout);

scanf("%f",&x) ;


printf("\n PLEASE! choose the second number ^_^ ==> ");
scanf("%f",&y) ;
fflush(stdout);
fflush(stdin);

//condition to remain x an y as numbers other wise it confuses the code and mixes every thing up XD


Selection2 :
printf("\n \n //\n press \"a\" if you want to Add . \n");
printf("press \"s\" if you want to Subtract . \n");
printf("press \"m\" if you want to Multiply . \n");
printf("press \"d\" if you want to Divide . \n");
printf("press \"q\" if you want to solve quadratic equations . \n");
printf("press \"p\" to INCLUDE last result in a new operation\n\n");
printf("PLEASE! choose  ==> ");

scanf("\t %c",&operation_type);




Selection3 :
 switch(operation_type)
{
    
	case'a':
    {
        RES=addtion( x, y);
        printf("\n\t\t\t result %2.2f \t+ %2.2f = %2.2f\n",x,y,addtion( x, y));
        printf( " \t-----------------------------------------------\n ");
    }
  break;
  
	case's':
    {
RES=subtraction( x, y);
printf("\v\t\t\t result %2.2f \t- %2.2f = %2.2f\n",x,y,subtraction( x, y));
printf( " \t-----------------------------------------------\n ");
 
    }
  break;
  
	case'm':
    { 
RES=multiplication( x, y);
printf("\v\t\t\tresult  %2.2f \t* %2.2f = %2.2f\n",x,y,multiplication( x, y)); 
printf( " \t-----------------------------------------------\n ");
 
    }
  break;
  
	case'd':
    {
division( x, y); RES=division( x, y);
printf( " \t-----------------------------------------------\n ");

    }
  break;
  
  case 'q':
  {
qudratic_eqn ( a ,  b ,  c);
printf( " \t-----------------------------------------------\n ");
 
  }
    
 
	break;
    
   case 'p': 
   {
printf("your last result was= %f", RES);
x=RES;

printf("\n PLEASE! choose the second number ^_^ ==> ");
scanf("\t %f" ,&y ) ;
goto Selection2 ;
   }
	break;
    
default : {
   puts("\a #WOW---------------------> YOU didn't select mode/operation type !! \
   please re-select! <------------------------------");
 
goto Selection1 ;
}
}
 
puts("  //\n continue calculations? \n press 'n' for new operation \n press 'u'\
 to use old result \n press 'f' to stop \n\n \t ----Your choice ==>");
fflush(stdout);
scanf(" %c",&y_nans);
 switch(y_nans)
 {
     case 'n': goto Selection1  ;
     break;
     
     case 'u':
     {
operation_type='p';
 goto Selection3;
 break;
     }
     
     default: ;
 }

     

return(EOF);

}


// --------------------functions body-------------------- 


float division(float x,float y)
{
  float dres;

  
  //we can type string esier with a array so we can return it 
  if(y==0)

  printf("\n \n  \a ERROR 0_0 can't divide by \"zero\" please rerun the calculator for a new operation.\n");
  else 
{
  dres=x/y;
   printf("\t\t\t Division answer=%.2f",dres);
}


 
 
 // yaaaay many lines (yes sure i used them all :@) see ya <3. 
 //والله الموفق لما فيه خير لنا > 
return(dres);}
 

        