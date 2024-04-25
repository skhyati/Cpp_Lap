#include<stdio.h> 
int main()
{
    //printf("%c",'B' - 1); // A 
    //      66 - 1 => 65 
    
    // \n , \r , \t => char constant 

    //printf("%d ",'\n');//10 
    //printf("%d ",'\r');//13   

    printf("%d",'\n' - '\r'); 
    //       10 -  13 => -3  
    return 0;
}
