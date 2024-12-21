#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    char validUsername[] = "user"; 
    char validPassword[] = "pass"; 
    while (1) {
        printf("Enter username: ");
        scanf("%s", username);
        
        printf("Enter password: ");
        scanf("%s", password);
        
        if (strlen(username) != 4 || strlen(password) != 4) {
            printf("Both username and password must be exactly 4 characters long.\n");
            continue; 
        }
        
        if (strcmp(username, validUsername) == 0 && strcmp(password, validPassword) == 0) {
            printf("Login successful!\n");
            break;  
        } else {
            printf("Invalid username or password. Please try again.\n");
        }
    }

    return 0;
}
