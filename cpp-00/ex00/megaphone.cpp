#include<iostream>
#include<string>

int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc > 1)
	{
		while(argv[++i])
		{
			std::string arg = argv[i];
			for(int j = 0; (unsigned)j < arg.length(); j++)
				arg[j] = toupper(arg[j]);
			std::cout << arg;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}  