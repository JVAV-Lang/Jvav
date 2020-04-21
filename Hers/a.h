inline int Addition(int num1,int num2){
	int x=num1^num2;
	int y=num1&num2;
	while(y!=0){
		y=y<<1;
		int temp=x;
		x=x^y;
		y=temp&y;
	}
	return x;
}
inline long Addition(long num1,long num2){
	long x=num1^num2;
	long y=num1&num2;
	while(y!=0){
		y=y<<1;
		long temp=x;
		x=x^y;
		y=temp&y;
	}
	return x;
}
inline long long Addition(long long num1,long long num2){
	long long x=num1^num2;
	long long y=num1&num2;
	while(y!=0){
		y=y<<1;
		long long temp=x;
		x=x^y;
		y=temp&y;
	}
	return x;
}
inline int Subtraction(int num1,int num2){
	int x=num1^num2;
	int y=x&num2;
	while(y!=0){
		y=y<<1;
		x=x^y;
		y=x&y;
	}
	return x;
}
inline long Subtraction(long num1,long num2){
	long x=num1^num2;
	long y=x&num2;
	while(y!=0){
		y=y<<1;
		x=x^y;
		y=x&y;
	}
	return x;
}
inline long long Subtraction(long long num1,long long num2){
	long long x=num1^num2;
	long long y=x&num2;
	while(y!=0){
		y=y<<1;
		x=x^y;
		y=x&y;
	}
	return x;
}
