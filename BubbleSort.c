/*Author : Yomna Ragab*/
#include "std_types.h"
#include "BubbleSort.h"


void BubbleSort(u16 *Arr_Ptr, u16 Arr_Len)
{
  u16 i =0, j=0, swap=0;
  u16 temp;
  for (i=0; i<Arr_Len; i++)
  {
    for (j=Arr_Len-1; j>i; j--)
    {
      if(Arr_Ptr[j]<Arr_Ptr[j-1])
      {
        temp=Arr_Ptr[j-1];
        Arr_Ptr[j-1]=Arr_Ptr[j];
        Arr_Ptr[j]=temp;
        swap++;
      }
    }
    if (swap==0)  break;
    else swap=0;
  }
}
/******************************TEST******************************************/
#include "stdio.h"
void main(void)
{
  u16 i=0;
  u16 arr[10]={30,10,20,50,2,5,33,23,73,13};
  BubbleSort(arr,10);
  for (i=0; i<10; i++)
  {
    printf("%d\n",arr[i]);
  }
}
