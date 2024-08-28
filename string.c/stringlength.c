  // #include<stdio.h>
  //  int main(){
  //    int i;
  //   char a[50];
  //     printf("Enter you name:");
  //    gets(a);
  //    i=0;
  //    while(a[i]!='\0'){
  //      i++;
  //    }
  //    printf("%d",i);
  //    return 0;
  // }
  #include <stdio.h>
  #include<string.h>
int main() {
   char a[50];
   printf("Enter you name:");
   scanf("%s",a);
    int size=0;
   int  i=0;
   while(a[i]!='\0'){
       size++;
     i++;
   }
   printf("%d",size);
return 0;
}