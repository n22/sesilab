//
//  main.c
//  pointer
//
//  Created by Hanif on 12/4/15.
//  Copyright (c) 2015 Hanif. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x= 5;
    int* ptr = &x;
    *ptr = 35;
    int copy = *ptr;
    int* ref;
    ref = &x;
    int a =3, b=4,c = 5;
    int* pa = &a, *pb = &b, *pc = &c;
   
    a = b*c;
    a *=c;
    b = *pa;
    pc = pa;
    *pb = b * c;
    //printf("nilai pb %d\n",*pb);
    c = (*pa)*(*pc);
    *pc = a * (*pb);
    
    printf(" variable a address: %x value: %d\n",&a,a);
    printf(" variable b address: %x value: %d\n",&b,b);
    printf(" variable c address: %x value: %d\n",&c,c);
    printf(" variable pa address: %x value: %x\n",&ptr, pa);
    printf(" variable pb address: %x value: %x\n",&copy, pb);
    printf(" variable pc address: %x value: %x\n",&ref, pc);
    
    printf("------\n");
    char* str = "happy cat";
    int counter = 0;
    for (char* ptr = str; *ptr != '\0'; ptr++)
    {
        counter++;
    }
    printf("%d\n", counter);
    return 0;
}
