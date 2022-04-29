#include<stdio.h>
#include<string.h>
#include<conio.h>

struct record {

    char name[100];
    char phone[15];
    char email[100];
};


int main() {

    FILE *output_file;
    output_file = fopen("Contacts.txt", "a+");


    int i, n,r;



    printf("********Address Book By Mahin Bin Hasan**********\n\n");

    printf("How many contact do you want to insert?\n");
    scanf("%d",&r);
    gets(stdin);
    struct record a[r];
    for(i = 0;i<r; i++){
        n = i +1;

        printf("Person %d",n);

        printf("\nEnter name: ");
        scanf("%[^\n]", a[i].name);

        printf("\nEnter Phone: ");
        scanf("%s", a[i].phone);

        printf("\nEnter Email: ");
        scanf("%s", a[i].email);
        gets(stdin);
    }


        printf("\nInformations are submitted.....\n");//Consol Display

    for (i= 0;i<r;i++){

        fprintf(output_file,"name: %s, Phone: %s, Email: %s\n", a[i].name, a[i].phone, a[i].email);//Internal operation

    }
    getch();
   return 0;
}
