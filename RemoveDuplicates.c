#include <stdio.h>
#include<malloc.h>
void * removeArrayDuplicates(int *Arr, int len)
{
	
	int Reference[10] = { 0,0, 0, 0, 0, 0, 0, 0, 0, 0 }, count = 0,index,value=0;
	if (Arr == NULL || len < 0)
		return NULL;
	for (index = 0; index < len; index++)
	{
		if (Reference[Arr[index]] == 0)
		{
			count++;
			Reference[Arr[index]] = 1;
		}
	}
	if (count != len)
	{
		for (index = 0; index < 10; index++)
		{
			if (Reference[index] == 1)
			{
				Arr[value++] = index;
			}
			if (value == count)
			{
				break;
			}
		}
		Arr = (int*)realloc(Arr, count*sizeof(int));
		for(index=0;index<count;index++)
		{
			printf("%d",Arr[index]);
		}
	}
}
void  main()
{
	int size,*Input,i;
	scanf("%d",&size);
	Input=(int*)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&Input[i]);
	}
	removeArrayDuplicates(Input,size);
}
