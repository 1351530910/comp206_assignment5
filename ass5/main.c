//
//  main.c
//  ass5
//
//  Created by Admin on 2017-11-15.
//  Copyright © 2017 Chen He. All rights reserved.
//
#include "list.h"


int main(int argc, const char * argv[]) {
    newlist();
    printf("enter some number: \n");
    int *temp = (int*)calloc(sizeof(int), 1);
    while (scanf("%d",temp)) {
        if (*temp<0) {
            break;
        }else{
            addnode(*temp);
        }
    }
    print();
    
    return EXIT_SUCCESS;
}
