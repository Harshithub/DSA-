//You are supposed to generate a result table which consists of student id,student name , marks of three subject and total marks.
//Write a program which takes input for ten student and display result table . Also display student information separately who got
//the highest total.
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int id;
    char name[30];
    int marks[3];
    int total;
};
void display(struct student st,int);
int  calculate(struct student st[],int n);
void highest(struct student st[],int);
int main()
{int i,n,a;
   printf("enter the no. of student");
   scanf("%d",&n);
   struct student st[n];
   for(i=0;i<n;i++)
   {
       printf("\n enter student id  ");
       scanf("%d",&st[i].id);
       printf("\n enter name  ");
       scanf("%s",&st[i].name);
       printf("\n enter marks of 3 subject\n  ");
       for(int j=0;j<3;j++)
       {
       scanf(" %d",&st[i].marks[j]);
       }
   }
   a=calculate(st,n);
   printf("\n                Record Table                     \n");
   printf("Student id\tName\t\t");
   for(int j=0;j<3;j++)
      {
          printf("\t subject%d",j+1);
      }
      printf("\t Total");
   for(i=0;i<n;i++)
   {   display(st[i],a);
         printf("\n");
   }
   highest(st,a);


    return 0;
}
int calculate(struct student st[],int n)
{
    int i,j,c,max;
    for(i=0;i<n;i++)
    {st[i].total=0;
        for(j=0;j<3;j++)
        {
            st[i].total+=st[i].marks[j];
        }
    }
    max=st[0].total;
    for(i=0;i<n;i++)
    {
        if(max<st[i].total)
        {
            max=st[i].total;
            c=i;
        }
    }
    return(c);
}
void display(struct student st,int a)
 {

    printf("\n  %d\t\t%s\t\t",st.id,st.name);
    for(int j=0;j<3;j++)
    {
        printf("\t%-15d",st.marks[j]);
    }
    printf("\t%d",st.total);
}
void highest(struct student st[],int a)
{
   printf("\n\nHighest marks obtained by\n");
   printf("Student id\tName\t\t");
   for(int j=0;j<3;j++)
      {
          printf("\t subject%d",j+1);
      }
      printf("\t Total");
      printf("\n  %d\t\t%s\t\t",st[a].id,st[a].name);
    for(int j=0;j<3;j++)
    {
        printf("\t%-15d",st[a].marks[j]);
    }
    printf("\t%d",st[a].total);

}

