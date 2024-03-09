#include"header.h"

int main()
{
	String s1, s5, s6, s7, s8; // Default constructor
	String s2("Hello"), s3("World"); // Parameterized constructor
	String s4(s3); // Copy constructor
	
	s1 = s2; // Assignment operator overloaded
	
	cout<<"s1: ";
	for(int i=0;s1[i];i++) cout<<s1[i]; // Subscript operator overloaded
	cout<<endl;
	
	cout<<"s2: "<<s2<<endl<<"s3: "<<s3<<endl<<"s4: "<<s4<<endl;
	
	s5 = s2 + s3; // + operator overloaded
	cout<<"s5: "<<s5<<endl;
	
	cout<<"Enter the string: ";
	cin>>s6; // >> operator overloaded
	cout<<"s6: "<<s6<<endl; // << operator overloaded
	
	/* Relational operators */
	cout<<"(s1>s2): "<<(s1>s2)<<endl; // > operator overloaded
	cout<<"(s1>=s2): "<<(s1>=s2)<<endl; // >= operator overloaded
	cout<<"(s1<s2): "<<(s1<s2)<<endl; // < operator overloaded
	cout<<"(s1<=s2): "<<(s1<=s2)<<endl; // <= operator overloaded
	cout<<"(s1==s2): "<<(s1==s2)<<endl; // == operator overloaded
	cout<<"(s1!=s2): "<<(s1!=s2)<<endl; // != operator overloaded
	
	/* Friend functions */
	cout<<"Length of s1: "<<str_len(s1)<<endl;
	
	str_cpy(s7, s1);
	cout<<"s7: "<<s7<<endl;
	
	str_ncpy(s8, s3, 3);
	cout<<"s8: "<<s8<<endl;
	
	str_cat(s7, s3);
	cout<<"s7: "<<s7<<endl;
	
	str_ncat(s7, s2, 2);
	cout<<"s7: "<<s7<<endl;
	
	cout<<"Comparing s2 and s3: ";
	if(str_cmp(s2, s3) == 0) cout<<"equal"<<endl;
	else cout<<"not equal"<<endl;
	
	cout<<"Comparing first 10 characters of s5 and s7: ";
	if(str_ncmp(s5, s7, 10) == 0) cout<<"equal"<<endl;
	else cout<<"Not equal"<<endl;
	
	cout<<"Searching \"World\" in s5: ";
	char *str = str_str(s5, "World");
	if(str == NULL) cout<<"Not found"<<endl;
	else cout<<str<<endl;
	
	cout<<"Searching 'l' in s1: ";
	char *str1 = str_chr(s1, 'l');
	if(str1 == NULL) cout<<"Not found"<<endl;
	else cout<<str1<<endl;
	
	cout<<"Searching 'l' in s1 from the back: ";
	char *str2 = str_rchr(s1, 'l');
	if(str2 == NULL) cout<<"Not found"<<endl;
	else cout<<str2<<endl;
	
	cout<<"Convert s1 to uppercase: ";
	str_upper(s1);
	cout<<s1<<endl;
	
	cout<<"Convert s1 to lowercase: ";
	str_lower(s1);
	cout<<s1<<endl;
	
	cout<<"Toggle s7 characters: ";
	str_toggle(s7);
	cout<<s7<<endl;
	
	cout<<"Reverse s3: ";
	str_rev(s3);
	cout<<s3<<endl;
}












