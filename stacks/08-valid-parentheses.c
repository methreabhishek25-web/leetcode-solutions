
#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            if (top == -1) {
                return 0;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == '}' && open != '{') ||
                (c == ']' && open != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char s[] = "{[()]}";

    if (isValid(s)) {
        printf("Valid Parentheses\n");
    } else {
        printf("Invalid Parentheses\n");
    }

    return 0;
}

