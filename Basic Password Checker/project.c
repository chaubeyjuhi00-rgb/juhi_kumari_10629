#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Step 3: Function to validate password */
int validatePassword(char password[]) {
    int hasDigit = 0;
    int hasUppercase = 0;
    int length;

    /* Step 5: Check minimum length */
    length = strlen(password);
    if (length < 8) {
        return 0;
    }

    /* Step 6 & 7: Check digit and uppercase letter */
    for (int i = 0; i < length; i++) {
        if (isdigit(password[i])) {
            hasDigit = 1;
        }
        if (isupper(password[i])) {
            hasUppercase = 1;
        }
    }

    /* Step 8 & 9: Return result */
    if (hasDigit && hasUppercase) {
        return 1;   // Success
    } else {
        return 0;   // Failure
    }
}

int main() {
    char password[100];

    /* Step 1: Ask user to enter password */
    printf("Enter your password: ");

    /* Step 2: Read the password */
    scanf("%s", password);

    /* Step 4 & 10: Call function and display result */
    if (validatePassword(password)) {
        printf("Password is VALID\n");
    } else {
        printf("Password is INVALID\n");
        printf("Password must contain:\n");
        printf("- Minimum 8 characters\n");
        printf("- At least one digit\n");
        printf("- At least one uppercase letter\n");
    }

    return 0;
}
