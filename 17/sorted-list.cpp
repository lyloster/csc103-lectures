#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data; /* value of node */
	node* next; /* pointer to the next element */
};

void printList(node* L)
{
	node* p = L; /* p points to current node to be printed. */
	while (p != NULL) {
		/* print data at p; update p to next node to be printed. */
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
}

/* TODO: read stdin into a *sorted* list.  The below gives you a start,
 * but it is far from complete. */
int main()
{
	int x; /* holds input. */
	node* L = NULL; /* pointer to beginning of list */
	node* q = L; /* looks for first value larger than x */
	node* p = NULL; /* p points to node before q */
	cin >> x;
	/* warm-up: generic case of insertion into middle of list: */
	/* find where n goes: */
	while (q != NULL && q->data < x) {
		/* advance q,p */
		p = q;
		q = q->next;
	}
	/* now add new node between p and q: */
	node* n = new node;
	n->data = x;
	n->next = q;
	n->next = q;
	if (p == NULL) { /* x goes at very beginning. */
		L = n;
	} else { /* not at very beginning */
		p->next = n;
	}
	return 0;
}
