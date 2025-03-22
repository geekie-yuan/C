#include <stdio.h>

int lengthOfLastWord(char* s) {
    char* p = s;
    char* q;
    int cout_blank = 0;
    while(*p != '\0'){
        p++;
    }
    q = --p;
    while(*q == ' '){
        q--;
        cout_blank++;   
    }
    while(*q != ' ' && q != s){
    q --;   
    }
    if(q == s && *q !=' ')
    	return p - q - cout_blank + 1;
    else
    return p - q - cout_blank;
}

int main(void){
	char str[] = "VPtCBexbhyOqEHWMpF  VJOZpC";
	int a = lengthOfLastWord(str);
	printf("%d", a);
}

