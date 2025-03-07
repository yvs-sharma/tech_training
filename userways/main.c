#include <stdio.h>
#include <string.h>

struct BankUser {
    char name[100];
    int accno;
    float balance;
};
void createUser(struct BankUser *user) {
    printf("Enter Name: ");
    fgets(user->name, sizeof(user->name), stdin);
    user->name[strcspn(user->name, "\n")] = 0;

    printf("Enter Account no: ");
    scanf("%d", &user->accno);


    printf("Enter Account Balance: ");
    scanf("%f", &user->balance);

    printf("\n Account created successfully!\n");
    printf("acc Details:\n");
    printf("Name: %s\n", user->name);
    printf("Account no: %d\n", user->accno);
    printf("Balance: %.2f\n", user->balance);
}

int main() {
    struct BankUser newUser;

    createUser(&newUser);

    return 0;
}

