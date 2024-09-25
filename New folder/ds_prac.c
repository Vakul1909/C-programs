// // # include <stdio.h>
// // int main(){
// //     int a[20],size,pos;
// //     printf("Enter the size of array: ");
// //     scanf("%d",&size);
// //     printf("Enter the elements in array: ");
// //     for (int i = 0; i < size; i++)
// //     {
// //        scanf("%d",&a[i]);
// //     }
// //     printf("Enter position u want to delete: ");
// //     scanf("%d",&pos);
// //     if(pos<0 || pos>size){
// //         printf("Invalid position");
// //     }
// //     else{
// //         for (int i = pos-1; i < size-1; i++)
// //         {
// //            a[i]=a[i+1];
// //         }
// //         size-- ;
// //         printf("Elements of the Array:\n");
// //         for (int i = 0; i < size; i++)
// //         {
// //            printf("%d\n",a[i]);
// //         }
        
// //     }
// //     printf("vakul mittal IT-1");
// //     return 0;
// // }






















// #include <stdio.h>
// #include <stdlib.h>
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;
// Node* head = NULL;
// void insertAtFront(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = head;
//     head = newNode;
//     printf("Inserted %d at the front.\n", data);
// }
// void insertAtEnd(int data) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     if (head == NULL) {
//         head = newNode;
//         printf("Inserted %d at the end.\n", data);
//         return;
//     }
//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     printf("Inserted %d at the end.\n", data);
// }
//   void insertAtPosition(int data, int position) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->data = data;
    
//     if (position == 1) {
//         newNode->next = head;
//         head = newNode;
//         printf("Inserted %d at position %d.\n", data, position);
//         return;
//     }
//     Node* temp = head;
//     for (int i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }

//     if (temp == NULL) {
//         printf("Position %d is out of bounds.\n", position);
//         free(newNode);
//         return;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
//     printf("Inserted %d at position %d.\n", data, position);
// }

// void deleteFirst() {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     Node* temp = head;
//     head = head->next;
//     printf("Deleted %d from the front.\n", temp->data);
//     free(temp);
// }

// void deleteEnd() {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     if (head->next == NULL) {
//         printf("Deleted %d from the end.\n", head->data);
//         free(head);
//         head = NULL;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next->next != NULL) {
//         temp = temp->next;
//     }
//     Node* endNode = temp->next;
//     temp->next = NULL;
//     printf("Deleted %d from the end.\n", endNode->data);
//     free(endNode);
// }

// void deletePosition(int position) {
//     if (head == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     if (position == 1) {
//         deleteFirst();
//         return;
//     }
//     Node* temp = head;
//     for (int i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
//     if (temp == NULL || temp->next == NULL) {
//         printf("Position %d is out of bounds.\n", position);
//         return;
//     }
//      Node* deleteNode = temp->next;
//     temp->next = deleteNode->next;
//     printf("Deleted %d from position %d.\n", deleteNode->data, position);
//     free(deleteNode);
// }
//   void traversal() {
//     Node* temp = head;
//     if (temp == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }
//  void display() {
//     traversal();
// }
//  void menu() {
//     int choice, data, position;

//     do {
//         printf("\nMenu:\n");
//         printf("1. Insert at Front\n");
//         printf("2. Insert at End\n");
//         printf("3. Insert at Position\n");
//         printf("4. Delete First\n");
//         printf("5. Delete End\n");
//         printf("6. Delete Position\n");
//         printf("7. Traversal\n");
//         printf("8. Display\n");
//         printf("9. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter data to insert at front: ");
//                 scanf("%d", &data);
//                 insertAtFront(data);
//                 break;
//             case 2:
//                 printf("Enter data to insert at end: ");
//                 scanf("%d", &data);
//                 insertAtEnd(data);
//                 break;
//             case 3:
//                 printf("Enter data to insert at position: ");
//                 scanf("%d", &data);
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 insertAtPosition(data, position);
//                 break;
//             case 4:
//                 deleteFirst();
//                 break;
//             case 5:
//                 deleteEnd();
//                 break;
//             case 6:
//                 printf("Enter position to delete: ");
//                 scanf("%d", &position);
//                 deletePosition(position);
//                 break;
//             case 7:
//                 traversal();
//                 break;
//             case 8:
//                 display();
//                 break;
//             case 9:
//                 printf("Exiting...\n");
//                 printf("vakul mittal IT-1");
//                 break;
//             default:
//                 printf("Invalid choice. Please try again.\n");
//                 break;
//         }
//     } while (choice != 9);
// }
//  int main() {
//     menu();
//     return;}

















// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* reverseLinkedList(struct Node* head) {
//     struct Node* prev = NULL;
//     struct Node* current = head;
//     struct Node* next = NULL;
    
//     while (current != NULL) {
//         next = current->next;  
//         current->next = prev;  
//         prev = current;    
//         current = next;  
//     }
//     head = prev;  
//     return head;
// }
// void printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// void push(struct Node** head_ref, int new_data) {
//     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
//     new_node->data = new_data;
//     new_node->next = (*head_ref);
//     (*head_ref) = new_node;
// }
// int main() {
//     struct Node* head = NULL;
//     push(&head, 4);
//     push(&head, 3);
//     push(&head, 2);
//     push(&head, 1);

//     printf("Original Linked List:\n");
//     printList(head);

//     head = reverseLinkedList(head);

//     printf("Reversed Linked List:\n");
//     printList(head);
//      printf("vakul mittal IT-1");
//     return 0;
// }


















// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 5 

// int stack[MAX];
// int top = -1;  
// void PUSH() {
//     int value;
//     if (top == MAX - 1) {
//         printf("Stack Overflow! Cannot push more elements.\n");
//     } else {
//         printf("Enter the value to push: ");
//         scanf("%d", &value);
//         top++;
//         stack[top] = value;
//         printf("%d pushed onto the stack.\n", value);
//     }
// }
// void POP() {
//     if (top == -1) {
//         printf("Stack Underflow! Cannot pop from an empty stack.\n");
//     } else {
//         printf("%d popped from the stack.\n", stack[top]);
//         top--;
//     }
// }
// void SHOW() {
//     if (top == -1) {
//         printf("Stack is empty!\n");
//     } else {
//         printf("Stack elements are: ");
//         for (int i = 0; i <= top; i++) {
//             printf("%d ", stack[i]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int choice;

//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3. SHOW\n");
//         printf("4. EXIT\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 PUSH();
//                 break;
//             case 2:
//                 POP();
//                 break;
//             case 3:
//                 SHOW();
//                 break;
//             case 4:
//                 printf("Exiting...\n");
//                 printf("vakul mitta IT-1");
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }

//     return 0;
// }


















// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (!newNode) {
//         printf("Memory allocation error\n");
//         exit(1);}
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;}
// int isEmpty(struct Node* top) {
//     return top == NULL;}
// void PUSH(struct Node** top, int data) {
//     struct Node* newNode = createNode(data);
//     newNode->next = *top;  
//     *top = newNode;        
//     printf("%d pushed onto the stack.\n", data);}
// int POP(struct Node** top) {
//     if (isEmpty(*top)) {
//         printf("Stack Underflow! Cannot pop from an empty stack.\n");
//         return -1; } 
//    else {
//         struct Node* temp = *top;
//         int poppedData = temp->data;
//         *top = (*top)->next; 
//         free(temp);          
//         printf("%d popped from the stack.\n", poppedData);
//         return poppedData;}
// }
// void SHOW(struct Node* top) {
//     if (isEmpty(top)) {
//         printf("Stack is empty!\n");}
//     else {
//         struct Node* temp = top;
//         printf("Stack elements are: ");
//         while (temp != NULL) {
//             printf("%d -> ", temp->data);
//             temp = temp->next;}
//         printf("NULL\n");
//     }
// }
// int main() {
//     struct Node* top = NULL; 
//     int choice, value;
//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. PUSH\n");
//         printf("2. POP\n");
//         printf("3. SHOW\n");
//         printf("4. EXIT\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//     switch (choice) {
//             case 1:
//                 printf("Enter the value to push: ");
//                 scanf("%d", &value);
//                 PUSH(&top, value);
//                 break;
//             case 2:
//                 POP(&top);
//                 break;
//             case 3:
//                 SHOW(top);
//                 break;
//             case 4:
//                 printf("vakul mittal IT-1");
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");}
//     }
//     return 0;
// }


















// #include <stdio.h>
// #include <stdlib.h>

// int front = -1;  
// int rear = -1;  
// int MAX;         
// int isEmpty() {
//     return (front == -1 && rear == -1); }
// int isFull() {
//     return (rear == MAX - 1); }
// void enqueue(int queue[], int x) {
//     if (isFull()) {
//         printf("Queue is full. Cannot enqueue %d\n", x);
//         return;
//     }
//     if (isEmpty()) {
//         front = rear = 0; 
//     } else {
//         rear++;
//     }
//     queue[rear] = x;
//     printf("Enqueued %d\n", x); }
// void dequeue(int queue[]) {
//     if (isEmpty()) {
//         printf("Queue is empty. Cannot dequeue\n");
//         return;
//     }
//     printf("Dequeued %d\n", queue[front]);
//     if (front == rear) {  
//         front = rear = -1;
//     } else {
//         front++;
//     }}
// void display(int queue[]) {
//     if (isEmpty()) {
//         printf("Queue is empty.\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (int i = front; i <= rear; i++) {
//         printf("%d ", queue[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int choice, value;
//     printf("Enter the maximum size of the queue: ");
//     scanf("%d", &MAX);
//     int queue[MAX];  
//     while (1) {
//         printf("\nQueue Operations:\n");
//         printf("1. Enqueue\n");
//         printf("2. Dequeue\n");
//         printf("3. Display\n");
//         printf("4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//         case 1:
//             printf("Enter value to enqueue: ");
//             scanf("%d", &value);
//             enqueue(queue, value);
//             break;
//         case 2:
//             dequeue(queue);
//             break;
//         case 3:
//             display(queue);
//             break;
//         case 4:
//             printf("vakul mittal IT-1");
//             exit(0);
//         default:
//             printf("Invalid choice! Please try again.\n");
//         } }
//     return 0;
// }























// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };
// struct Queue {
//     struct Node* front;
//     struct Node* rear;
// };
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;}
// struct Queue* createQueue() {
//     struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//     queue->front = queue->rear = NULL;
//     return queue;
// }
// int isEmpty(struct Queue* queue) {
//     return queue->front == NULL;
// }
// void enqueue(struct Queue* queue, int data) {
//     struct Node* newNode = createNode(data);

//     if (queue->rear == NULL) {  
//         queue->front = queue->rear = newNode;
//         printf("%d enqueued into the queue.\n", data);
//         return;
//     }
//     queue->rear->next = newNode;  
//     queue->rear = newNode;       
//     printf("%d enqueued into the queue.\n", data);
// }
// int dequeue(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         printf("Queue Underflow! Cannot dequeue from an empty queue.\n");
//         return -1;}
// struct Node* temp = queue->front;
//     int dequeuedValue = temp->data;
//     queue->front = queue->front->next;  
//     if (queue->front == NULL) {
//         queue->rear = NULL;}
//     free(temp);  
//     printf("%d dequeued from the queue.\n", dequeuedValue);
//     return dequeuedValue;
// }
// void displayQueue(struct Queue* queue) {
//     if (isEmpty(queue)) {
//         printf("Queue is empty!\n");
//     } else {
//         struct Node* temp = queue->front;
//         printf("Queue elements are: ");
//         while (temp != NULL) {
//             printf("%d -> ", temp->data);
//             temp = temp->next;
//         }
//         printf("NULL\n"); }
// }

// int main() {
//     struct Queue* queue = createQueue(); 
//     enqueue(queue, 10);
//     enqueue(queue, 20);
//     enqueue(queue, 30);
//     displayQueue(queue);

//     dequeue(queue);
//     displayQueue(queue);
//     printf("vakul mittal IT-1");
//     return 0;
// }






















// #include <stdio.h>
// #include <stdlib.h>
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (!newNode) {
//         printf("Memory allocation error\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }
// void inorder(struct Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         printf("%d ", root->data);
//         inorder(root->right);
//     }
// }
// void preorder(struct Node* root) {
//     if (root != NULL) {
//         printf("%d ", root->data);
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(struct Node* root) {
//     if (root != NULL) {
//         postorder(root->left);
//         postorder(root->right);
//         printf("%d ", root->data);
//     }
// }

// int main() {
//     struct Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);
//     root->right->left = createNode(6);
//     root->right->right = createNode(7);

//     printf("Inorder Traversal: ");
//     inorder(root);
//     printf("\n");

//     printf("Preorder Traversal: ");
//     preorder(root);
//     printf("\n");

//     printf("Postorder Traversal: ");
//     postorder(root);
//     printf("\n");
//     printf("vakul mittal IT-1");

//     return 0;
// }
