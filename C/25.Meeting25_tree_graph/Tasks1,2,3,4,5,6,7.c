#include <stdio.h>
#include<stdbool.h>

typedef struct Node{
    int data;
    Node* left;
    Node* right;
} Node;

Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

//Task1
void addNode(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return;
    }
    if (data < root->data) {
        addNode(root->left, data);
    }
    else {
        addNode(root->right, data);
    }
}
Node* removeNode(Node* root, int data) {
    
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = removeNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = removeNode(root->right, data);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            free(temp);
        }
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            free(temp);
        }
        else {
            Node* temp = root->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = removeNode(root->right, temp->data);
        }
    }
    return root;
}

//Task2
void inOrder(const Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
void preOrder(const Node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(const Node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

//Task3
bool searchValue(const Node* root, int data) {

    if (root == NULL) {
        return false;
    }
    if (root->data == data) {
        return true;
    }
    
    return searchValue(root->left, data) || searchValue(root->right, data);
}

//Task4
int height(const Node* root){

    if (root == NULL) {
        return 0;
    }

    return 1 + max(height(root->left), height(root->right));
}

//Task5
int sum(const Node* root)
{
    if (root == NULL) {
        return 0;
    }

    return root->data + sum(root->left) + sum(root->right);
}

//Task6
int getMinValue(Node* root) {
    if (root == NULL) {
        return -1;
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}
int getMaxValue(Node* root) {
    if (root == NULL) {
        return -1;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

//Task7
bool isBST(Node* root, int minValue, int maxValue) {
    if (root == NULL) {
        return true;
    }

    if (root->data < minValue || root->data > maxValue) {
        return false;
    }

    return isBST(root->left, minValue, root->data - 1) &&
           isBST(root->right, root->data + 1, maxValue);
}
