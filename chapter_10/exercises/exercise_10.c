/*
 * 10. Rewrite the compareStrings() function from Chapter 9 to use character
 *     pointers instead of arrays.
 */

#include <stdio.h>

struct entry
{
  char word[15];
  char definition[50];
};

// Function to compare two character strings

int compareStrings (char * const s1, char * const s2)
{
  int answer;
  char *a = s1, *b = s2;
  
  while ((*a == *b) && (*a != '\0') && (*b != '\0')) {
    ++a;
    ++b;
  }
  
  if (*a < *b)
    answer = -1;             /* s1 < s2 */
  else if (*a == *b)
    answer = 0;              /* s1 == s2 */
  else
    answer = 1;              /* s1 > s2 */

  return answer;
}

// Function to look up a word inside a dictionary

int lookup (struct entry *dictionary, 
            char *search, const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compareStrings (char * const s1, char * const s2);
  struct entry *dicPtr = dictionary;
  
  while (low <= high)
  {
    mid = (low + high) / 2;
    result = compareStrings ((dicPtr + mid)->word, search);
    
    if (result == -1)
      low = mid + 1;
    else if (result == 1)
      high = mid - 1;
    else 
      return mid; /* found it */
  }
  
  return -1;      /* not found */
}

int main (void)
{
  struct entry dictionary[100] =
    { {"aardvark", "a burrowing African mammal"       },
      {"abyss",    "a bottomless pit"                 },
      {"acumen",   "mentally sharp; keen"             },
      {"addle",    "to become confused"               },
      {"aerie",    "a high nest"                      },
      {"affix",    "to append; attach"                },
      {"agar",     "a jelly make from seaween"        },
      {"ahoy",     "a nautical call of greeting"      },
      {"aigrette", "an ornamental cluster of feathers"},
      {"ajar",     "partially opend"                  }
    };
  
  char word[15];
  int  entries = 10;
  int  entry;
  int  lookup (struct entry *dictionary, 
               char *search, const int entries);
  
  printf("Enter word: ");
  scanf("%14s", word);
  entry = lookup(dictionary, word, entries);
  
  if (entry != -1)
    printf("%s\n", dictionary[entry].definition);
  else
    printf("Sorry, the word %s is not in my dictionary.\n", word);
  
  return 0;
}