#include<stdio.h>

int main()
{
    enum months {January=1,February,March,April};
    enum months x;
    printf("Enter Month:");
    scanf("%d",&x);
    switch(x)
    {
    case January:
    printf("January");
    break;

    case February:
    printf("February");
    break;
    deafult:printf("Not a month");
    break;
    }
	return 0;
}
