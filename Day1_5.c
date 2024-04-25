#include<stdio.h> 
//compilations starts from line number 1 
//execution starts from main 
int main()
{
    int x = 1; 
    // variable declaration + init
    x = 12; //assignment 
    printf("%d\n",x); // 12   
    x = 13; 
    printf("%d\n",x); // 13   
    //Assignment can be done multiple number of times 
    //Init can be done only once  
    
    return 0;
}
/*
    //Init can be done only once  
    int y = 10; 
    int y = 20; // NOT OK 

    int y = 10; 
    y = -20; 
    //assignment can be done multiple number of times 
*/