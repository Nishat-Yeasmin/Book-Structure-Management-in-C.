#include<stdio.h>
struct book
{
    char title[100];
    char author[100];
    int price;

};
int main()
{
    struct book book1,book2,book3;

    printf("for book1: \n");
    printf("title: ");
    fflush(stdin);
    fgets(book1.title,sizeof(book1.title),stdin);
    printf("\nauthor: ");
    fflush(stdin);
    fgets(book1.author,sizeof(book1.author),stdin);
    printf("\nprice: ");
    scanf("%d",&book1.price);

    printf("\nfor book2: \n");
    printf("title: ");
    fflush(stdin);
    fgets(book2.title,sizeof(book2.title),stdin);
    printf("\nauthor: ");
    fflush(stdin);
    fgets(book2.author,sizeof(book2.author),stdin);
    printf("\nprice: ");
    scanf("%d",&book2.price);

    printf("for book3: \n");
    printf("title: ");
    fflush(stdin);
    fgets(book3.title,sizeof(book3.title),stdin);
    printf("\nauthor: ");
    fflush(stdin);
    fgets(book3.author,sizeof(book3.author),stdin);
    printf("\nprice: ");
    scanf("%d",&book3.price);

    struct book mostexpensive;
    if(book1.price>=book2.price && book1.price>=book3.price)
      mostexpensive=book1;
    else if(book2.price>=book1.price && book2.price>=book3.price)
        mostexpensive=book2;
    else
     mostexpensive=book3;

     struct book lowerprice;
     if(book1.price<=book2.price && book1.price<=book3.price)
        lowerprice=book1;
     else if(book2.price<=book1.price && book2.price<=book3.price)
        lowerprice=book2;
     else
        lowerprice=book3;

     printf("\nmost expensive: \n");
     printf("title: %s\n",mostexpensive.title);
     printf("author: %s\n",mostexpensive.author);
     printf("price: %d\n",mostexpensive.price);

     printf("\nlowerprice:\n");
     printf("title: %s\n",lowerprice.title);
     printf("author: %s\n",lowerprice.author);
     printf("price: %d\n",lowerprice.price);



}

