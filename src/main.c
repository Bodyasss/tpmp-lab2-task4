#include <stdio.h>
#include "person.h"

int main() {
    FILE *in = fopen("data/input.txt", "r");
    FILE *out = fopen("data/output.txt", "w");

    if (!in || !out) {
        printf("File error\n");
        return 1;
    }

    PERSON p;

    while (fscanf(in, "%49[^;];%49[^;];%19[^;];%d %d %d\n",
                  p.name, p.faculty, p.group,
                  &p.day, &p.month, &p.year) == 6) {

        print_person(p);
        write_person(out, p);
    }

    fclose(in);
    fclose(out);

    return 0;
}