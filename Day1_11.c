#include<stdio.h> 
int main()
{
    short int x; 
    //signed short int x; 
    printf("%d ",sizeof(x)); // 2 bytes 

    long int y; 
    //signed long int y; 
    printf("%d ",sizeof(x)); // 4 / 8 bytes 

    unsigned short int z; 
    printf("%d ",sizeof(z)); // 2 bytes 

    unsigned long int k; 
    printf("%d ",sizeof(z)); // 4 / 8 bytes 
    return 0;
}
/*
    int x; //signd int x (  by default signed ) 
    short int z; // signed short int z; 
    long int k;  // signed long int k;  

    unsigned int x; 
    unsigned short int z;
    unsigned long int k;  
*/
