#!/bin/bash
#
# Program: 
#   This program is to create a single chapter folder by input number
# Usage:
#   `sh build_chapter.sh n`, n is the chapter number


export PATH=/bin:sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin

chapter_name=chapter_${1}

if [[ ! -d "${chapter_name}" ]]; then
  echo "The ${chapter_name} is not exist, then create ${chapter_name} now"
  mkdir -p ${chapter_name}/{examples,exercises}
  touch ${chapter_name}/${chapter_name}.md
else
  echo "The ${chapter_name} already exist"
fi

exit 0
