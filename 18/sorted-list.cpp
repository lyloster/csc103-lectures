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

void remove(node*& L, int x)
{
	/* step 0: setup pointers q,p where q is either
	 * NULL, or points to a node with value x, and
	 * p is one node behind q. */
	node* q = L;
	node* p = NULL;
	/* now move the pointers, looking for value x */
	while (q != NULL && q->data != x) {
		p = q;
		q = q->next;
	}
	/* figure out why loop ended: did we find x? */
	if (q != NULL) { /* we found x. */
		if (p != NULL) p->next = q->next;
		else L = q->next;
		delete q;
	}
}

/* exercise: read stdin into a *sorted* list. */
int main()
{
	int x; /* holds input. */
	node* L = NULL; /* pointer to beginning of list */
	while (cin >> x) {
		/* warm-up: generic case of insertion into middle of list: */
		/* find where n goes: */
		node* q = L; /* looks for first value larger than x */
		node* p = NULL; /* p points to node before q */
		while (q != NULL && q->data < x) {
			/* NOTE: above is only safe due to short-circuit evaluation! */
			/* advance q,p */
			p = q;
			q = q->next;
		}
		/* now add new node between p and q: */
		node* n = new node;
		n->data = x;
		n->next = q;
		if (p == NULL) { /* x goes at very beginning. */
			L = n;
		} else { /* not at very beginning */
			p->next = n;
		}
	}
	printList(L);
	cout << "trying to remove 7...\n";
	remove(L,7);
	printList(L);
	return 0;
}

/* TODO: try to re-write the above (building a sorted list, and the remove
 * function) from scratch. */
/* TODO: write a function that reverses a list.  To make the most out of
 * this exercise, perform the reversal simply by redirecting the pointers.
 * Don't call new or delete, and don't swap the values in different nodes. */

