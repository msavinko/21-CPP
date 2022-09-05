#include "replace.hpp"

Replace::Replace(){
}
Replace::~Replace(){
}

void Replace::changeContent(std::string fileName, std::string s1, std::string s2){
	this->_fileName = fileName;
	std::ifstream file(fileName);
	std::ofstream newFile;
	std::string buff;

	if (!file.is_open()){
		std::cout << "Wrong filename" << std::endl;
		return ;
	}
	this->_fileName = fileName.append(".replace");
	newFile.open(this->_fileName);
	while (std::getline(file, buff))
	{
		int pos;
		pos = buff.find(s1);
		while(pos != -1 && s1.length()){
			buff.erase(pos, s1.length());
			buff.insert(pos, s2);
			pos = buff.find(s1, pos + s1.length());
		}
		newFile << buff + "\n";
	}
	file.close();
	newFile.close();
}
