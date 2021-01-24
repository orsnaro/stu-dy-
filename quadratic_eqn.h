/* THIS is DONE by: عمر رشاد محمود سالم sec5 /no.138
 , under prof.tamer medhat supervision <3 ^_^ */


float qudratic_eqn (float a , float b , float c)
{
char i; 
float  m, k , x_1,x_2,x_3,x_4 ;
int  delta ; /* delta is the  discremenant. It tells us whether roots are: real,real repeated or complex */ 


printf("lets try our beta.vr quadratic equation solver app ^_^\n\n" "please choose  coefficients    values \n ");
printf( "\t \"a\" value ? ==> \t" );
scanf("%f", &a );
printf( "\t \"b\" value ? ==>\t" );
scanf("%f", &b );
printf( "\t \"c\" value ? ==>\t" );
scanf("%f", &c );

/*TEST AREA!! */

/* END of TEST AREA */

delta = pow(b,2) - 4*a*c ;
x_1= (-b + sqrt(delta))/ (2*a);
x_2= (-b - sqrt(delta))/ (2*a);
/* we will tweak the formula a little bit so we can print complex soltuions ==> (k+mi)*/
 
k= -b/(2*a);
m= (sqrt(-delta)) / (2*a);
 /* note: for complex:
      x_1= k + m*i;
      x_2= k - m*i; */

if(delta==0)
printf ("\n\n here is your *real* repeated  root : \n X ==> %f ",x_1);
else if (delta>=0)
printf ("\n\n here is your *real*  roots : \n X ==> %f X ==> %f ", x_1, x_2 );
else
printf ("\n\n no real solutions ! here is your complex roots: \n X ==> %f + %fi \n X ==> %f - %fi  ",k,m,k,m);

printf("\n\n\n\t\t* PLEASE  'Rerun' the CODE again for a new operation ! *");

}

/* 2nd Task coming soon... <3 */