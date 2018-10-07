#include <sqlite3.h>

class base
{
private:
	static base* baza;
	sqlite3 *db;
	const char* nameBase = "BazaSlowek";
public:
	static base* getInstance();
	void openBase();
private:
	base() {};
	void operator=(base const&) = delete;
	base(base const&) 			= delete;
};
