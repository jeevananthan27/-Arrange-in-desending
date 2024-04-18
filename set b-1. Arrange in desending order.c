#include <stdio.h>
#include <string.h>

void frequencySort(char* s) {
    int count[256] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        count[s[i]]++;
    }
    for (int i = 255; i >= 0; i--) {
        for (int j = 0; j < count[i]; j++) {
            printf("%c", i);
        }
    }
}

int main() {
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Output: ");
    frequencySort(s);
    printf("\n");

    return 0;
}
