/*
���е�Jvav�Լ��޸İ汾��Ҫ�������ļ�
����Ҫ�޸�Ϊ��Ӧ���Լ���������Ϣ 
*/
#include<string>
class Au{
	public:
		std::string Auth="Lampese@github";
		std::string Auth_Ret(){
			return Auth;
		}
};
Au Author;
class Jvav{
	public:
		std::string version="1.0";
		std::string who_repo="�ٷ����а汾";
		std::string repo="github.com/JVAV-LANG/JVAV";
		std::string Version_Ret(){
			return version;
		}
		std::string Wr_Ret(){
			return who_repo;
		}
		std::string repo_Ret(){
			return repo; 
		} 
};
Jvav My_Jvav;
