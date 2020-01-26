#include<stdio.h>

void push(void);
void display(void);
void pop(void);
void count(void);

int top=-1;
int a[5];
int i;
int cou=0;

int main()
{
  int ch=1;

  while(ch!=0)
  {
	clrscr();

	printf("\n  0.exit");
	printf("\n  1.push");
	printf("\n  2.display");
	printf("\n  3.pop");
	printf("\n  4.count");
	printf("\n-->enter your choice<--");
	scanf("%d",&ch);

	switch(ch)
	{
	  case 0 :
			  exit(0);
			  break;
	  case 1 :
			  push();
			  break;
	  case 2 :
			  display();
			  break;
	  case 3 :
			  pop();
			  break;
	  case 4 :
			  count();
			  break;
	  default :
			  printf("\n INVALID");
	}
	  getch();
  }
  getch();
  return 0;
}
void push(void)
{
  if (top>=4)
  {
	printf("\n stack is overflow");
  }
  else
  {
	top++;
	printf("\n-->enter value");
	scanf("%d",&a[top]);
  }
}
void display(void)
{
  if(top==-1)
  {
	printf("\n stack is empty");
  }
  else
  {
	for(i=top;top>=0;top--)
	{
		printf("\n %d",a[top]);
	}
	top=i;
  }
}
void pop(void)
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		top--;
	}
}
void count(void)
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		for(i=top;top>-1;top--)
		{
			cou=cou+1;
		}
		printf("\n %d",cou);
		cou=0;
		top=i;
	}
}
