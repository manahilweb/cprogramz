/*write a program to enter an expression and display its result when = is entered.*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int num=0,res;
	char ch,sign; 
	int first=1;
	while (ch!= '=')
	{
		ch = getche();
		if (ch>='0' && ch<='9')
		num = num*10+(ch-48);
		else if (first==1) //only one time condition perform first ==1
		{
			res= num;
			num=0;
			first=0;
			sign=ch;
		}
		else {
			switch (sign)
			{
				case '+':
					res=res+num;
					sign=ch;
					num=0;
					break;
				case '-':
					res = res -num;
					sign=ch;
					num=0;
					break;
				case '*':
					res = res * num;
					sign=ch;
					num=0;
					break;
				case '/':
					res = res / num;
					sign=ch;
					num=0;
					break;
				case '%':
					res = res % num;
					sign= ch;
					num=0;
					break;
			}
		}
	}
	printf("%d",res);
}
