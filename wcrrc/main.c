#include <stdio.h>
#define Max_users 3
struct user {
    char name[50];
    int id;
    float balance;
};

int main()
{
    struct user users[Max_users];
    for(int i=0; i<Max_users; i++)
    {
        printf("\nEnter the Name of user %d: ", i+1);
        scanf("%s",&users[i].name);
        printf("Enter the ID of user %d: ", i+1);
        scanf("%d",&users[i].id);
         printf("Enter the Balance of user %d: ", i+1);
        scanf("%f",&users[i].balance);
    }

    int find;
    printf("\nEnter ID to find the Name and Balance of user ");
    scanf("%d",&find);
    for(int i=0;i<Max_users;i++)
    {
        if(find == users[i].id)
          printf("Name of user is: %s \nBalance is: %f \n\n" ,users[i].name, users[i].balance);
    }



}tv

