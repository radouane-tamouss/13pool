#!/bin/sh
cat /etc/passwd | \
  grep -v '^#' | \
  awk "NR % 2 == 0" | \
  cut -d ':' -f 1 | \
  rev | \
  sort -r | \
  awk -v FT_LINE1="7" -v FT_LINE2="15" 'NR>=FT_LINE1 && NR<=FT_LINE2 {ORS = NR<FT_LINE2 ? ", " : "."; print}'
