#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <string>
# include <fstream>

class Replace{
	private:
			std::string _fileName;
			std::string _fileContent;
			// std::string _buff;
	public:
			Replace();
			~Replace();
			void changeContent(std::string fileName, std::string s1, std::string s2);
};

#endif