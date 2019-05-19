#include<stdio.h>
main()
{
long i;
if((scanf("%d",&i)==1) && (i<=0)){
  if(i%2==0){
    printf("Even");}
  else{
    printf("Odd");}
}
else{
printf("invalid");}
}
