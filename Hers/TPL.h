#include<cstring>
inline int read(){
	int w=1,s=0;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')w=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		s=(s<<1)+(s<<3)+(ch^48);
		ch=getchar();
	}
	return w*s;
}
inline int un_read(){
	int s=0;
	char ch=getchar();
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){
		s=(s<<1)+(s<<3)+(ch^48);
		ch=getchar();
	}
	return s;
}
inline long long l_read(){
	long long w=1,s=0;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')w=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		s=(s<<1)+(s<<3)+(ch^48);
		ch=getchar();
	}
	return w*s;
}
inline long long l_u_read(){
	long long s=0;
	char ch=getchar();
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){
		s=(s<<1)+(s<<3)+(ch^48);
		ch=getchar();
	}
	return s;
}
