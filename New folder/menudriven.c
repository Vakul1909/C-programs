#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* Next;
};

struct Node* head = NULL;

void insert_Begin(int value) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->Next = head;
    head = temp;
}

void insert_end(int value) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->Next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        struct Node* ptr = head;
        while (ptr->Next != NULL) {
            ptr = ptr->Next;
        }
        ptr->Next = temp;
    }
}

void insert_after_specific_element(int element, int value) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->Next = NULL;

    if (head == NULL) {
        printf("List is empty.\n");
        free(temp);
        return;
    }

    struct Node* ptr = head;
    while (ptr != NULL && ptr->data != element) {
        ptr = ptr->Next;
    }

    if (ptr == NULL) {
        printf("Element not found.\n");
        free(temp);
    } else {
        temp->Next = ptr->Next;
        ptr->Next = temp;
    }
}

void delete_begin() {
    if (head == NULL) {
        printf("List is empty, deletion not possible.\n");
    } else {
        struct Node* ptr = head;
        head = head->Next;
        free(ptr);
    }
}

void delete_end() {
    if (head == NULL) {
        printf("List is empty, deletion not possible.\n");
    } else if (head->Next == NULL) {
        free(head);
        head = NULL;
    } else {
        struct Node* ptr = head;
        while (ptr->Next->Next != NULL) {
            ptr = ptr->Next;
        }
        free(ptr->Next);
        ptr->Next = NULL;
    }
}

void delete_at_specific_position(int position) {
    if (head == NULL) {
        printf("List is empty, deletion not possible.\n");
        return;
    }

    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        delete_begin();
        return;
    }

    struct Node* ptr = head;
    for (int i = 1; i < position - 1; i++) {
        if (ptr == NULL || ptr->Next == NULL) {
            printf("Position out of bounds!\n");
            return;
        }
        ptr = ptr->Next;
    }

    struct Node* temp = ptr->Next;
    if (temp == NULL) {
        printf("Position out of bounds!\n");
        return;
    }
    ptr->Next = temp->Next;
    free(temp);
}

void traverse() {
    struct Node* ptr = head;
    if (ptr == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->Next;
    }
    printf("NULL\n");
}

void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Insert at Front\n");
    printf("2. Insert at End\n");
    printf("3. Insert after Specific Element\n");
    printf("4. Delete First\n");
    printf("5. Delete End\n");
    printf("6. Delete at Position\n");
    printf("7. Traverse\n");
    printf("8. Display\n");
    printf("9. Exit\n");
}

int main() {
    int choice, value, position;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insert_Begin(value);
                break;

            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insert_end(value);
                break;

            case 3:
                printf("Enter element and value to insert: ");
                scanf("%d %d", &position, &value);
                insert_after_specific_element(position, value);
                break;

            case 4:
                delete_begin();
                break;

            case 5:
                delete_end();
                break;

            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                delete_at_specific_position(position);
                break;

            case 7:
                traverse();
                break;

            case 8:
                traverse(); 
                break;

            case 9:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}