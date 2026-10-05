#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node *next;
};

struct Node *top = NULL;

void push() {
int value;
struct Node *newNode;
newNode = (struct Node *)malloc(sizeof(struct Node));

if(newNode == NULL) {
printf("Stack Overflow!\n");
return;
}

printf("Enter value to push: ");
scanf("%d",&value);

newNode->data = value;
newNode->next = top;
top = newNode;

printf("%d pushed into stack.\n",value);
}

void pop() {
struct Node *temp;

if(top == NULL) {
printf("Stack Underflow! Stack is empty.\n");
return;
}

temp = top;
printf("%d popped from stack.\n",top->data);
top = top->next;
free(temp);
}

void peek() {
if(top == NULL) {
printf("Stack is empty.\n");
return;
}

printf("Top element is: %d\n",top->data);
}

void display() {
struct Node *temp;

if(top == NULL) {
printf("Stack is empty.\n");
return;
}

temp = top;

printf("Stack elements are:\n");

while(temp != NULL) {
printf("%d\n",temp->data);
temp = temp->next;
}
}

void search() {
struct Node *temp;
int value,position=1,found=0;

if(top == NULL) {
printf("Stack is empty.\n");
return;
}

printf("Enter value to search: ");
scanf("%d",&value);

temp = top;

while(temp != NULL) {
if(temp->data == value) {
printf("%d found at position %d from top.\n",value,position);
found = 1;
break;
}

temp = temp->next;
position++;
}

if(!found)
printf("%d not found in stack.\n",value);
}

int main() {
int choice;

while(1) {
printf("\nSTACK MENU\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Peek\n");
printf("4. Display\n");
printf("5. Search\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice) {
case 1:
push();
break;

case 2:
pop();
break;

case 3:
peek();
break;

case 4:
display();
break;

case 5:
search();
break;

case 6:
exit(0);

default:
printf("Invalid choice!\n");
}
}

return 0;
}

