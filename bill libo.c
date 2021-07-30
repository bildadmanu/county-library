
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
/******************
bildad manu
community lab project
23/6/2021
********************/

// adding user:
//name:
//id
//contact
//is staff

struct user {
    char name[100];
    int id;
    char tel[13];
    int is_stuff;
};


// function prototype

void execute_action(int action);
void close();
int menu();

int main()
{
    int action;
    while(1){
            action=menu();
            execute_action(action);
            printf("press any key to continue")
            getch ();
            system("c1s");
    }

    printf("\tCounty Library Management System!\n");
    printf("Welcome bildad\n");

    action = menu();
    execute_action(action);

    return 0;

}
void execute_action(int action){

switch(action){

case 1:

    printf("adding user...");

    break;

case 2:
    printf("adding book.....");

    break;

case 3:
    close();
    printf("*****Good Bye******");
    break;

default:
    printf("unknown function.\n");

}



}
void close() {
printf("Thank you for using the system\n")
print("Bye");
sleep(5000);
exit(0);
}

int menu (){

    //Navigation menu
    int action;
    do {
    printf("1. Add user\n");

    printf("2. Add book\n");
    printf("3. Exit\n");
    printf("select action(1-3): ");
    scanf("%d",&action);

    //validate input
    if (action < 1 || action > 3){
        printf("invalid action.Try again\n");
        sleep(2000);
        system( "c1s");
    }

    }while(action < 1 || > 3);

}
void add_user(){
    struct user u;
    FILE *fp;
    if ((fp = fopen("user","ab"))==NULL) {
         printf("cannot open file.\n");
         exit(1);
    }

    printf("Name: ");
    getchar();
    gets(u.name);
    printf("id number: ")
    scanf("%d",&u.id);
    printf("phone number: ");
    scanf("%s",u.tel);
    print("User type (1 for staff,0 for ordinary user:");
    scanf("%d",&u.is_staff);
    fwrite(&u, sizeof(struct user),1,fp);







