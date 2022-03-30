//Write a program to maintain the library record for 100 books with book name, author'name,and edition,year of publishing and price
//0f the book.

#include <stdio.h>
#include <stdlib.h>
struct record
{
    char name[100];
    char author_name[100];
    int edition;
    int year;
    double price;
};
void read(struct record rd[],int);
void display(struct record rd[],int);
int main()
{int n;
   printf("enter the no. of books");
   scanf("%d",&n);
   struct record rd[n];
   read(rd,n);
   printf("\nS.No\tBook Name\tAuthor name\t\tEdition\t YearOf publishing\tPrice\n");
   display(rd,n);
    return 0;
}
void read(struct record rd[],int n)
{
    printf("\n Enter the book details");
    for(int i=0;i<n;i++)
    {
        printf("\n Book %d",i+1);
        printf("\n Book Name ");
        scanf("%s",&rd[i].name);
        printf("\n Author's name ");
        scanf("%s",&rd[i].author_name);
        printf("\n Edition ");
        scanf("%d",&rd[i].edition);
        printf("\n Year Of Publishing ");
        scanf("%d",&rd[i].year);
        printf("\n Price of Book ");
        scanf("%d",&rd[i].price);
    }
}
void display(struct record rd[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d\t%s\t\t%-1s\t\t%-1dth\t\t%d\t\t%d\n",i+1,rd[i].name,rd[i].author_name,rd[i].edition,rd[i].year,rd[i].price);
    }
}
