+ACM-include+ADw-iostream+AD4-

using namespace std+ADs-

int Add(int a, int b)+ADs- //+BD8EQAQ+BEIEPgRCBDgEPw- +BEQEQwQ9BDoERgQ4BDg-
int Sub(int a, int b)+ADs-
int Mul(int a, int b)+ADs-
double Div(int a, int b)+ADs-


void main()
+AHs-
	setlocale(LC+AF8-ALL, +ACI-Russian+ACI-)+ADs-
	int x, y+ADs-
	cout +ADwAPA- +ACIEEgQyBDUENAQ4BEIENQ- +BDQEMgQw- +BEcEOARBBDsEMA-: +ACIAOw- cin +AD4APg- x +AD4APg- y+ADs-
	int c +AD0- Add(x, y)+ADs- // +BDgEQQQ/BD4EOwRMBDcEPgQyBDAEPQQ4BDU- +BEQEQwQ9BDoERgQ4BDg- - +BDIESwQ3BD4EMg- +BEQEQwQ9BDoERgQ4BDg-
	cout +ADwAPA- x +ADwAPA- +ACI- +- +ACI- +ADwAPA- y +ADwAPA- +ACI- +AD0- +ACI- +ADwAPA- c +ADwAPA- endl+ADs-
	cout +ADwAPA- x +ADwAPA- +ACI- - +ACI- +ADwAPA- y +ADwAPA- +ACI- +AD0- +ACI- +ADwAPA- Sub(x, y) +ADwAPA- endl+ADs-
	cout +ADwAPA- x +ADwAPA- +ACI- +ACo- +ACI- +ADwAPA- y +ADwAPA- +ACI- +AD0- +ACI- +ADwAPA- Mul(x, y) +ADwAPA- endl+ADs-
	cout +ADwAPA- x +ADwAPA- +ACI- / +ACI- +ADwAPA- y +ADwAPA- +ACI- +AD0- +ACI- +ADwAPA- Div(x, y) +ADwAPA- endl+ADs-
+AH0-

int Add(int a, int b) //+BEAENQQwBDsEOAQ3BDAERgQ4BE8- +BEQEQwQ9BDoERgQ4BDg- (+BD4EPwRABDUENAQ1BDsENQQ9BDgENQ- +BEQEQwQ9BDoERgQ4BDg-)
+AHs-
	int c +AD0- a +- b+ADs-
	return c+ADs-
+AH0-

int Sub(int a, int b)
+AHs-
	return a - b+ADs-
+AH0-

int Mul(int a, int b)
+AHs-
	return a +ACo- b+ADs-
+AH0-

double Div(int a, int b)
+AHs-
	return (double)a / b+ADs-
+AH0-
