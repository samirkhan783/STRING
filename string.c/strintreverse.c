#include<stdio.h>
#include<string.h>
int main(){
int l;
char a[50],k;
printf("String reverse:");
gets(a);
l=strlen(a);
for(int i=0;i<l/2;i++){
    k=a[i];
    a[i]=a[l-1-i];
    a[l-1-i]=k;
}
 puts(a);
return 0;
}