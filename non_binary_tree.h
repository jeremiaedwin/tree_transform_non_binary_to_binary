#ifndef non_binary_tree_H
#define non_binary_tree_H
#include "boolean.h"
#define NIL NULL

// Kamus Data Non Binary Tree

typedef char infotype;

typedef struct nbTreeNode *nbAddr;

typedef struct nbTreeNode{
	nbAddr fs;
	infotype info;
	nbAddr nb;
	nbAddr parent;
}nbElmtTree;

struct nbTree{
	nbAddr root;
};

nbAddr nbAlokasi(infotype x);
void nbCreate(nbTree *tree);
void nbInsert(nbTree *root, nbAddr parent, infotype x);
void nbPrint(nbAddr node, char tab[], char type[]);
nbAddr nbSearch(nbAddr root, infotype x);

#endif
