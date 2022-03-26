#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

typedef struct listdata {
	char name[30];
	int id;
}listdata;

typedef struct listnode* listpointer;
typedef struct listnode {
	listdata data;
	listpointer link;
}listnode;

typedef struct linkedlist {
	listpointer *head;
	int length;
}linkedlist;

int main() {
	linkedlist first;
	first.head = NULL;
	listdata item;
	
	int num;
	FILE* fp = fopen("students.txt", "r");
	while (fp) {
		fscanf(fp, "%s %d", item.name, &item.id);
		insertlist(&first, item);
	}
	fclose(fp);
}

void insertlist(linkedlist* first, listdata item) {
	listpointer temp;
	temp = (listpointer)malloc(sizeof(listnode));
	temp
}