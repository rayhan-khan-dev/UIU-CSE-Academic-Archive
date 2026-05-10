#include<stdio.h>

int main()
{
    char str1[]= "Hello";
    char str2[]= "Hello";


    int len1 = (sizeof(str1)/sizeof(str2[0]))-1;
    int len2 =strlen(str2);

    printf("len of the string is %d\n: ",len1);
    printf("len of the stringis %d\n: ",len2);
    if(len1!=len2){
        printf("Not match");
        return;
    }

      int flag=0;
     for(int i=0; i<len1; i++)
    {
        if(str1[i]!=str2[i])

        flag=1;
        break;
    }

    if(flag==0){printf("Matched");}
        else{printf("Not matched");}
}
