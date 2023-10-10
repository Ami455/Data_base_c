#ifndef data_base
#define data_base

typedef struct customer {
 char name[20];
 int id;
 char type[10];
 double cash;
}customer;

enum numbers
 {
 n=3,trials=3
 };

void enter_data(void);
void edit_data(void);
void print_data(void);
void transfer(int source,int destination,double amount);
void delete_cus(int Id);
#endif // data_base
