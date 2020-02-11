#!/bin/bash
#
# Program: 
#   This program is to create a single chapter folder by input number
# Usage:
#   `sh build_chapter.sh n`, n is the chapter number

export PATH=/bin:sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin

if [[ "$#" -ne 1 ]]; then
  echo "Usage: \"./build_chapter.sh n\", n is chapter number"
  exit 1;
fi

chapter_name=chapter_${1}

# update README.md
old="Chapter ${1}"
new="[$old]($chapter_name\/$chapter_name.md)"
sed -i "" "s/${old}/${new}/" README.md

if [[ ! -d "${chapter_name}" ]]; then

  echo "The ${chapter_name} is not exist, then create ${chapter_name} now"
  mkdir -p ${chapter_name}/{examples,exercises}
  
  # Create init files
  touch ${chapter_name}/examples/prog${1}_1.c
  touch ${chapter_name}/exercises/exercise_1.c
  
  touch ${chapter_name}/${chapter_name}.md
  echo "# Chapter ${1}" >> ${chapter_name}/${chapter_name}.md
  echo "" >> ${chapter_name}/${chapter_name}.md
  echo "## Examples" >> ${chapter_name}/${chapter_name}.md
  echo "" >> ${chapter_name}/${chapter_name}.md
  echo "* [Program ${1}.1](examples/prog${1}_1.c)" >> ${chapter_name}/${chapter_name}.md
  echo "" >> ${chapter_name}/${chapter_name}.md
  echo "## Exercises" >> ${chapter_name}/${chapter_name}.md
  echo "" >> ${chapter_name}/${chapter_name}.md
  echo "* [Exerciese 1](exercises/exercise_1.c)" >> ${chapter_name}/${chapter_name}.md
  
else
  echo "The ${chapter_name} already exist"
fi

exit 0
