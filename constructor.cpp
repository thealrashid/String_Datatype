#include"header.h"

String::String()
{
	ptr = new char[0];
}

String::String(const char *s)
{
	ptr = new char[strlen(s)+1];
	strcpy(ptr, s);
}

String::String(String &s)
{
	ptr = new char[strlen(s.ptr)+1];
	strcpy(ptr, s.ptr);
}

String::~String()
{
	delete[] ptr;
}

