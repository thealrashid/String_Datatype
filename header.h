#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<cstring>
using namespace std;

class String
{
	char *ptr;
	public:
	String();
	String(const char *);
	String(String&);
	~String();
	
	/* Operator overloaded functions */
	String& operator = (String);
	friend String operator + (const String &, const String &);
	char& operator [] (int);
	friend ostream& operator << (ostream &, String);
	friend istream& operator >> (istream &, String &);
	bool operator > (String);
	bool operator < (String);
	bool operator >= (String);
	bool operator <= (String);
	bool operator == (String);
	bool operator != (String);
	
	/* Functions */
	friend int str_len(const String&);
	friend void str_cpy(String&, const String&);
	friend void str_ncpy(String&, const String&, int n);
	friend void str_cat(String&, const String&);
	friend void str_ncat(String&, const String&, int n);
	friend int str_cmp(const String&, const String&);
	friend int str_ncmp(const String&, const String&, int n);
	friend char * str_str(const String&, const char *);
	friend char *str_chr(const String&, const char);
	friend char *str_rchr(const String&, const char);
	friend void str_upper(String&);
	friend void str_lower(String&);
	friend void str_toggle(String&);
	friend void str_rev(String&);
};

