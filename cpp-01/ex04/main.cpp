#include<iostream>
#include<fstream>


void ft_replace(std::string &buffer, std::string s1, std::string s2){
	std::string NewBuffer = "";
	unsigned int i = 0;

	while(buffer.length() != 0 && !s1.empty()){
		i = 0;
		if(buffer.find(s1,0) == std::string::npos){
			NewBuffer.append(buffer);
			i += buffer.length();
		}
		else{
			NewBuffer.append(buffer, 0, buffer.find(s1));
			NewBuffer.append(s2);
			i += (buffer.find(s1) - i)  + s1.length();
		}
		buffer.erase(0, i);
	}
	buffer = NewBuffer;
}



int main(int ac, char **av){
	if(ac == 4){
	std::string s1 = av[1];
	std::string s2 = av[2];
	std::string filename = av[3];
	std::ifstream indata;
	std::ofstream ofdata;
	std::string buffer;
		indata.open(filename);
		if(!indata)
			std::cerr << "error: could not open file" << std::endl;
		if(indata.is_open()){
			filename = filename + ".replace";
			ofdata.open(filename);
			while(getline(indata, buffer)){
				ft_replace(buffer, s1, s2);
				ofdata << buffer;
				ofdata << std::endl;
			}
			ofdata.close();	
		}
	}
	else
	std::cout << "Usage: ./replace s1 s2 filname" << std::endl;
}
