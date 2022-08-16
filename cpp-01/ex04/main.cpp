#include<iostream>
#include<fstream>


// std::string ft_replace(std::string &buffer, std::string s1, std::string s2){
// 	std::string NewBuffer;
// 	int i;
// 	int j;
// 	int start;
// 	if(buffer.find(s1, 0) == std::string::npos)
// 		return(buffer);
// 	else{
// 		for(i = 0, i < buffer.length(), i++){
// 			for(j = 0, j )
// 		}
// 	}

}

int main(int ac, char **av){
	std::string s1 = av[1];
	std::string s2 = av[2];
	std::string filename = av[3];
	std::ifstream indata;
	std::string buffer;
	if(ac == 4){
		indata.open(filename);
		if(!indata)
			std::cerr << "error: could not open file" << std::endl;
		if(indata.is_open())
			indata >> buffer;
		ft_replace(buffer, s1, s2);		
	}
}


























void    replaceAllOccurences(
    std::string & source,
    std::string const& s1,
    std::string const& s2)
{
    std::string result = "";

    for (size_t i = 0; i < source.length(); i++)
    {
        size_t k = 0;
        if (source[i] == s1[k] && i + s1.length() <= source.length())
        {
            size_t j;
            for (j = i; j < i + s1.length(); j++)
            {
                if (source[j] != s1[k])
                    break ;
                else
                    k++;
            }
            if (j == i + s1.length())
            {
                result.append(s2);
                i = j - 1;
            }
            else
                result.push_back(source[i]);
        }
        else
            result.push_back(source[i]);
    }
    source = result;
}
