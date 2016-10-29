#include<stdio.h>
main(){
int n,j=1;
scanf("%d",&n);
while (n-j>0)
n=n-j++;
if (j%2==0)
printf("%d/%d",n,j-n+1);
else printf("%d/%d",j-n+1,n);
}
