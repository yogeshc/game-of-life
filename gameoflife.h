#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

void print_usage();
void correctness_tests();
bool correctness_test(const char*, int, int);
void performance_tests();
void performance_test(const char*, int, int);
int ms_difference(struct timeval, struct timeval);
void visual_mode(const char*);
bool identical(bool*, bool*, int, int);
void input_game(bool**, int*, int*, const char*);
void print_game(bool*, int, int);
