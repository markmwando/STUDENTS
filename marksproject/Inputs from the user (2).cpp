#include <stdio.h>
int main()
{
	int book_id;
	int due_date;
	int _returndate;
	
	printf("Enter the book_id:");
	scanf("%d",&book_id);
	printf("The book_id is \t%d",book_id);
	
	printf("Enter due_date:");
	scanf("%d",&due_date);
	printf("due_date is \t%d\n",due_date);
	
	printf("Enter _returndate;");
	scanf("%d",&_returndate);
	printf("_returndate is \t%d\n",_returndate);
	
	return 0;
}