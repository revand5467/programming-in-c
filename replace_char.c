#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
 char s[20]  ;
 char c , r; 
 printf("Enter the string:");
 gets(s);
 printf("Enter the character to be replaced: ");
 c = getchar();
 getchar();
 printf("Enter the replacement character: ");
 r = getchar();
 int i =0;
 for(i;s[i];i++){
     if(s[i]==c){s[i]=r;}

     
 }   
 printf("%s",s);
}