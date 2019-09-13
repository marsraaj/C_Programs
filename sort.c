
#include<stdio.h>
#include<stdlib.h>

void bubble(int *,int);
void selection(int *,int);
void insertion(int *,int);


int main()
{
  int count=0;          
  int choice=0,ch=0;    
  int check=0;          
  int i=0;             

  
  printf("Enter the size of the list: ");
  scanf("%d",&count);
  int list[count];

  for(i=0;i<count;i++)
  { 
    printf("Enter element %d: ",i+1);
    scanf("%d",&list[i]);
  }

 printf("\nNumbers entered: ");
 for(i=0;i<count;i++)
   printf("%d,",list[i]);
 printf("\n");

	do{
		printf("Menu:\n\n");
		printf("1.Bubble sort\n2.Selection Sort\n3.Inserton sort\n4.Exit\nYour choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			bubble(list,count);
			break;

			case 2:
			selection(list,count);
			break;
  
			case 3:
			insertion(list,count);
			break;

			case 4: return 0;

			default: printf("Invalid option\nRetry: ");
				break;
		}
		printf("Do you want to continue(press 1 to continue any other number to exit): ");
		scanf("%d",&ch);
	} while(ch==1);


  return 0;
}

void bubble(int *list,int n)
{
 int i,j;
 int c;


 for(i=0;i<n;i++)
   {
     for (j=0;j<n-i-1;j++)
      {
        if (list[j] > list[j+1])
          {
            c=list[j];
            list[j]=list[j+1];
            list[j+1]=c;
          }
      }
   }

  printf("\nSorted list in ascending order:\n");
  for ( i = 0 ; i < n ; i++ )
    printf("%d,",list[i]);
  printf("\n");
}

void selection(int *list,int n)
{

 int i;
 int j,min;
 int k;


 for(j=0;j<n-1;j++)
  {

     min=list[j];
     k=j;
     for(i=j+1;i<n;i++)
      {

       if(list[i]<min)
       {
         min=list[i];
         k=i;
       }

     }

	list[k]=list[j];
	list[j]=min;

 }

	printf("Sorted list is:");

	for(i=0;i<n;i++)
	{
		printf("%d,",list[i]);
	}
	printf("\n");
}

void insertion(int *list,int n)
{
	int temp;
	int i=0,j=0;

	for(i=1;i<n;i++)
	{
		temp=list[i];
		j=i-1;
		 while((j>=0)&&(list[j]>temp))
		  {
			list[j+1]=list[j];
			j--;
		  }
	list[j+1]=temp;
	}

  printf("Sorted list is: ");
   for(i=0;i<n;i++)
     {
     	printf("%d,",list[i]);
  	 }

	printf("\n");
}