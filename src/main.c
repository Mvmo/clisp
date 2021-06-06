#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* read(char* input) {
    return input;
}

char* eval(char* input) {
    return input;
}

char* print(char* input) {
    return input;
}

char* rep(char* input) {
    char* read_result = read(input);
    char* eval_result = eval(read_result);
    char* print_result = print(eval_result);
    
    return print_result;
}

int main(void) {
    char *line = NULL;
    size_t len = 0;

    while (1) {
        printf("user> ");
        
        getline(&line, &len, stdin);

        if (!strcmp(line, "q")) {
            break;
        }

        char* rep_result = rep(line);    
        printf("%s", rep_result);
    }

    free(line);

    return 0;    
}