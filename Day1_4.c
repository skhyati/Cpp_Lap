#include<stdio.h> 
int main()
{
    //Variable must be declared before its use in the program.
 
    //Simple C data types are: int, double, char,float 
     int num = 10; //variable declaration + initialization 
     char ch ='A'; //variable declaration + initialization 
    float fvar = 12.3; //variable declaration + initialization 
    double dvar = 10.3;  //variable declaration + initialization 
    
    //printf is used to print string / data on terminal 
    //format specifier 
    //int => %d 
    // \n => escape sequence
    //printf("%d\n",num); //10 
    
    //char => %c 
    //printf("%c\n",ch);  // A 

    //float => %f
    //printf("%.2f\n",fvar); //12.3  

    //double => %lf  
    //printf("%.2lf",dvar); //10.3 
    
    
    printf("int = %d \n char = %c \n double = %.2lf \n float = %.2f ",num,ch,dvar,fvar); 
    //      int = 10 char = A  double = 10.33 float = 12.3   
    return 0;
}
/*
  Program => Instructions + data 
    2 , 3 ,11 
    11.33 
    'A'
    "sunbeam" 
*/
