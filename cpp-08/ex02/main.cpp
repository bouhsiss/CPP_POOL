#include"MutantStack.hpp"


int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "# MYYYY TESTS #" << std::endl;
	MutantStack<int> myMstack;
	for(int i = 0; i < 10; i++)
		myMstack.push(i);
	for(MutantStack<int>::iterator iter = myMstack.begin(); iter != myMstack.end(); iter++)
		std::cout << (*iter) << std::endl;
	return(0);
}