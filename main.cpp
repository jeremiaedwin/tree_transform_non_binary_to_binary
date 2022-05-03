#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "non_binary_tree.h"
#include "binary_tree.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	nbTree non_binary_tree;
	bTree binary_tree;
	
	nbCreate(&non_binary_tree);
	bCreate(&binary_tree);
	nbInsert(&non_binary_tree, 0, 1);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 1), 2);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 1), 3);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 1), 4);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 2), 5);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 2), 6);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 4), 7);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 4), 8);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 4), 9);
	nbInsert(&non_binary_tree, nbSearch(non_binary_tree.root, 4), 10);
	int choose;
	char ascii1 = 205;
	char ascii2 = 201; 
	char ascii3 = 187;
	char ascii4 = 204;
	char ascii5 = 185;
	
	for(;;){
		system("CLS");
		printf("%c", ascii2);
		for(int i = 0; i <= 37; i++){
			printf("%c", ascii1);
		}
		printf("%c\n", ascii3);
		
		printf("%c    Non Binary Tree To Binary Tree    %c\n", 186, 186);
		
		printf("%c", ascii4);
		for(int i = 0; i <= 37; i++){
			printf("%c", ascii1);
		}
		printf("%c\n", ascii5);
		
		printf("%c 1. NON BINARY TREE                   %c\n", 186, 186);
		printf("%c 2. BINARY TREE                       %c\n", 186, 186);
		printf("%c 3. NON BINARY TREE                   %c\n", 186, 186);
		printf("%c", 200);
		for(int i = 0; i <= 37; i++){
			printf("%c", ascii1);
		}
		printf("%c\n", 188);
		printf("\n\t Masukkan Nomor Menu : ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				create_non_binary_tree(&non_binary_tree);
				system("pause");
				break;
			case 2:
				create_binary_tree(&binary_tree, non_binary_tree);
				system("pause");
				break;
			case 3:
				create_avl_tree(&binary_tree, non_binary_tree);
				system("pause");
				break;
		}
	}
	
	return 0;
}
