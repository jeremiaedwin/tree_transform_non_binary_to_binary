#ifndef binary_tree_H
#define binary_tree_H
#include "boolean.h"
#define NIL NULL
#include "non_binary_tree.h"

// Kamus Data Non Binary Tree

typedef char infotype;

typedef struct bTreeNode *bAddr;

typedef struct bTreeNode{
	bAddr left;
	infotype info;
	bAddr right;
}bElmtTree;

struct bTree{
	bAddr root;
};

bAddr bAlokasi(infotype x);
void bCreate(bTree *tree);
void nbToBinary(bAddr *bTree, nbAddr nbTree);
void bPrint(bAddr node, char tab[], char type[]);

#endif
