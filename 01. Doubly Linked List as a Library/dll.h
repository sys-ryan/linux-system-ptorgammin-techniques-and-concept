/*Header file for Double Linked List*/

typedef struct dll_node_{
	void *data;
	struct dll_node_ *left;
	struct dll_node_ *right;
} dll_node_t;

typedef struct dll_{
	dll_node_t *head;
} dll_t;


/* Public function declaration to create and return 
 * a new empty doubly linked list */
dll_t *
get_new_dll();


/* Public function declaration to add a new application data to DLL */
/* return 0 on success, -1 on failure */
int
add_data_to_dll(dll_t *dll, void *app_data);


/* More functions */
int /* return 0 on success and -1 on failure */
remove_data_from_dll_by_data_tpr(dll_t *dll, void *data);


/* return 0 if empty, -1 if not empty */
int
is_dll_empty(dll_t *dll);


/* delete all nodes form a dll, but do not free appln data */
void 
drain_dll(dll_t *dll);
