#include <iostream>
#define LGMAX 251
using namespace std;
bool cifra(char);
void copieCifre(char*, char*, int&);
int main()
{
	char s[LGMAX], t[LGMAX], nr[2*LGMAX];
	int lg = 0;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	copieCifre(s, nr, lg);
	copieCifre(t, nr, lg);
	nr[lg] = 0;
	cout << nr;
	return 0;
}
void copieCifre(char* s, char* d, int& lg)
{
	for (char* c = s; *c; c++)
		if (cifra(*c))
			d[lg++] = *c;
}
bool cifra(char c)
{
	return c >= '0' && c <= '9';
}
