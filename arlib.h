#ifndef ARLIB_H
#define ARLIB_H

double sqr(double i);


double cube(double i );

double add( double i, double j );

double sub( double i, double j );

double mul( double i, double j );

double divi( double i, double j );

int mod( int i, int j );


int takeint(const char *prompt);

float takefloat(const char *prompt);

char takechar(const char *prompt);

char asciitoc(int c);

int arr(int *arr, int size);


#endif