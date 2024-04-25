#include<stdio.h> 
int main()
{
    /*
        type modifiers 
        Signed
        Unsigned
        Short
        Long

    */
    signed int num = 2147483647; // by default it is signed  
    // int num = 65; 
    /*
         num => 4 bytes => 32 bits 

         ( 2 to the power 32 - 1 ) - 1
         ( 2 to the power 31 )  - 1 
          2147483647 => max range 
         -2147483648 => min range 
    */
    printf("%d ",num); 

    unsigned int num2=4294967295; 
    //unsigned => only +ve  
    //unsigned => %u 
    printf("%u ",num2); 
    return 0;
}
