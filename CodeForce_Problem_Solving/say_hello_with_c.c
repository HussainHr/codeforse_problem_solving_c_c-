#include <stdio.h>
#include <string.h>

int main(){
    char name[256];

    ///Prompt the user for their input
    fgets(name, sizeof(name), stdin);

    ///Remove the newline character from the input
    name[strcspn(name, "\n")] = '\0';

    ///Print the greeting message to the user
    printf("Hello, %s\n", name);
    
    return 0;
}