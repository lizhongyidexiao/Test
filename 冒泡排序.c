#include<stdio.h>
void bubble_sort(int arry[],int sz)
{
	//确定冒泡排序的趟数 
	int i=0;
	for(i=0;i<=sz-1;i++)//9 8 7 6 5 3
	
	{
		int flag=1;//假设已经有序，标志位置1 
		//每一趟冒泡排序 
	    int j=0;
	     for(j=0;j<sz-1-i;j++)
	
	    {
	     if( arry[j]>arry[j+1])
	     {
	      int temp=arry[j];
	      arry[j]=arry[j+1];
	      arry[j+1]=temp;
		  flag=0;//如果进入此函数说明本趟数据肯定无序，标志位置0 
	    }
     } 
     
     if(1==flag)
     {break;
	 }
	  }
}  

int main()

{

int arry[]={9,8,7,6,5,3,2,2,1};
int i=0;
int sz=sizeof(arry)/sizeof(arry[0]);
bubble_sort(arry,sz);
for(i=0;i<sz;i++)
{
printf("%d",arry[i]);
}
return 0;
}



