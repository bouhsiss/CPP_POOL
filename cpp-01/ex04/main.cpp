#include<iostream>
#include<fstream>


void ft_replace(std::string &buffer, std::string s1, std::string s2){
	std::string NewBuffer = "";
	int i = 0;
	int j = 0;

	while(buffer.length() != 0 ){
		i = 0;
		if(buffer.find(s1,0) == std::string::npos){
			NewBuffer.append(buffer);
			i += buffer.length();
		}
		else{
			while(i < buffer.find(s1)){
				NewBuffer = NewBuffer + buffer[i];
				i++;
			}
			NewBuffer.append(s2);
			i += s1.length();
		}
		buffer.erase(0, i);
	}
	buffer = NewBuffer;
}



int main(int ac, char **av){
	std::string s1 = av[1];
	std::string s2 = av[2];
	std::string filename = av[3];
	std::ifstream indata;
	std::ofstream ofdata;
	std::string buffer;
	if(ac == 4){
		indata.open(filename);
		if(!indata)
			std::cerr << "error: could not open file" << std::endl;
		if(indata.is_open())
			getline(indata, buffer);
		ft_replace(buffer, s1, s2);
		filename = filename + ".replace";
		ofdata.open(filename);
		ofdata << buffer;
		ofdata.close();
	}
}