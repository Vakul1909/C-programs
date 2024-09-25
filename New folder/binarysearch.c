#include<stdio.h>
int BinarySearch(int arr[],int start, int end, int key)// for ordered list means number wise means ascending order are set
{
  int mid;
  while(start <= end)
  {
      mid = (start + end) / 2;
      if(arr[mid] == key)
       return mid;
      if(arr[mid] < key)
       start = mid + 1;
      else
       end = mid - 1;
  }
  return -1;
}
int main()
{
  int page_number[] = {10,23,45,70,90,100,111,123};
  int size=sizeof(page_number)/sizeof(page_number[0]);
  printf("page numbers are:10,23,45,70,90,100,111,123\n");
  int key;
  printf("enter page number to be searched:\n",key);
  scanf("%d",&key);
  int index=BinarySearch(page_number,0,size - 1, key);
  if(index==-1){
    printf("search not found");
  }
  else{
     printf("Search Found\n"); 
     printf("%d is at %d index",key,index);
  }
return 0;
}
