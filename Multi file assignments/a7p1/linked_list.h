struct list{
	int value;
	struct list *p;
};

struct list * push_back ( struct list * dynlist , int value );
struct list * beginning ( struct list * dynlist , int value );
void print_list ( struct list * dynlist );
void dispose_list ( struct list * dynlist );
struct list * removefirst ( struct list * dynlist );



