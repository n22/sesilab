//
//  main.c
//  tes
//
//  Created by Hanif on 12/4/15.
//  Copyright (c) 2015 Hanif. All rights reserved.
//

#include <stdio.h>
int sigma(int);
int sigmarecursive(int);

int main(int argc, const char * argv[]) {
    int n;
    do{
        printf("Positive integer please: ");
        scanf("%d",&n);
    }
    while (n < 0);
    
    int answer = sigmarecursive(n);
    printf("%d",answer);
    return 0;
}
int sigma(int m)
{
    int i;
    if (m < 1) {
        return 0;
    }
    int sum = 0;
    for(i = 1;i<=m;i++)
    {
        sum +=i;
    }
    return sum;
}
int sigmarecursive(m)
{
    if ( m <= 0)
        return 0;
    else{
        return (m + sigmarecursive(m-1));
        
    }
}