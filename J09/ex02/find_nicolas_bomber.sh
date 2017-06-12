cat $1 | grep -i nicolas | grep -i bomber | grep - | awk '{print $(NF-1)}'
