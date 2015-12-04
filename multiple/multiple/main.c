//
//  main.c
//  tes123
//
//  Created by Hanif on 12/4/15.
//  Copyright (c) 2015 Hanif. All rights reserved.
//

typedef struct {
    char *first, *last;
} Name;

typedef struct {
    int hasilbagi;
    int sisa;
} Pembagian;

Name whatsMyName() {
    return (Name) {
        .first = "James",
        .last = "Bond",
    };
}
Pembagian hasilPembagian(int x, int y){
    return(Pembagian){
        .hasilbagi=x/y,
        .sisa = x%y,
        
    };
}
int main() {
    Name me = whatsMyName();
    int x=5;
    int y = 2;
    Pembagian coba = hasilPembagian(x, y);
    printf("The name's %s. %s %s.\n", me.last, me.first, me.last);
    printf("Hasil %d %d \n",coba.hasilbagi, coba.sisa);
    return 0;
}
