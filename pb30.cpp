#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void insert(int x, Node** head)
{
	if (*head == NULL) {
		*head = new Node;
		(*head)->data = x;
		(*head)->next = NULL;
		return;
	}
	Node* temp = new Node;
	temp->data = (*head)->data;
	temp->next = (*head)->next;
	(*head)->data = x;
	(*head)->next = temp;
}

void print(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* merge(Node* firstNode, Node* secondNode)
{
	Node* merged = new Node;
	Node* temp = new Node;

	merged = temp;
	while (firstNode != NULL && secondNode != NULL) {

		if (firstNode->data <= secondNode->data) {
			temp->next = firstNode;
			firstNode = firstNode->next;
		}

		else {
			temp->next = secondNode;
			secondNode = secondNode->next;
		}
		temp = temp->next;
	}

	while (firstNode != NULL) {
		temp->next = firstNode;
		firstNode = firstNode->next;
		temp = temp->next;
	}

	while (secondNode != NULL) {
		temp->next = secondNode;
		secondNode = secondNode->next;
		temp = temp->next;
	}
	return merged->next;
}

Node* middle(Node* head)
{
	Node* slow = head;
	Node* fast = head->next;

	while (!slow->next && (!fast && !fast->next)) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

Node* sort(Node* head)
{
if(head == NULL){
	return NULL ;
}

	if (head->next == NULL) {
		return head;
	}

	Node* mid = new Node;
	Node* head2 = new Node;
	mid = middle(head);
	head2 = mid->next;
	mid->next = NULL;
	Node* finalhead = merge(sort(head), sort(head2));
	return finalhead;
}
int main
{
	Node* head = NULL;
	int n[] = { 7, 10, 5, 20, 3, 2 };
	for (int i = 0; i < 6; i++) {
		insert(n[i], &head); 
	}
	cout << "Sorted Linked List is: \n";
	print(sort(head)); 
	return 0;
}
