
#include<stdio.h>
    int func(){
       /*A static variable possesses the property of preserving its actual value 
       even after it is out of its scope. Thus, the static variables are able to 
       preserve their previous value according to their previous scope, and one doesn't
       need to initialize them again in the case of a new scope.*/ 
    static int a;  // yaha a me 0 store hoga
    a++;
    return a;
    }

int main(){
int d;   //jab variable ko initialise nhi karte then static variable me 0 value store hota hai
func(); // now d =1
func(); // now d=2
int result = func(); //now d=3

printf("%d",result);


return 0;
}