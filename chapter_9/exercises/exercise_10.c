/*
 * 10. Write a function called dictionarySort() that sorts a dictionary, 
 *     as defined in Programs 9.9 and 9.10, into a alphabetical order.
 */

#include <stdio.h>

struct entry
{
  char word[15];
  char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
  int i = 0, answer;
  
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    ++i;
  
  if (s1[i] < s2[i])
    answer = -1;             /* s1 < s2 */
else if (s1[i] == s2[i])
  answer = 0;              /* s1 == s2 */
else
  answer = 1;              /* s1 > s2 */

return answer;
}

void dictionarySort(struct entry dictionary[], const int entries)
{
  int i, j, answer;
  int compareStrings (const char s1[], const char s2[]);
  struct entry temp;
  
  for (i = 0; i < entries - 1; ++i)
    for (j = i; j < entries; ++j) {
      answer = compareStrings(dictionary[i].word, dictionary[j].word);
      
      if (answer == 1) {
        temp = dictionary[i];
        dictionary[i] = dictionary[j];
        dictionary[j] = temp;
      }
    }
}

// Display dictionary's word
void displayDictionary (const struct entry dictionary[], const int entries)
{
  for (int i = 0; i < entries; ++i)
    printf("%s\n", dictionary[i].word);
}

int main (void)
{
  struct entry dictionary[100] =
    { { "aardvark", "a burrowing African mammal"        },
      { "aigrette", "an ornamental cluster of feathers" },
      { "aerie",    "a high nest"                       },
      { "affix",    "to append; attach"                 },
      { "abyss",    "a bottomless pit"                  },
      { "addle",    "to become confused"                },
      { "agar",     "a jelly make from seaween"         },
      { "ajar",     "partially opend"                   },
      { "ahoy",     "a nautical call of greeting"       },
      { "acumen",   "mentally sharp; keen"              }
    };
  
  int  entries = 10;
  void dictionarySort (struct entry dictionary[], const int entries);
  void displayDictionary (const struct entry dictionary[], const int entries);
  
  dictionarySort(dictionary, entries);
  displayDictionary(dictionary, entries);
  
  return 0;
}