/*
 * Program 9.10 Modifying the Dictionary Lookup Using Binary Search
 * 
 * Binary Search Algorithm
 *  Step 1: Set low to 0, high to n - 1.
 *  Step 2: If low > high, x doew not exist in M and the algorithm terminates.
 *  Step 3: Set mid to (low + high) / 2.
 *  Step 4: If M[mid] < x, set low to mid + 1 and go to step 2.
 *  Step 5: If M[mid] > x, set high to mid - 1 and go to step 2.
 *  Setp 6: M[mid] equals x and the algorithm terminates.
 *  
 */

#include <stdio.h>

struct entry
{
  char word[15];
  char definition[50];
};

// Function to compare two character strings

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

// Function to look up a word inside a dictionary

int lookup (const struct entry dictionary[], 
            const char search[], const int entries)
{
  int low = 0;
  int high = entries - 1;
  int mid, result;
  int compareStrings (const char s1[], const char s2[]);
  
  while (low <= high)
  {
    mid = (low + high) / 2;
    result = compareStrings (dictionary[mid].word, search);
    
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
  const struct entry dictionary[100] =
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
  int  loopup (const struct entry dictionary[], 
               const char search[], const int entries);
  
  printf("Enter word: ");
  scanf("%14s", word);
  entry = lookup(dictionary, word, entries);
  
  if (entry != -1)
    printf("%s\n", dictionary[entry].definition);
  else
    printf("Sorry, the word %s is not in my dictionary.\n", word);
  
  return 0;
}
