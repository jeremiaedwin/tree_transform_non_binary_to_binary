#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_tree.h"


void bCreate(bTree *tree){
	tree->root=NULL;
}

bAddr bAlokasi(infotype x){
	bAddr newNode;
	newNode=(bAddr) malloc(sizeof(bElmtTree));
	if(newNode != NULL){
		newNode->info = x;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	return newNode;
}

void nbToBinary(bAddr *btree, nbAddr nbtree){
	if(nbtree!=NULL){
		*btree = bAlokasi(nbtree->info);
		nbToBinary(&(*btree)->left, nbtree->fs);
		nbToBinary(&(*btree)->right, nbtree->nb);
	}
}

void bPrint(bAddr node, char tab[], char type[]){
	char tempTab[255];
	strcpy(tempTab, tab);
	strcat(tempTab, "-");
	if(node != NULL){
		printf("%s|%d|%s\n", tab, node->info, type);
		bPrint(node->left, tempTab, "Left");
		bPrint(node->right, tempTab, "Right");
	}
}
