#include "myMath.h"
#define E  2.718281828

double Exponent(int x){
	double ans = E;
	int expo = x;
	
	if(x==0) return 1;
	
	if(x==1) return E;
	
	//if exponent of E is negative
	if(x<0){
		expo*=-1;
		for(int i = 2; i<=expo; i++){
			ans*=E;
	}
		ans=1/ans;
		return ans;
	}
	
	for(int i = 2; i<=x; i++){
		ans*=E;
	}
	
	return ans;
}

double Power(double x, int y){
	double ans = x;
	int expo = y;
	
	if(y==0) return 1;
	
	if(y==1) return x;
	
	//if exponent input is negative
	if(y<0){
		expo*=-1;
		for(int i = 2; i<=expo; i++){
			ans*=x;
	}
		
		ans/=1;
		return ans;
	}
	
	
	for(int i = 2; i<=y; i++){
		ans*=x;
	}
	
	return ans; 
}
