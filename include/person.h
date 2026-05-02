#ifndef PERSON_H
#define PERSON_H

#include <stdio.h>

typedef struct {
    char name[50];
    char faculty[50];
    char group[20];
    int day, month, year;
} PERSON;

void print_person(PERSON p);
void write_person(FILE *f, PERSON p);

#endif