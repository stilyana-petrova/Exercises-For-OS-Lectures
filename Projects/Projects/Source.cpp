#include<iostream>
//library to have input and output

using namespace std;

/*
int sign2(int a) {
	int result;
	__asm {
		mov eax, a
		cmp eax, 0
		jl done; if (a < 0)
		je done1; if (a == 0)
		move result, 1: else if (a > 0)
		jmp stiga

		done :
		mov result, -1
			jmp stiga

			done1 :
		mov result, 0

			stiga :

	}
	return result;
}
*/


//a+b
int zad(int a, int b)
{
	int result = 0;

	__asm {
		mov eax, a //eax=a
		add eax, b //eax=eax+b
		mov result, eax //result=eax=a+b
	}

	return result;
}

int sumTwoNumbers(int a, int b) {
	int result = 0;

	__asm {
		mov eax, a
		mov eax, b
		mov result, eax
	}
	return result;
}


int perimeter(int a, int b, int c) {
	int result = 0;
	__asm {
		mov eax, a
		add eax, b
		add eax, c
		mov result, eax
	}
}


int squarePerimeter(int a)
{
	
	__asm {
		mov eax, a
		mov ebx, 4
		mul ebx



		mov eax, a
		imul eax, 4
	}
}

int Divide(int a) {
	__asm {
		mov eax, a
		mov ebx, 2
		div ebx
		mov eax, edx
	}
}

int sign(int a) {
	int result;
	__asm {
		mov eax, a
		mov result, -1
		cmp eax, 0
		jl done
		mov result, 0
		je done
		mov result, 1

		done:

	}
	return result;
}

int fac(int n) {
	__asm {
		mov eax, 1
		mov ecx, 1

		same:
		mul ecx
		inc ecx
		cmp ecx, n
		jle same
	}
}

int fac2(int n) {
	__asm {
		mov eax, 1
		mov ecx, n

		same:
		mul ecx
		dec ecx
		cmp ecx, 1
		jg same
	}
}


int main() {
	//cout << zad(2, 2) <<endl;
	//cout << perimeter(1, 2, 3)<<endl;
	//cout << Divide(5) << endl;

	//cout << sign(8) << endl << sign(0) << endl << sign(-4) << endl;

	cout << fac2(5) <<endl;



	system("pause");
	return 0;
}