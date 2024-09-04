#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

    char *word[1024];
    scanf("%s", word);
    int length = strlen(word);
    bool is_palindrome = true; 

    for (int i = 0; i < length/2; i++) {
        if (word[i] != word[length - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) printf("Palindrome!");
    else printf("Not a palindrome");

    return 0;
}
