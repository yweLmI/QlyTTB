#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<xlocale>
#include<ctype.h>
void ChuanHoa(char *s,int length) {
	int first = 0; int  last = length - 1;
	while (first < last && s[first] == ' ')
		first++;
	while (last > first && s[last] == ' ')
		last--;
	for (int j = first; j <= last ; j++) {
		if (s[j] >= 'A' && s[j] <= 'Z') {
			s[j] += 32;
		}if (j + 1 <= last) {
			if (s[j] == s[j+1] && s[j] == ' ') {
				for (int k = j; k <= last; k++)
					s[k] = s[k + 1];

			}
		}
		if (j == 0 || s[j] == ' ') {
			s[j + 1] = toupper(s[j + 1]);
			s[0] = toupper(s[0]);
		}
	}
}
int main() {
	char s[50];
	printf("Nhap vao day xau can chuan hoa:\n");
	fgets(s,sizeof s,stdin);
	int length = strlen(s) - 1;
	s[length] = '\0';
	ChuanHoa(s, length);
	printf("Ho va ten sau khi da chuan hoa la:\n");
	printf("%s\n",s);

	return 0;
}