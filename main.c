#include <stdio.h>
#include "myMath.h"

int main(){
	double var;
	
	printf("Please enter a real number: ");
	scanf("%lf", &var);

	double func1first = Exponent(var);
	
	double func1sec = Power(var,3);
	
	double ans1 = sub(add(func1first,func1sec), 2);

	double func2first = mul(var,3);

	double func2sec = mul(2, Power(var, 2)); 

	double ans2 = add(func2first , func2sec);

	double func3first = div(mul(4, Power(var , 3)) , 5);

	double func3sec = mul(2, var);

	double ans3 = sub(func3first, func3sec);

	printf("The value of f(𝑥)=e^x + x^3−2 at the point %.4lf is: %.4lf\n",var,ans1 );

	printf("The value of f(𝑥)=3x + 2x^2 at the point %.4lf is %.4lf\n", var,ans2 );

	printf("The value of f(𝑥)=(4x^3)/5 - 2x at the point %.4lf is %.4lf\n", var, ans3);

	return 0;


}
