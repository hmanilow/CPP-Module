#include "MutantStack.hpp"

void subj()
{
	MutantStack<int> mst;

	mst.push(5);
	mst.push(17);

	std::cout << "top: " << mst.top() << std::endl;

	mst.pop();

	std::cout << "size: " << mst.size() << std::endl;

	mst.push(3);
	mst.push(5);
	mst.push(737);
	mst.push(0);

	MutantStack<int>::iterator it1 = mst.begin();
	MutantStack<int>::iterator it2 = mst.end();

	++it1;
	--it1;
	while (it1 != it2)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
}

void my()
{
	MutantStack<std::string> stack;

	stack.push("cpp");
	std::cout << "top: " << stack.top() << std::endl;

	stack.push("module");
	std::cout << "top: " << stack.top() << std::endl;

	stack.push("08");
	stack.push("eeeboiii");
	stack.push("aboba");
	stack.push("lol");
	std::cout << std::endl;
	MutantStack<std::string>::iterator i = stack.begin();
	MutantStack<std::string>::iterator j = stack.end();

	while (i != j)
	{
		std::cout << *i << std::endl;
		i++;
	}

	std::cout << "--------------------copy-----------------------" <<std::endl;
	MutantStack<std::string> lol(stack);
	lol.pop();
	lol.pop();
	lol.pop();
	MutantStack<std::string>::iterator i1 = lol.begin();
	MutantStack<std::string>::iterator j1 = lol.end();

	while (i1 != j1)
	{
		std::cout << *i1 << std::endl;
		i1++;
	}
	std::cout << "-------------------operator=-------------------" <<std::endl;
	MutantStack<std::string> kek = lol;
	MutantStack<std::string>::iterator i2 = kek.begin();
	MutantStack<std::string>::iterator j2 = kek.end();

	while (i2 != j2)
	{
		std::cout << *i2 << std::endl;
		i2++;
	}
}

int main()
{
	std::cout << "------------------subj check----------------" << std::endl;
	subj();
	std::cout << "-------------------my check-----------------" << std::endl;
	my();
	return 0;
}