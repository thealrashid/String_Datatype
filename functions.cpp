#include"header.h"

int str_len(const String &s)
{
	int l = 0;
	for(int i=0;s.ptr[i];i++) l++;
	return l;
}

void str_cpy(String &s1, const String &s2)
{
	if(s1.ptr != NULL) delete[] s1.ptr;
	s1.ptr = new char[str_len(s2)+1];
	int i;
	for(i=0;s2.ptr[i];i++) s1.ptr[i] = s2.ptr[i];
	s1.ptr[i] = '\0';
}

void str_ncpy(String &s1, const String &s2, int n)
{
	if(s1.ptr != NULL) delete[] s1.ptr;
	s1.ptr = new char[n+1];
	int i;
	for(i=0;i<n;i++) s1.ptr[i] = s2.ptr[i];
	s1.ptr[i] = '\0';
}

void str_cat(String &s1, const String &s2)
{
	int i, j;
	char * temp = new char[str_len(s1)+str_len(s2)+1];
	for(i=0;s1.ptr[i];i++) temp[i] = s1.ptr[i];
	delete[] s1.ptr;
	for(j=0;s2.ptr[j];j++,i++) temp[i] = s2.ptr[j];
	temp[i] = '\0';
	s1.ptr = temp;
	temp = NULL;
}

void str_ncat(String &s1, const String &s2, int n)
{
	int i, j;
	char *temp = new char[str_len(s1)+n+1];
	for(i=0;s1.ptr[i];i++) temp[i] = s1.ptr[i];
	delete[] s1.ptr;
	for(j=0;j<n;j++,i++) temp[i] = s2.ptr[j];
	temp[i] = '\0';
	s1.ptr = temp;
	temp = NULL;
}

int str_cmp(const String &s1, const String &s2)
{
	const char *ptr1 = s1.ptr, *ptr2 = s2.ptr;
	while(*ptr1 != '\0' && *ptr2 != '\0')
	{
		if(*ptr1 > *ptr2) return 1;
		else if(*ptr1 < *ptr2) return -1;
		ptr1++;
		ptr2++;
	}
	
	if(*ptr1 == '\0' && *ptr2 != '\0') return -1;
	if(*ptr1 != '\0' && *ptr2 == '\0') return 1;
	
	return 0;
}

int str_ncmp(const String &s1, const String &s2, int n)
{
	const char *ptr1 = s1.ptr, *ptr2 = s2.ptr;
	int i = 0;
	while(*ptr1 != '\0' && *ptr2 != '\0' && i<n)
	{	
		if(*ptr1 > *ptr2) return 1;
		else if(*ptr1 < *ptr2) return -1;
	
		ptr1++;
		ptr2++;
		i++;
	}
	
	if(*ptr1 == '\0' && *ptr2 != '\0' && i<n) return -1;
	if(*ptr1 != '\0' && *ptr2 == '\0' && i<n) return 1;
	
	return 0;
}

char *str_str(const String &s1, const char *s2)
{
	if(*s2 == '\0') return s1.ptr;
	const char *ptr1=s1.ptr;
	for(int i=0;ptr1[i];i++)
	{
		const char *h = ptr1+i, *n = s2;
		while(*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if(*n == '\0') return s1.ptr+i;
	}
	
	return NULL;
}

char *str_chr(const String &s, const char ch)
{
	for(int i=0;s.ptr[i];i++)
	{
		if(s.ptr[i] == ch) return s.ptr+i;
	}
	return NULL;
}

char *str_rchr(const String &s, const char ch)
{
	int i;
	for(i=0;s.ptr[i];i++);
	for(i--;i>=0;i--)
	{
		if(s.ptr[i] == ch) return s.ptr+i;
	}
	return NULL;
}

void str_upper(String &s)
{
	for(int i=0;s.ptr[i];i++)
	{
		if(s.ptr[i] >= 'a' && s.ptr[i] <= 'z') s.ptr[i] -= 32;
	}
}

void str_lower(String &s)
{
	for(int i=0;s.ptr[i];i++)
	{
		if(s.ptr[i] >= 'A' && s.ptr[i] <= 'Z') s.ptr[i] += 32;
	}
}

void str_toggle(String &s)
{
	for(int i=0;s.ptr[i];i++)
	{
		if(s.ptr[i] >= 'a' && s.ptr[i] <= 'z') s.ptr[i] -= 32;
		else if(s.ptr[i] >= 'A' && s.ptr[i] <= 'Z') s.ptr[i] += 32;
	}
}

void str_rev(String &s)
{
	int i = 0, j = str_len(s)-1;
	while(i<j)
	{
		char t = s.ptr[i];
		s.ptr[i] = s.ptr[j];
		s.ptr[j] = t;
		
		i++;
		j--;
	}
}

