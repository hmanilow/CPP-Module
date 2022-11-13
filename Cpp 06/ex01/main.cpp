#include <iostream>

struct Data
{
	int val;
	std::string str;
	char c;
};

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data *tmp = new Data;
	tmp->val = 13;
	tmp->str = "Kratos";
	tmp->c = 'k';

	std::cout << "address: " << tmp << std::endl;
	std::cout << "val: " << tmp->val << std::endl;
	std::cout << "str: " << tmp->str << std::endl;
	std::cout << "c: " << tmp->c << std::endl << std::endl;

	std::cout << "±±±±±±±±±±±±±±±±±±±serialization]±±±±±±±±±±±±±±±±±±±" << std::endl;
	uintptr_t buffer = serialize(tmp);
	std::cout << tmp << " -> " << buffer << std::endl;
	std::cout << "±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±" << std::endl << std::endl;

	std::cout << "±±±±±±±±±±±±±±±±±±deserialization±±±±±±±±±±±±±±±±±±±" << std::endl;
	Data *testDeserialize = deserialize(buffer);
	std::cout << "address: " << testDeserialize << std::endl;
	std::cout << "val: " << testDeserialize->val << std::endl;
	std::cout << "str: " << testDeserialize->str << std::endl;
	std::cout << "c: " << testDeserialize->c << std::endl;
	delete tmp;
}
