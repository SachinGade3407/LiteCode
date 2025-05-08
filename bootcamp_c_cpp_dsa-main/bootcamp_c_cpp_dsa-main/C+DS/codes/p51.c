#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};

struct TreeNode* createNode(int level){
	level=level+1;
	struct TreeNode *newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	printf("Enter data\n");
	scanf("%d",&(newNode->data));
	char ch;
	getchar();
	printf("Wnat to create left subtree for level %d?\n",level);
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y'){
		newNode->left=createNode(level);
	}else{
		newNode->left=NULL;
	}
	getchar();
	printf("Want to create right subtree forlevel %d?\n",level);
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y'){
		newNode->right=createNode(level);
	}else{
		newNode->right=NULL;
	}
	return newNode;
}

void preOrder(struct TreeNode *root){
	if(root == NULL){
		return;
	}
	printf("%d\n",root->data);
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(struct TreeNode *root){
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	printf("%d\n",root->data);
	inOrder(root->right);
}

void postOrder(struct TreeNode *root){
	if(root==NULL){
		return;
	}
	postOrder(root->left);
	postOrder(root->right);
	printf("%d\n",root->data);
}

void printTree(struct TreeNode* root){
	char ch;
	do{
		printf("1.PreOrder\n");
		printf("2.InOrder\n");
		printf("3.PostOrder\n");
		int choice;
		printf("Enter choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				preOrder(root);
				break;
			case 2 :
				inOrder(root);
				break;
			case 3 :
				postOrder(root);
				break;
		}
		getchar();
		printf("Continue?\n");
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
}

void main(){
	printf("Creating Binary Tree.....\n");
	struct TreeNode *root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	printf("Enter data\n");
	scanf("%d",&(root->data));
	printf("\t\t\tTree rooted with %d\n",root->data);
	char ch;
	getchar();
	printf("Want to create left subtree for root->root?\n");
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y'){
		root->left=createNode(0);
	}else{
		root->left=NULL;
	}
	getchar();
	printf("Want to create right subtree for root node?\n");
	scanf("%c",&ch);
	if(ch=='Y'||ch=='y'){
		root->right=createNode(0);
	}else{
		root->right=NULL;
	}
	printTree(root);
}




