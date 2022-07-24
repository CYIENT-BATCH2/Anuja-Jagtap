/*1]take the sorted data.
2]take search value.
3]middle value is is equal to addition of low index and high index and divide by 2.
4]after getting the mid value check whether the input(search value) is equal to the mid value.
5]if mid value of index is less than input it prints the mid value + 1 otherwise mid value - 1.
6]if cond is false Repeatedly check from the second point until the value is found.*/

#include<stdio.h>
int binarySearch(int array[], int x, int low, int high)
{
// Repeat until the pointers low and high meet each other
//biary search using recursion.
while(low<=high) 
{
 int mid=low+high/2;
 if(array[mid]==x)
 return mid;
if(array[mid]<x)
low=mid+1;
 else
 high=mid-1;
}
return 0;
}
int main()
{
	int x;
 //binary search in a sorted array.
 int array[]={2,5,8,12,16,23,38,56,72,91};
 int n=sizeof(array)/sizeof(array[0]);
 //enter any value to binary search.
 scanf("%d",&x);
 int result=binarySearch(array,x,0,n-1);//function calling.
 if(result==0)
 printf("Not found");
 else
 printf("Element is found at index %d", result);
 return 0;
}
