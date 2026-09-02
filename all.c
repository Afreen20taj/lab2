#include<stdio.h>
int main()
{
    int a[6]={10,20,30,40,50};
    int val=40;
    //traversal
    for(int i=0;i<6;i++)
    {
        printf(" %d",a[i]);
    }
//linear search 
    for(int i=0;i<6;i++)
    {
        if(a[i]==val)
        {
            printf("\nvalue %d found at index %d\n",a[i],i);
        }
    }

    //max 
    int max=a[0];
    for (int i=0;i<6;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
         
    }
    printf("\n Max element is %d \n",max);
    
    //minimum
    int min=a[0];
    for(int i=0;i<6;i++)
    {
        if(a[i]==min)
        {
            min=a[i];
        }
    }
    printf("\n minimum element is %d\n",min);
    
    //insertion at aplace
    int valinsert=78;
    int pos=3;
    
    for(int i=5;i>=pos;i--)
    {
        a[i+1]=a[i];
        
    }
    a[pos]=valinsert;
    
    
    printf("\n after insertion:\n");
    for(int i=0;i<6;i++) //array after insertion
    {
        printf(" %d",a[i]);
    }
    //deletion
    int posdelete=2;
    
    for(int i=posdelete;i<=6;i++)
    {
        a[i]=a[i+1];
    }
    printf("\n array after deletion:\n");
    for(int i=0;i<6;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}