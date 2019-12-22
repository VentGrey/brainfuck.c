#include <stdio.h>
#include <stdlib.h>

int interpreter(FILE *src);

int main(int argc, char *argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Usage: bf <file>\n");
        exit(1);
    }

    FILE *fp = fopen(argv[1], "r");

    if (!fp) {
        fprintf(stderr, "Could not open brainfuck file %s\n", argv[1]);
        exit(2);
    }

    return interpreter(fp);
}

int interpreter(FILE *src) {
    char c;

    int mem = 0;
    char memory[3001];

    while ((c = fgetc(source)) != EOF) {

    }
    return 0;
}
