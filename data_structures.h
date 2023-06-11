//
// Created by avielk on 09/06/2023.
//

#ifndef CPPRO_DATA_STRUCTURES_H
#define CPPRO_DATA_STRUCTURES_H

typedef struct node {
    int data;
    struct node* next;
}node;



node* create_list(int arr[], int size);
void display_list(node* list);
node* insert_to_list_end(node* list, int data);
node* insert_to_list_head(node* list, int data);

#endif //CPPRO_DATA_STRUCTURES_H
