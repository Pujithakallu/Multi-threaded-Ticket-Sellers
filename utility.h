#ifndef _utility_h_
#define _utility_h_

// Define the structure for a doubly-linked list node
struct node_s {
    struct node_s *next;
    struct node_s *prev;
    void* data;
};

// Typedef for the node structure as 'node'
typedef struct node_s node;

// Define the structure for a doubly-linked list
struct linked_list_s {
    node * head;
    node * tail;
    int size;  
};

// Typedef for the linked list structure as 'linked_list'
typedef struct linked_list_s linked_list;

// Function prototypes for linked list operations
node* create_node(void* data);
linked_list * create_linked_list();
void add_node(linked_list* ll, void* data);
void remove_data(linked_list* ll, void* data);
void remove_node(linked_list* ll, node* n);
void add_after(linked_list* ll, node *after_node, void* data);
void sort(linked_list *ll, int (*cmp)(void *data1, void *data2));
void swap_nodes(node *a, node *b);

// Queue Implementation //

// Typedef for the queue structure as 'queue'
typedef struct linked_list_s queue;

// Function prototypes for queue operations
queue * create_queue();
void enqueue(queue * q, void * data);
void * dequeue(queue * q);

#endif
