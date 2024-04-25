#include<stdio.h> 
int main()
{
    //variable declaration 
    int num;
    char ch; 
    float fvar; 
    double dvar; 
    //size => datatypes 
    //sizeof( ) => operator 
    //sizeof => integer 
    printf("%d ",sizeof(num)); // 4 bytes 
    printf("%d ",sizeof(ch)); // 1 byte 
    printf("%d ",sizeof(fvar)); // 4 bytes 
    printf("%d ",sizeof(dvar));// 8 bytes 
    
    return 0;
}
