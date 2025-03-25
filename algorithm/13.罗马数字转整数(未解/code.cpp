#include <stdio.h>

int romanToInt(char* s) {
    int sum =0;
    switch(*(s++)){
        case 'I':
            sum= romanToInt(s) + 1;
            break;
        case 'V':
        	if(romanToInt(s) > *s)
            	sum = romanToInt(s) + 5;
            else
            	sum = romanToInt(s) + 5 - 2;
            break;
        case 'X':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 10;
            else
            sum = romanToInt(s) + 10 - 2;
            break;
        case 'L':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 50;
            else
            sum = romanToInt(s) + 50 - 20;
            break;
        case 'C':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 100;
            else
            sum = romanToInt(s) + 100 - 20;
            break;
        case 'D':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 500;
            else
            sum = romanToInt(s) + 500 - 200;
            break;
        case 'M':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 1000;
            else
            sum = romanToInt(s) + 1000 - 200;
            break;
        default:
            return 1001; 
    }
    return sum;
}

int main() {
    char roman[] = "LVIII";
    printf("Roman numeral %s is %d\n", roman, romanToInt(roman));
    return 0;
}                   
