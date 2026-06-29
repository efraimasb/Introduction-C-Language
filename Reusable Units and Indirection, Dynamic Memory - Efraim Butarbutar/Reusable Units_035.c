//Efraim Asidovanio Butarbutar
//14S21035

#include <stdio.h>
#include <string.h>
enum type_t { Type_Noun, Type_Verb };

struct word_t {
	char word[21];
	char meaning[101];
	enum type_t type;
};
struct word_t create_word(char *_word, enum type_t _type) {
	struct word_t word;
	strcpy(word.word, _word);
	word.type = _type;
	return (word);
}
int main(int _argv, char **_argc) {
	struct word_t word = create_word("Institut", Type_Noun);
	strcpy(word.meaning, "Teknologi, Del");
	printf("%s#%s#%d\n", word.word, word.meaning, word.type);
	return 0;
}
