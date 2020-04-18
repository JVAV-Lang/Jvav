#include<cstdio>
#include<cstring>
#include "jvav.h"
bool flag=true;
bool str_pd(string a){
	for(int i=0;i<a.size();i++)
		if(a[i]=='('||a[i]==')')return false;
	return true;
}
bool str_pdd(string a){ 
	for(int i=0;i<a.size();i++)
		if(a[i]=='{')return true;
	return false;
}
int main(){
	freopen("in.sc","r",stdin);
	freopen("out.cpp","w",stdout);
	cout<<"#define number int\n#define long_number long\n#define ll_number long long\n#define str string\n#define ch char\n#define taf bool\n#define fl double\n";
	string temp,tem,ai,bi,ci;
	while(true){
		cin>>temp;
		if(temp=="import"){
			cin>>tem;
			cout<<"#include<"<<tem<<">"<<endl;
			continue;
		}
		if(temp=="using"){
			getline(cin,tem);
			cout<<"using"<<tem<<";"<<endl;
			continue;
		}
		if(temp=="namespace"){
			getline(cin,tem);
			cout<<"namespace"<<tem<<endl;
			continue;
		}
		if(temp=="number"||temp=="long_number"||temp=="ll_number"||temp=="str"||temp=="ch"||temp=="taf"||temp=="fl"){
			getline(cin,tem);
			if(str_pd(tem)==false)cout<<temp<<tem<<endl;
			else cout<<temp<<tem<<";"<<endl;
			continue;
		}
		if(temp=="break"||temp=="continue"){
			cout<<temp<<";"<<endl;
			continue;
		}
		if(temp=="{"||temp=="}"){
			cout<<temp<<endl;
			continue;
		}
		if(temp=="c"){
			getline(cin,tem);
			cout<<tem<<endl;
			continue;
		}
		if(temp=="if"){
			getline(cin,tem);
			if(str_pdd(tem)==true){
				tem.erase(tem.size()-1,1);
				cout<<"if("<<tem<<"){"<<endl;
			}
			else
			cout<<"if("<<tem<<")"<<endl;
			continue;
		}
		if(temp=="else"){
			getline(cin,tem);
			if(str_pdd(tem)==true)
				cout<<"else{"<<endl;
			else
				cout<<"else"<<tem; 
			continue; 
		}
		if(temp=="ftd"){
			getline(cin,tem);
			if(str_pdd(tem)==true){
				tem.erase(tem.size()-1,1);
				cout<<"for("<<tem<<"){"<<endl;
			}
			else
			cout<<"for("<<tem<<")"<<endl;
			continue;
		}
		if(temp=="return"){
			getline(cin,tem);
			cout<<"return"<<tem<<";"<<endl;
			continue;
		}
		if(temp=="end-in")break;
		if(temp=="enu"){
			cin>>tem>>ai;
			if(ai=="-")	ai="i";
			cout<<"for("<<"int "<<ai<<"=0;"<<ai<<"<sizeof("<<tem<<")/sizeof("<<tem<<"[0]);"<<ai<<"++)"<<endl;
			continue;
		}
		if(temp=="enu.c"){
			cin>>tem>>ai>>bi;
			if(tem=="-")tem="i";
			cout<<"for(int "<<tem<<"="<<ai<<";"<<tem<<"<"<<bi<<";"<<tem<<"++)"<<endl;
			continue;
		}
		if(temp=="define"){
			cin>>tem;
			getline(cin,ai);
			cout<<"#define "<<tem<<ai<<endl;
			continue;
		}
		if(temp=="class"){
			getline(cin,tem);
			cout<<"class"<<tem<<endl;
			continue; 
		}
		if(temp=="function"){
			cin>>tem;
			function(tem);
			continue;
		}
		cout<<temp<<endl;
		} 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
