# include<stdio.h>
// variable
// variable is the name of a memory location which stores some data.
/*rules to write variable 
 a. variable are case sensitive its means
 ex - int A = 2; is different variable and 
      int a = 3; is different variable

 b. 1st character is alphabet or _     
 ex - int _age = 22;
      int age  = 22;

 c. no comma/no blank space
 d. no other symbol other than _
 ex int final_prince = 13; is right but,
    int final price  = 13; and 
    int final,price = 13 is wrong */
// variable meanse that can change so also variable meanse that can change(update)    
int main(){
   int age = 22; 
//    updated variable
       age = 23; 
    printf("age is %d",age);
    return 0;
}