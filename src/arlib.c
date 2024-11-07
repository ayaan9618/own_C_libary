#include <stdio.h>
#include <stdlib.h>

double sqr(double i){
    double a= i*i;
    return a;
}

double cube(double i){
    double c= i*i*i;
    return c;
}

double add( double i, double j ){
    double a = i+j;
    return a;
}


double sub( double i, double j ){
    double a = i-j;
    return a;
}


double mul( double i, double j ){
    double a = i*j;
    return a;
}


double divi( double i, double j ){
    double a = i/j;
    return a;
}

int mod( int i, int j ){
    int a = (i)%(j);
    return a;
}

int takeint(const char *prompt){
     int n;
    printf("%s", prompt);
    scanf("%d",&n);

    return n;
}

char takechar(const char *prompt){
     char n;
    printf("%s", prompt);
    scanf("%c",&n);

    return n;
}

float takefloat(const char *prompt){
     float n;
    printf("%s", prompt);
    scanf("%f",&n);

    return n;
}
char asciitoc(int c){
    char a=(char)c;
    return a;
}




