#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main() {
    int arrLength = get_int("Array length: ");
    char *arr[100];
    char * pch;
    string intialNums = get_string("Enter nums splited by spaces: ");
    int i = 0;

    int currIndex = 0;

    char *currNum = strtok(intialNums, " ");


    while (currNum != NULL)
    {
        arr[i++] = currNum;
        currNum = strtok (NULL, " ");
    }

    for (i = arrLength - 1; i >= 0; i--) {
        printf("%s\n", arr[i]);
    }

}
