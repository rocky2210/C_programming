// Escape sequences

/*
    Escape sequences are special combinations of characters used in strings 
    and character literals to represent characters that are difficult or 
    impossible to represent directly.
*/

/*
	Escape sequence
		\n new like
		\t horizontal tab
		\b backspace
		\r carriage return
		\a audible bell
		\' print single quotation
		\" print double quotation
		\? print question mark
		\\ back slash
		\f Form feed
		\v vertical tab
		\0 Null value
		\nnn print octal value
		\xhh print hexadecimal value
*/

#include <stdio.h>
int main(){

	printf("New line \n new line\n");
	printf("\t horizontal tab\n");
	printf("Watch \b this is back space\n");
	printf("demo for return\r carriage\n");
	printf("audiable bell \a\n");
	printf("\'single quotation\'\n");
	printf("\"Double quotation\"\n");
	printf("Question mark\?");
	printf("back slash \\\n");
	printf("Form feed\f");
	printf("\v Vertical tab");
	//printf("\n null val\0ue");
	printf("\n octal: \110\145\154\154\157");
	printf("\n hexadecimal: \x48\x65\x6c\x6c\x6f\n");

	return 0;    
}