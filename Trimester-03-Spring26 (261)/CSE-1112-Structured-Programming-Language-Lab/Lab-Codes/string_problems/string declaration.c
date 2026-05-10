#include<stdio.h>
int main()
{

    int arr[]= {1,2,3,4,5,6};
    char str[]= {'r','a','y','h','a','n'};
    int len1 = sizeof(arr)/sizeof(arr[2]);
    int len2 = sizeof(str)/sizeof(str[2]);
    printf("len of the array is %d\n: ",len1);
    printf("len of the array is %d\n: ",len2);
    for(int i=0; i<len1; i++)
    {
        printf(" %d",arr[i]);
    }
     len2=0;
    for(int i=0; str[i]!='\0';i++){
        len2++;
        printf(" %c",str[i]);
    }


}

