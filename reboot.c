#include <stdio.h>
#include <stdlib.h>

int main() {
    char password[] = "password";
    char command[100];

    // Construct the command with the provided password
    snprintf(command, sizeof(command), "echo %s | sudo -S shutdown -r now", password);

    // Use the system function to execute the restart command
    if (system(command) == -1) {
        perror("Error restarting system");
        return 1;
    }

    return 0;
}
