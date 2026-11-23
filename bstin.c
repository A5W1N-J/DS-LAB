#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node *left, *right;
};

struct node* createNode(int value) {
struct node* newNode = malloc(sizeof(struct node));
newNode->data = value;
newNode->left = newNode->right = NULL;
return newNode;
}

struct node* insert(struct node* root, int value) {
if (root == NULL)
return createNode(value);

if (value < root->data)
root->left = insert(root->left, value);
else if (value > root->data)
root->right = insert(root->right, value);

return root;
}

void inorder(struct node* root) {
if (root != NULL) {
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}

int main() {
struct node* root = NULL;
int n, value;

printf("Enter number of nodes: ");
scanf("%d", &n);

for (int i = 0; i < n; i++) {
printf("Enter value: ");
scanf("%d", &value);
root = insert(root, value);
}

printf("Inorder traversal: ");
inorder(root);

return 0;
}
