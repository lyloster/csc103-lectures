#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data; /* value of node */
	node* next; /* pointer to the next element */
};

/* exercise: read all integers from stdin to a list,
 * perhaps in REVERSE order. */
int main()
{
	node* L;  /* pointer to beginning of list. */
	L = NULL; /* set L to be the empty list. */
	int x;
	while (cin >> x) {
		node* n = new node;
		n->data = x; // A->B is shorthand for (*A).B
		n->next = L; /* make new node's next point to
					    beginning of list so far. */
		L = n; /* make new node the beginning of the list. */
	}
	return 0;
}

/* TODO: write a function that takes a pointer to the beginning of a
 * list and prints the contents.  Use it to test the above.  */
/* TODO: write another program, similar to the above, which reads all
 * of stdin into a list *in the same order* (the above reverses the
 * order). */
