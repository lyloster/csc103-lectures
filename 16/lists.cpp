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
	printList(L);
	return 0;
}

/* TODO: (if you haven't already)
 * write another program, similar to the above, which reads all
 * of stdin into a list *in the same order* (the above reverses the
 * order). */
/* TODO: write a function that takes a pointer to a node, and clears
 * the list (frees all memory it was using) and sets the pointer to
 * NULL to indicate it is empty.  (There's an outline in the notes.) */
/* TODO: write a function that reverses a list.  Bonus questions: perform
 * this task with only a constant amount of additional storage (don't
 * allocate another list, but instead just rearrange the pointers in
 * the already present nodes).  */
