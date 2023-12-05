#include <rs_main.h>
#include <Windows.h>
#include <iostream>
int main()
{
	auto s = getenv("APPDATA");
	std::cout << &s;
}