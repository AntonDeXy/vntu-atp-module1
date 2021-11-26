#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int countin(int counter);

int main(void)
{
    string text = get_string("Text: ");
    int words = 0;

    int i = 0;

    if (strlen(text) == 0) {
        return 0;
    }

    for (i = 0; strlen(text) > i; i++) {
        if (text[i] == ' ') {
            if (text[i + 1] != ' '){
                words++;
            }
        }

    }

    printf("words: %i", words + 1);
}
