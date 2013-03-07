#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;	// data of a node: list is made of these elements
	struct Node *next;	// link to the next node
} node;

node *create_node(int val)
{
	node *n;
	n = malloc(sizeof(node));
	n->data = val;
	n->next = NULL;
	return n;
}

void print_list(node *h)
{
	node *p;
	p = h;
	while (p != NULL)
	{
		printf("%d --> ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}

int main()
{
	node *head = NULL;	// head maintains the entry to the list
	node *p = NULL, *q = NULL;
	int v = -1, a;

	printf("Inserting at end\n");

	scanf("%d", &v);
	while (v != -1)
	{
	//	q = create_node(v);
		if (head == NULL)
		{q = create_node(v);	head = q;}
		else
		{
			p = head;
			while (p->next != NULL)
				p = p->next;
			q = create_node(v);
			p->next = q;
		}
		scanf("%d", &v);
	}

	print_list(head);
}
