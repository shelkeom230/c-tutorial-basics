#include <stdio.h>
#include <string.h>

void newPrint(char *char1)
{
    printf("The value is %s\n", char1);
}

int sum(int a, int b)
{
    return a + b;
}
float average(float a, float b)
{
    return (float)(a + b) / 2;
}

struct books
{
    char name[50];
    char author[50];
    int price;
} book;

void printStruct(struct books bk)
{
    printf("book name is %s\n", bk.name);
    printf("author name is %s\n", bk.author);
    printf("book price is %s\n", bk.price);
}

int main(int argc, char const *argv[])
{
    // newPrint("hello world");
    // printf("%d\n",sum(10,11));
    // printf("%f\n",average(100,11));

    // int glo=78;
    // printf("%d\n",glo);

    // arrays
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("%d\n",arr[5]);

    // for (int i = 0; i < 9; i++)
    // {
    //     printf("enter the value of index at %d \n",i);
    //     scanf("%d\n",&arr[i]);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("the value of index is %d is  %d \n",i,arr[i]);
    // }

    // pointers
    // int a=98;
    // printf("%d\n",a);
    // int *ptr=NULL; //null pointers
    // if(!ptr){
    //     printf("pointer is not null\n");
    // }
    // ptr=&a;
    // *ptr=988;
    // printf("%d\n",a);

    // strings -char array, last char null
    // char name[3]={'m','y','\0'};
    // char str1[65],str2[98],str3[32];
    // strcpy(str1,"omkar");
    // strcpy(str2,"devesh");
    // printf("%s\n",str1);
    // strcat(str1,str2);
    // printf("%s\n",str1);
    // printf("%d\n",strcmp(str1,str2));

    // structures
    // struct books b1, b2;
    // strcpy(b1.name, "c progrmming");
    // strcpy(b1.author, "denis ritchie");
    // b1.price = 98;
    // printStruct(b1);
    return 0;
}
