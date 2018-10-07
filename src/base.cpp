#include"base.h"

base* base::baza = nullptr;
base* base::getInstance()
{
	if(baza == nullptr)
		baza = new base;
	return baza;
}
void base::openBase()
{
	sqlite3_open(nameBase, &db);
}
