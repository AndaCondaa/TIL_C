#include <stdio.h>
#include <stdlib.h>


struct NODE {
	struct NODE* next;
	int data;
};

NODE* append(NODE* before, int data);
void removeAll(NODE* head);
void remove(NODE* head, int data);
NODE* push(NODE* prev, int main);
void hash_regi(NODE* hash[], NODE* node);


int main()
{
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;
	head->data = 0;
	NODE* node = (NODE*)malloc(sizeof(NODE));
	NODE* hash[11];

	//0~100���� ���������� ���
	for (int i = 1; i <= 100; i++)
	{
		node = append(head, i);
	}
	//���
	for (auto node = head; node != NULL; node = node->next)
	{
		printf("%d ", node->data);
	}
	printf("\n");
	printf("\n***************�ؽ�***************\n");
	//hash�� ����(������ ���� 10������)
	for (auto node = head; node != NULL; node = node->next)
	{
		hash_regi(hash, node);
	}
	//hash ������ �� ���
	for (int i = 0; i < 11; i++)
	{
		printf("%d ", hash[i]->data);
	}
	printf("\n");


	//REMOVE
	printf("\n***************����***************\n");
	for (int i = 1; i < 70; i++)
	{
		remove(head, i);
	}
	for (auto node = head; node != NULL; node = node->next)
	{
		printf("%d ", node->data);
	}
	printf("\n");


	//PUSH
	printf("\n***************Ǫ��***************\n");
	for (int i = 100; i < 111; i++)
	{
		push(head, i);
	}
	for (auto node = head; node != NULL; node = node->next)
	{
		printf("%d ", node->data);
	}
	printf("\n");

	//hash ������ �� ��� -> remove �� �͵��� ������ �� ���
	printf("\n***************�ؽ�***************\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%d ", hash[i]->data);
	}
	printf("\n");


	return 0;
}

NODE* append(NODE* head, int data)
{
	NODE* curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	return push(curr, data);
}

NODE* push(NODE* prev, int data)
{
	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->next = prev->next;
	new_node->data = data;

	if (prev != NULL)
		prev->next = new_node;

	return new_node;
}


void removeAll(NODE* head)
{
	NODE* next, *curr = (NODE*)malloc(sizeof(NODE));
	for (curr = head; curr != NULL; curr = next)
	{
		if (curr->next == NULL)
		{
			free(curr);
			break;
		}
		next = curr->next;
		free(curr);
	}
}


void remove(NODE* head, int data)
{
	NODE* prev , * curr = NULL;
	for (NODE* curr = head; curr != NULL; curr = curr->next)
	{
		if (curr->data == data)
		{
			prev->next = curr->next;
			free(curr);
			curr = prev;
		}
		prev = curr;
	}
}

void hash_regi(NODE* hash[], NODE* node)
{
	if ((node->data % 10) == 0)
		hash[(int)(node->data / 10)] = node;
}