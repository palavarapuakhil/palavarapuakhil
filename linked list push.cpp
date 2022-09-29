int main()
{
	int val;
	struct node *ptr=(struct node*)malloc(size of(struct node));
	if(ptr=NULL)
	{
		printf("not able to push the element");
	}
	else
	{
		printf("enter the value");
		scanf("%d"&val);
		if(head==NULL);
	{
		ptr->val=val;
		ptr->next=NULL;
		head=ptr;
	}
	else
	{
		ptr->val=val;
		ptr->next=head;
		head=ptr;
	}
	printf("item pushed");
	}
}
