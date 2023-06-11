//
// Created by avielk on 09/06/2023.
//
#include "data_structures.h"
#include <iostream>

/*Generates new list based on given array and size*/
node* create_list(int arr[], int size) {
    node* head = nullptr;
    node* new_node;

    for (int i = 0; i < size + 1; i++) {
        new_node = new node;
        if (i == 0)
            new_node->next = head;
        else {
            new_node->next = head;
            new_node->data = arr[i - 1];
            head = new_node;
        }
    }
    return head;
}
/*Displays given list*/
void display_list(node* list){
    std:: cout << "Given list:\n";

    while(list != nullptr)
    {
        std:: cout << list-> data << "->";
        list = list->next;
    }
    std:: cout << "NULL \n";
    std:: cout << std::string(20,'=') << "\n";
}
node* insert_to_list_end(node* list, int data)
{
    node* head = list;
    node* new_node = new (node);

    while(list->next != nullptr)
    {
        list = list->next;
    }

    new_node->next = nullptr;
    new_node->data = data;
    list->next = new_node;
    return head;
}
node* insert_to_list_head(node* list, int data)
{
    node* new_node = new(node);
    new_node->next = list;
    new_node->data = data;
    return new_node;

}



