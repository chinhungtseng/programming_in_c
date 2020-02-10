/*
 * 3. The countWords() function from Programs 9.7 and 9.8 incorrectly counts
 *    a word that contains an apostrophe as two separate words.
 *    Modify this function to correctly handle this situation.
 *    Also, extend the function to count a sequence of positive or negative 
 *    numbers, including any embedded commas and periods, as a single word.
 *    
 */

#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
  if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    return true;
  else 
    return false;
}

bool isNumber (const char c)
{
  if (c >= '0' && c <= '9')
    return true;
  else
    return false;
}

bool isSpecialChar (const char c)
{
  if (c == '.' || c == '/' || 
      c == '-' || c == ',' || c == '\'')
    return true;
  else
    return false;
}

void readLine (char buffer[])
{
  char character;
  int  i = 0;
  
  do {
    character = getchar();
    buffer[i] = character;
    ++i;
  } 
  while (character != '\n');
  
  buffer[i - 1] = '\0';
}

int countWords (const char string[])
{
  int  i, wordCount = 0;
  bool lookingForWord = true, 
       alphabetic (const char c),
       isNumber (const char c),
       isSpecialChar (const char c);
  
  for (i = 0; string[i] != '\0'; ++i) {
    if (alphabetic(string[i]) || isNumber(string[i]) || 
        isSpecialChar(string[i])) {
      if (lookingForWord) {
        ++wordCount;
        lookingForWord = false;
      }
    }
    else
      lookingForWord = true;
  }
  
    return wordCount;
}

int main (void)
{
  char text[81];
  int  totalWords = 0;
  int  countWords (const char string[]);
  void readLine (char buffer[]);
  bool endOfText = false;
  
  printf("Type in your text.\n");
  printf("When you are done, press 'RETURN'.\n\n");
  
  while (!endOfText) {
    readLine(text);
    
    if (text[0] == '\0')
      endOfText = true;
    else 
      totalWords += countWords(text);
  }
  
  printf("\nThere are %i words in the above text.\n", totalWords);
  
  return 0;
}


