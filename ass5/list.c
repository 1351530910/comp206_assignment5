//
//  list.c
//  ass5
//
//  Created by Admin on 2017-11-15.
//  Copyright © 2017 Chen He. All rights reserved.
//

#include "list.h"

struct node* list;

void newlist(void){
    list = NULL;
}
int addnode(int value){
    if (value>=0) {
        struct node* temp = (struct node*)calloc(sizeof(struct node), 1);
        temp->data = value;
        temp->next = list;
        list = temp;
        return 1;
    }
    
    return 0;
}
void print(void){
    struct node* parser = list;
    while (parser) {
        printf("%d",parser->data);
        parser = parser->next;
    }
}
