#include <stdio.h>
#include <stdlib.h>

int main() {
    char commitMessage[100];

    // Get commit message from user
    printf("Enter commit message: ");
    scanf("%[^\n]", commitMessage);

    // Create Git command to stage changes
    char gitAddCommand[100] = "git add .";

    // Create Git command to commit changes with message
    char gitCommitCommand[100];
    sprintf(gitCommitCommand, "git commit -m \"%s\"", commitMessage);

    // Create Git command to push changes
    char gitPushCommand[100] = "git push";

    // Execute Git commands
    system(gitAddCommand);
    system(gitCommitCommand);
    system(gitPushCommand);

    return 0;
}
