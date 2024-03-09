#include"header.h"

String& String::operator = (String s)
{
	ptr = new char[strlen(s.ptr)+1];
	strcpy(ptr, s.ptr);
	
	return *this;
}

String operator + (const String &s1, const String &s2)
{
	String s;
	s.ptr = new char[strlen(s1.ptr)+strlen(s2.ptr)+1];
	strcpy(s.ptr, s1.ptr);
	strcat(s.ptr, s2.ptr);
	return s;
}

char& String::operator [] (int n)
{
	return ptr[n];
}

ostream& operator << (ostream &out, String s)
{
	out<<s.ptr;
	return out;
}

istream& operator >> (istream &in, String &s)
{
	ofstream fout;
	fout.open("temp");
	char ch;
	while(in.get(ch) && ch != '\n')
	{
		fout.put(ch);
	}
	fout.close();
	
	ifstream fin;
	fin.open("temp");
	fin.seekg(0, ios::end);
	long unsigned int size = fin.tellg();
	fin.seekg(0, ios::beg);
	s.ptr = new char[size];
	fin.read(s.ptr, size);
	fin.close();
	remove("temp");
	return in;
}

bool String::operator > (String s)
{
	if(strcmp(ptr, s.ptr) > 0) return 1;
	else return 0;
}

bool String::operator < (String s)
{
	if(strcmp(ptr, s.ptr) < 0) return 1;
	else return 0;
}

bool String::operator >= (String s)
{
	if(strcmp(ptr, s.ptr) >= 0) return 1;
	else return 0;
}

bool String::operator <= (String s)
{
	if(strcmp(ptr, s.ptr) <= 0) return 1;
	else return 0;
}

bool String::operator == (String s)
{
	if(strcmp(ptr, s.ptr) == 0) return 1;
	else return 0;
}

bool String::operator != (String s)
{
	if(strcmp(ptr, s.ptr) != 0) return 1;
	else return 0;
}
