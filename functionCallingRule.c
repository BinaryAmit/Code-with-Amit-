#include<stdio.h>

// always keep the called function above the calling function.....
// otherwise we have to declared the called function above the calling function...
void argentina( ) 
{ 
 printf ( "\nI am in argentina" ) ; 
}

void brazil( ) 
{ 
 printf ( "\nI am in brazil" ) ; 
 argentina( ) ; 
} 


void italy( ) 
{ 
 printf ( "\nI am in italy" ) ; 
 brazil( ) ; 
 printf ( "\nI am back in italy" ) ; 
} 


void main( ) 
{ 
 printf ( "\nI am in main" ) ; 
 italy( ) ; 
 printf ( "\nI am finally back in main" ) ; 
} 



