#include <stdio.h>
#include <string.h>
#include <stdlib.h>




struct User {
    char username[30];
    char password[30];
    char email [60];
};

struct User users[200];
int Usernumbers = 0;

void registeration() {
    if (Usernumbers == 200) {
        printf("can not take more users.\n");
        return;
    }

    struct User nUser;

    printf("Enter username: ");
    scanf("%s", nUser.username);

     printf("Enter your email: ");
    scanf("%s", nUser.email);

    printf("Enter password: ");
    scanf("%s", nUser.password);

    users[Usernumbers] = nUser;
    Usernumbers++;

    printf("Registration successful.\n");
}

int loginstep() {
    char username[30];
    char password[30];
    char email [60];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < Usernumbers; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(email, users[i].email) == 0 && strcmp(password, users[i].password) == 0) {
            printf("Login successful.\n");
            return 1;
        }
    }

    printf("Invalid login.\n");
    return 0;
}

int main() {
    int option;

    do {
        printf("1. to Register\n");
        printf("2. to Login\n");
        printf("3. to Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                registeration();
                break;
            case 2:
                if (loginstep()) {

                }
                break;
            case 3:
                printf("thanks...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (option != 3);

    return 0;
}
