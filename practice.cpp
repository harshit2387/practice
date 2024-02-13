//leap year

/*#include<stdio.h>
int main(){
	int y,n;
	printf("y: "); 
	scanf("%d",&y);
	 (n%400==0 && n%100) == 0 ?printf("leap year"):printf("not a leap year");              //parser tree is make by syntsx anlyzer	
}*/
// class 12:38
// umber of bits we can shift is positve or 0

/*#include <stdio.h>
int main(){
	int n, f, l, s;
	printf("enter four digit number");
	scanf("%d",&n);
	f=n%10;
	l=n/1000;
	s=l+f;
	printf("%d",s);
}*/
/*#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter a number: ");
scanf("%d %d",&a,&b);                  // 37/7 divition has remainder 6 and qousant is 5.2
c=a/b;
d=a%b;
printf("value of divide is:%d",c);
printf("\n value of mod is:%d",d);/
}*/
/*
#include<stdio.h>
int main()

{

int a, last, rev=0;

printf("enter 4 digit number: ");

scanf("%d",&a);

last=a%10;

rev=rev*10+last;

a=a/10;

last=a%10;

rev=rev*10+last;

a=a/10;

last=a%10;

rev=rev*10+last;

a=a/10;

rev=rev*10+a;

printf("reverse number is %d",rev);

}*/



/*#include <stdio.h>
int main(){
	int a,b;
	float c,d;
		scanf("%d %d ", &a,&b);
		scanf("%f %f",&c ,&d);
		
		printf("%d ",a+b);
		printf("%d",a-b);
		printf("\n%0.1f", c+d);
		printf("%0.1f",c-d);
}*/
/*
#include<stdio.h>
int main(){
	int c,d,e;
	float a, b;
	
	printf("Enter a distace:%1f km",a);
	scanf("%f",&a);
	b = a*1000;
	printf("%f kilometer : %f  m",a,b);
	
}
*/

/*#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("Enter a number: ");
	scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
	f=a+b+c+d+e;
	printf("the sum is %d ",f);
}*/

/*#include<stdio.h>
int main(){
	int i=2,j=3,k,l;
	float a,b;
	k=i/j*j;
	l=j/i*i;
	a=i/j*j;
	b=j/i*i;
	printf("%d%d %f%f\n",k,l,a,b);
	return 0;
	
}*/

/*#include<stdio.h>
int main(){
	float a=5,b=2;
	int c;
	c=a%b;
	printf("%d\n",c);
	return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
	int a,b,e;
	printf("enter a expo:  ");
	scanf( "%d %d ",&a,&b);
	e=pow(a,b);
	printf("%d",e);
}*/


/*#include<stdio.h>
int main(){
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);
	printf("ASCII value of %c=%d",c,c);
	return 0;
}*/

// program of if else condition 
/*#include<stdio.h>
int main(){
	int h,c,t;
	scanf("%d %d %d",&h,&c,&t);
	
	if((h>50) && (c<0.7) && (t>5600))
		printf("grade is 10 if all three condition are met");
	if((h>50) && (c<0.7)|| (t>5600))
		printf("case 2");
	if ((c<0.7) && (t>5600)||(t>5600))
		printf("case3");
	return 0;
}*/


/*#include<stdio.h>
int main(){
	int a,b,c,sum;
	
	printf("Enter two side a and b and greatest side c");
	scanf("%d %d %d",&a,&b,&c);
	
	sum=a+b;
	if (sum >  c){
		printf("the sum is greater than third side valid tri ");
	}
	else{
		printf("not a valid triangle");
	}
}
*/




/*#include<stdio.h>
int main(){
	int sp,cp,p;
	printf("Enter sp and cp: ");
	scanf("%d %d ",&sp,&cp);
	p=sp - cp;
	if(p>sp-cp){
		printf("the profit is %d",p);
	}
	else{
		printf("the loss is %d",p);
	}
	
}
*/

/*#include<stdio.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	if (a%2==0){
		printf("the number is even");
	}
	else{
		printf("the number is odd");
	}
	
}*/

/*#include<stdio.h>

#include<conio.h>
int main()
{
    //basic year is chosen as the least year which user can enter through the keyboard where it should be Monday on 01th of January
    int year, basic_year=1900, leap_year, remaining_year, total_days, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    year = (year-1)-basic_year; //we are calculating the total years between basic year and input year

    //Now calculate the leap years
    leap_year = year/4;

    //calculate the year which are not leap years
    remaining_year = year - leap_year;

    //calculate total days present in all years
    //remaining years are not leap year so total days in single year will be 365
    //But in leap year we have 366 days in a single year
    total_days = (remaining_year*365) + (leap_year*366) + 1;

    //Find the actual day
    day = total_days%7;

    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}
}*/


#include<stdio.h>
int main(){
	int x1,x2,x3,y1,y2,y3,area;
	printf("enter the coordinate x1: ");
	scanf("%d",&x1);
	printf("\n enter the coordinate x2: ");
	scanf("%d",&x2);
	printf("\n Enter the coordinate x3: ");
	scanf("%d",&x3);
	printf("\n Enter the coordinate y1: ");
	scanf("%d",&y1);
	printf("\n Enter the coordinate y2: ");
	scanf("%d",&y2);
	printf("\n Enter the coordinate y3: ");
	scanf("%d",&y3);
	area= x1*( y2 - y3 ) + x2 * ( y3 - y1 ) + x3*( y1 - y2 ) ;
	if (area==0){
		printf("line are colliner");
	}
	else{
		printf("line are not colliner ");
	}
}
























