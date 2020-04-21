/*
所有的Jvav以及修改版本都要包含此文件
而且要修改为对应的自己的作者信息 
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
		std::string who_repo="官方发行版本";
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
