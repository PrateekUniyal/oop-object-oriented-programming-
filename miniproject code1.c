#include<stdio.h>
#include<string.h>
void display(int amt1,char name1[30],char name2[30])
{

    printf("*******your bill is of: rupees %d THANK YOU FOR USING THE BILLING MANAGEMENT SYSTEM***********\n",amt1);
printf("******thank you %s %s for using biling system****** \n",name1,name2);
}
int calculation()
{
    //printf("please enter the price of all the items");
    printf("\nplease enter the number of items\n");
    int n=0,sum=0,price=0,discount=0;
    scanf("%d",&n);
    printf("enter price one by one to calculate total\n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&price);
        if(price<=100)
        {
          discount=0;
          sum=sum+(price-discount);
        }
        else if(price>=100&&price<=1000)
        {
            discount=5;
            price=(discount*price)/100;
            sum=sum+price;
        }
    else
    {

        discount=10;
        price=(discount*price)/100;
        sum=sum+price;
    }
    }
    return sum;
    }
void details()
{
   // printf("Please enter the item name\n");
    char itemname[50];//[100][30];
    int i,n;
    printf("\nEnter the quantity:");
    scanf("%d",&n);
    printf("Please enter the name of items\n");
for(i=0;i<n;i++)
    scanf("%s",&itemname);printf("*******the list of items is********\n");
for(i=0;i<n;i++)
    printf("\n %s",&itemname);
}
int main()
{
int amt1=0,amt2=0;
char name1[30],name2[30];
printf("Please enter the first name of the customer:\n");
scanf("%s",&name1);
printf("Please enter the last name of customer:\n");
scanf("%s",&name2);
//printf("the entered name is:%s %s",name1,name2);
//getche();
int a,grandtotal;
printf("Do you want to view the discount chart \n");
printf("enter 1 for yes and 0 for no\n");
scanf("%d",&a);
switch(a){
case(1):
    printf("for price above 100 and below 1000 discount is of 5 percent\n");
    printf("for price above 1000 discount is of 10 percent\n");
    break;
case( 0):
    break;
default:
    printf("wrong choice\n");
    break;
}
printf("please enter your choice\nenter 1 to input item name details\nenter 2 to calculate the total after dicount\nenter 4 for choice\n");
scanf("%d",&a);
switch(a){
case(1):
    printf("\nplease enter the details for your purchases\n");
details();
case(2):
   grandtotal=0;
   grandtotal=calculation();
    case(3):
    display(grandtotal,name1[30],name2[30]);
break;
printf("please enter your choice,select 1 to continue with calculation and select 0 to exit\n");
scanf("%d",&a);
switch(a){
case(1):
    grandtotal=calculation();
    break;
case(0):
    printf("******thank you %s %s for using biling system****** \n",name1,name2);
  break;
}
   return 0;
}
}

