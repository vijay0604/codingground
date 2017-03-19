#include <stdio.h>
#include <string.h>
int main()
{
      char s1[30],s2[30];
      char s3[20],ch[20]="hello vimal";
      int length,i;
    printf("Enter the value of string 1 :");
    scanf("%s",s1);
    printf("Enter the value of string 2:");
    scanf("%s",s2);
   
   strcat( s1, s2);
   printf("Concatenation of string (s1 and s2)  %s\n", s1 );
   strcpy(s3,s2);
      printf("Copy of string ( s2 to s3)  %s\n", s3);
       length=strlen( s1);
        printf("length of string ( s1)   %d \n", length);
     
     /*if(strchr(s2,ch))
     {
         for(i=strlen(s2)-1;i>0;i--)
         {
             printf(" %c  \n ",s2[i]);
         }
      printf("character on a string ( s2)  %s\n", s2);
      
     }*/
     /*if(! strcmp(s1,s2))
     {
         printf("two strtings are not equal\n");
   }
   else
        printf("two strtings are  equal\n");*/
    //strstr(s1,s2);
    printf("output char :%s \n ",strchr(ch,'v'));
    printf("output  string:%s \n ",strstr(ch,"vim"));
    return 0;
}


