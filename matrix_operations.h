//this header belongs to ors simple calc :) 

float mat_add();
float mat_sub();
float mat_sort();
float mat_sort();

float matrix_operations(float A[],float B[],float C[])
{
    char  main_mnu_slct;
    float average _value;
    
    //MAIN menu
        printf("\n \n ---------------------------------------------------------------------- . \n");
        printf("\n \n //\n ---------------->\t WELCOME! THIS is MATRIX SECTION \t<--------------. \n \t\t //Please Select your option: \v\v \n");
        printf("\n \n //\n press \"a\" if you want to Add . \n");
        printf("press \"b\" if you want to Subtract . \n");
        printf("press \"c\" if you want to Multiply . \n");
        printf("press \"d\" if you want to find the average value of an Array  . \n");
        printf("press \"e\" if you want to sort your Matrix\n\n");
        printf("press \"f\" to INCLUDE last result in a new operation\n\n");
        printf("PLEASE! choose  ==> ");
        scanf(\n%c,&main_mnu_slct);
        
        
        
switch(main_mnu_slct)
{
        case'a': 
{
        
}
break;
        case'b': 
{
        
}
break;
        case'c': 
{
        
}
break;
        case'd': 
{
        
}
break;
        case'e': 
{
        
}
break;
        case'f': 
{
        
}   
break;
        default: ;
{
        
}
return();}

}


// --------------------functions body-------------------- 

float mat_add(float A[],float B[],float C[])
{
     int row_num,colm_num;
    do
    {
        printf("PLEASE! choose Array 'A' Rank (maximum 4x4)==>\n\n");
        printf("  'A' rows=  ");
        scanf("%i", &row_num);

            

       printf("  'A' columns=  ");
        scanf("%i", &colm_num);
        
        printf("Array 'A' set to rank = %ix%i i.e. (A[%i][%i]) \n\n)",row_num,colm_num,row_num,colm_num);
       
    }
    while(( scanf("%i", &row_num)==1 || row_num<=4||row_num>=0)||( scanf("%i", &colm_num)==1 || row_num<=4||row_num>=0)); //restrictions for user input 


}
        



              
}