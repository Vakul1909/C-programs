// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct Node *next;
// };
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
 
// int main()
// {
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;

//     head = (struct node *)malloc(sizeof(struct node));
//     second = (struct node *)malloc(sizeof(struct node));
//     third = (struct node *)malloc(sizeof(struct node));
//     fourth = (struct node *)malloc(sizeof(struct node));

//     head->data = 4;
//     head->next = second;

//     second->data = 8;
//     second->next = third;

//     third->data = 12;
//     third->next = fourth;

//     fourth->data = 16;
//     fourth->next = NULL;
//     linkedListTraversal(head);     
  
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insertionatend(struct Node *ptr){
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
 
    linkedListTraversal(head);
    return 0;
}
