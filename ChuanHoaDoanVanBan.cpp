#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<xlocale>
void Chuanhoa(char* s, int length) {
	int first = 0;
	int last = length - 1;
	while (first < last && s[first] == ' ') {
		first++;
	}
	while (last > first&& s[last] == ' ') {
		last--;
	}
	for (int i = first; i <= last; i++) {
		if (i + 1 <= last) {
			if (s[i] == s[i + 1] && s[i] == ' ') {
				for (int k = i; k <= last; k++) {
					s[k] = s[k + 1];
				}
			}
			if (s[i] == ' ' && s[i + 1] == ',') {
				for (int k = i; k <= last; k++) {
					s[k] = s[k + 1];
				}
			}
		}
	}
	for (int i = first; i <= last; i++) {
		if (s[i] == ' ' && s[i + 1] == '.') {
			for (int k = i; k <= last; k++) {
				s[k] = s[k + 1];
			}
		}
	}
	for (int i = first; i <= last; i++) {
		if (s[i] == ' ' && s[i + 1] == '!') {
			for (int k = i - 1; k <= last; k++) {
				s[k] = s[k + 1];
			}
		}
	}
	for (int i = first; i <= last; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	for (int i = first; i <= last; i++) {
		if (s[i] == ' ' && s[i + 1] == ',') {
			for (int k = i; k <= last; k++) {
				s[k] = s[k + 1];
			}
		}
		for (int i = first; i <= last; i++) 
		{
			if (s[i] == '.') {
				s[i + 1] = toupper(s[i + 1]);
				s[first] = toupper(s[first]);
			}
		}
	

		if (s[i] ==' ' && s[i + 1] == '!') {
			for (int k = i; k <= last; k++) {
				s[k] = s[k + 1];
			}
		}

	}
}
int main() {
	char s[10000]="";
	FILE* p;
	int kytu = 0;
	p = fopen_s("D:\\HK2 năm 2\\Kỹ thuật lập trình\\Data\\Doan van ban.txt", "r+" );
	printf("Doan van ban can chuan hoa:\n");
	if (p != NULL) {
		
			fgets(s,10000,p);
			printf("%s", s);
		
	}
	fclose;

	int length = strlen(s) - 1;
	printf("Doan van ban sau khi da chuan hoa la:\n");
	Chuanhoa(s, length);
	printf("%s\n", s);
	return 0;
}