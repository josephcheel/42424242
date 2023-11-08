#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct node {
	int value;
	struct node* next;
	struct node* prev;

};
typedef struct node node_t;

void printlist(node_t *head)
{
	node_t *temporary = head;

	while(temporary != NULL)
	{
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
}

void insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
	newnode->next = node_to_insert_after->next;
	node_to_insert_after->next = newnode;
}

node_t	*create_new_node(int value)
{
	node_t *result = malloc(sizeof(node_t));

	result->value = value;
	result->next = NULL;
	return (result);
}

node_t	*insert_at_head(node_t **head, node_t *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return (node_to_insert);
}

node_t *find_node(node_t *head, int value)
{
	node_t *tmp = head;

	while (tmp)
	{	
		if (tmp->value == value)
			return tmp;
		tmp = tmp->next;
	}
	return (NULL);
}

int main()
{
	//node_t n1, n2 ,n3, n4	;
	node_t *head;
	node_t *tmp;
	
	head = NULL;
	for(int i = 0; i<=100000; i++ )
	{
		tmp = create_new_node(i);
		tmp->next = head;
		head = tmp;
		//insert_at_head(&head, tmp);
	}
	tmp = find_node(head, 18313);

 	printf("found node %d\n", tmp->value);
	// tmp = create_new_node(13);
	// head = tmp;
	// tmp = create_new_node(14);
	// insert_at_head(&head, tmp);
	// tmp = create_new_node(15);
	// insert_at_head(&head, tmp);
	// tmp = create_new_node(16);
	// insert_at_head(&head, tmp);
	// tmp = create_new_node(17);
	// insert_at_head(&head, tmp);
	// tmp = create_new_node(18);
	// insert_at_head(&head, tmp);
	// tmp = find_node(head, 18);
	// printf("found node %d\n", tmp->value);
	// insert_after_node(tmp, create_new_node(20));

	//printlist(head);
}
