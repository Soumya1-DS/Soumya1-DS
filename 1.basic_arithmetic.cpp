#include<stdio.h>
#include<conio.h>

void Add();  // function declaration
void Sub();
void multi();
void div();

int main()
{
Add();   		// function call
Sub();
multi();
div();
getch();
return(0);
}


/*function for addition*/
void Add()						  //	function defination
{
int x,y,sum;
//x=10;
//y=5;
printf("\n.....Addition....");
printf("\n Enter value of x=");
scanf("%d",&x);
printf("\n Enter value of y=");
scanf("%d",&y);

sum=x+y;
printf("\nAddition of two no=%d", sum);
}

/*function for subtraction*/
void Sub()
{
int x,y,sub;
//x=10;
//y=5;
printf("\n.....Subtraction....");
printf("\n Enter value of x=");
scanf("%d",&x);

printf("\n Enter value of y=");
scanf("%d",&y);
sub=x-y;
printf("\nsubtraction of two no=%d", sub);
}

/*function for Multiplication*/
void multi()
{
int x,y,multi;
//x=10;
//y=5;
printf("\n.....Multiplication....");
printf("\n Enter value of x=");
scanf("%d",&x);

printf("\n Enter value of y=");
scanf("%d",&y);
multi=x*y;
printf("\nMultiplication of two no=%d", multi);
}

/*function for division*/
void div()
{
int x,y,div;
//x=10;
//y=5;
printf("\n.....Division....");
printf("\n Enter value of x=");
scanf("%d",&x);
printf("\n Enter value of y=");
scanf("%d",&y);
div=x/y;
printf("\nDivision of two no=%d", div);
}