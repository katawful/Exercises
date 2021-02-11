#include <iostream>
using std::cout; using std::endl; 
int main() {
	bool b; b = sizeof (bool);
	cout << "bool size is: " << b << endl;
	char c; c = sizeof (char);
	cout << "char size is: " << c << endl;
	short s; s = sizeof (short);
	cout << "short size is: " << s << endl;
	int i; i = sizeof (int);
	cout << "int size is: " << i << endl;
	long l; l = sizeof (long);
	cout << "long size is: " << l << endl;
	float f; f = sizeof (float);
	cout << "float size is: " << f << endl;
	double dd; dd = sizeof (double);
	cout << "double size is: " << dd << endl;
	int *p; p = sizeof p;
	cout << "pointer size is: " << p << endl;
	*p = sizeof *p;
	cout << "derefernced pointer size is: " << *p << endl;
	i = 1;
	int &r = i; r = sizeof &r;
	cout << "referenc size is: " << &r << endl;
}
