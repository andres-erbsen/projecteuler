seq 2 $1 | factor | grep -v '[0-9] [0-9]' | cut -d' ' -f 2
