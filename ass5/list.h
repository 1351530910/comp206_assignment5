//
//  list.h
//  ass5
//
//  Created by Admin on 2017-11-15.
//  Copyright © 2017 Chen He. All rights reserved.
//

#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

void newlist(void);
int addnode(int value);
void print(void);

#endif /* list_h */
