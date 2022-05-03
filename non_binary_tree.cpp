#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "non_binary_tree.h"

void nbCreate(nbTree *tree){
	tree->root=NULL;
}

nbAddr nbAlokasi(infotype x){
	nbAddr newNode;
	newNode = (nbAddr) malloc(sizeof(nbElmtTree));
	if(newNode != NULL){
		newNode->fs = NULL;
		newNode->parent = NULL;
		newNode->info = x;
		newNode->nb = NULL;
	}
	return newNode;
}

void nbInsert(nbTree *root, nbAddr parent, infotype x){
	nbAddr newNode, temp;
	newNode = nbAlokasi(x);
	if(newNode != NULL){
		if(parent == NULL){ // Jika tree belum memilki node
			root->root = newNode; // root akan menunjuk newNode
		}else{ // Jika root sudah memiliki node 
			temp = parent;
			if(temp->fs == NULL){ // Jika parent belum memiliki anak pertama
				temp->fs = newNode;
			}else{ // Jika parent sudah memilki anak pertama 
				temp = temp->fs; // temp akan meunjuk node anak pertama
				while(temp->nb != NULL){ // temp melakukan traversing ke setiap next brother hingga yang terakhir
					temp = temp->nb;
				}
				temp->nb = newNode;
			}
			newNode->parent = parent;
		}
	}
}

nbAddr nbSearch(nbAddr root, infotype x){
	nbAddr node;
	if(root != NULL){
		if(root->info == x){
			return root;
		}else{
			node = nbSearch(root->fs, x);
			if(node == NULL){
				return nbSearch(root->nb, x);
			}else{
				return node;
			}
		}
	}
	else{ 
		return NULL; 
	}
}

void nbIn(nbAddr root){
 	if (root!=NULL){
		nbIn(root->fs); 
		if (root->fs==NULL) printf("%d ", root->info); 
		if (root->parent !=NULL) 
			if (root->parent->fs==root)
				printf("%d ", root->parent->info);
		nbIn(root->nb);
	}
}

void nbPre(nbAddr root){
	if (root!=NULL){
		printf("%d ", root->info);
		nbPre(root->fs);
		nbPre(root->nb);
	}
}

void nbPost(nbAddr root){
	if (root!=NULL){
		nbPost(root->fs);
		printf("%d ", root->info);
		nbPost(root->nb);
		
	}
}

void nbLevel(nbAddr root,int curLevel, int desLevel){
	if(root != NULL){
		if(curLevel == desLevel)
		printf("%d ",root->info); 
		nbLevel(root->fs,curLevel+1,desLevel);
		nbLevel(root->nb,curLevel,desLevel);
	}
}

void nbPrint(nbAddr node, char tab[], char type[]){
	char tempTab[255];
	strcpy(tempTab, tab);
	strcat(tempTab, "-");
	if(node != NULL){
		printf("%s|%d|%s\n", tab, node->info, type);
		nbPrint(node->fs, tempTab, "First Son");
		nbPrint(node->nb, tab, "Next Brother");
	}
}

int nbDepth(nbAddr root){
	int y,z;

	if(root==NULL)
		return -1;
	y=nbDepth(root->fs);
	z=nbDepth(root->nb);
	if (y > z)
		return (y+1);
	else
		return (z+1);
}
