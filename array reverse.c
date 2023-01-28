#include<stdio.h>
int main()
{
    int array1[]={1,2,3,4,5,6,7,8,9,10};
    int i,j,temp,array2[10];
    for(i=0,j=9;i<10;i++){
      array2[i]=array1[j];
      j--;
    }
    for(i=0;i<10;i++){
        printf("%d ",array2[i]);
    }


    return 0;
}
