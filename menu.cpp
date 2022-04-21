#include <stdlib.h>
#include <stdio.h>
#include "non_binary_tree.h"
#include "binary_tree.h"

void create_non_binary_tree(nbTree *tree){
	system("cls");
	char tab[] = "";
	char type[] = "Root";
	nbInsert(&(*tree), 0, 1);
	nbInsert(&(*tree), nbSearch(tree->root, 1), 2);
	nbInsert(&(*tree), nbSearch(tree->root, 1), 3);
	nbInsert(&(*tree), nbSearch(tree->root, 1), 4);
	nbInsert(&(*tree), nbSearch(tree->root, 2), 5);
	nbInsert(&(*tree), nbSearch(tree->root, 2), 6);
	nbInsert(&(*tree), nbSearch(tree->root, 4), 7);
	nbInsert(&(*tree), nbSearch(tree->root, 4), 8);
	nbInsert(&(*tree), nbSearch(tree->root, 4), 9);
	nbInsert(&(*tree), nbSearch(tree->root, 4), 10);
	nbPrint(tree->root, tab, type);
	printf("Non Binary Tree Berhasil Dibuat!\n");
}

void create_binary_tree(bTree *tree, nbTree tree2){
	system("cls");
	char tab[] = "";
	char type[] = "Root";
	nbToBinary(&(tree->root), tree2.root);
	bPrint(tree->root, tab, type);
	printf("Non Binary Tree Berhasil Dibuat!\n");
}
