cat "$1" | grep Irintensity | egrep -o  "value,\[.*]," | cut -d, -f 4,5,8,9,12,13,16,17,20,21,24,25,28,29 | sed -E "s/]//" | sed -E "s/ir/\nir/" | 
sed -E "s/,ir/\nir/" | sed -E "s/,ir/\nir/" | sed -E "s/,ir/\nir/" | sed -E "s/,ir/\nir/" | sed -E "s/,ir/\nir/" | sed -E "s/,ir/\nir/" ; echo
