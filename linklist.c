#include <stdio.h>
#incldue <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef struct list {
	Node *head;
} List;

//--
List *create_list();



int main(int argc, char **argv) {
  return 0;
}

