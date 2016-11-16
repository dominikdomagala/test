#include <iostream>

int main(int argc, char* argv[])
{
	Bank *bnk;
	if(argc <= 2)
		bnk = new Bank(argv[1]);
	else
		bnk = new Bank("NBP");
	return 0;
}
