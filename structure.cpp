#include<stdio.h>

struct employees{
int id;
char name[10];
int age;
};
struct company{
struct employees enew[10];
}c;



int add(int i)
{
int datanumber;
printf("Enter the number of data to be added\n");
scanf("%d", &datanumber);
for(int k=0;k<datanumber;k++)
{
printf("Enter data of the Employee\n");
printf("Enter the id\n");
scanf("%d",&c.enew[i].id);
printf("Enter the name\n");
scanf("%s",c.enew[i].name);
printf("Enter the age\n");
scanf("%d",&c.enew[i].age);
i++;
}
return i;
}

int del( int j)
{
int delel;
printf("Enter the Id you want to delete ");
scanf("%d",&delel);
for (int i=0;i<j;i++)
{
if(c.enew[i].id==delel)
{
c.enew[i].id=c.enew[j-1].id;
int a=0;
while(c.enew[j-1].name[a]!='\0')
{
c.enew[i].name[a]=c.enew[j-1].name[a];
a++;
}
c.enew[i].name[a]='\0';
c.enew[i].age=c.enew[j-1].age;
}
}
j--;
return j;
}
void search(int j)
{
    int searchid,flag1=0;
    printf("Enter the ID of the employee you want to search:");
    scanf("%d",&searchid);
    for (int i=0;i<j;i++)
    {
        if(c.enew[i].id==searchid)
        {
            printf("%d\n",c.enew[i].id);
            printf("%s\n",c.enew[i].name);
            printf("%d\n",c.enew[i].age);
            flag1=1;
            break;
        }
        if(flag1==0)
        {
            printf("The data is not present\n");
        }
    }
}
void modify(int j)
{
    int modifyid;
    int flag=0;
    printf("Enter the ID you want to modify:");
    scanf("%d",&modifyid);
    for (int i=0;i<j;i++)
    {

    if(c.enew[i].id==modifyid)
    {
    printf("Enter the modified id\n");
    scanf("%d",&c.enew[i].id);
    printf("Enter the modified name\n");
    scanf("%s",c.enew[i].name);
    printf("Enter the modified age\n");
    scanf("%d",&c.enew[i].age);
    flag=1;
    break;
    }
    }
    if(flag==0)
    {
        printf("NO ID found\n");
    }


}
void display(int no)
{
printf("Checkpoint 2\n");
for (int i=0;i<no;i++)
{
printf("The data if the employee no %d is:\n",i+1);
printf("%d\n",c.enew[i].id);
printf("%s\n",c.enew[i].name);
printf("%d\n",c.enew[i].age);
}
}

int main()
{
int i=0,choice;
printf("Enter Your Choice\n");
scanf("%d",&choice);
switch (choice)
{

case 1:
	i=add(i);
	break;

case 2:
	i=del(i);
	break;

case 3:
	modify(i);
	break;
case 4:
	search(i);
	break;

case 5:
	display(i);
	break;


}
}























