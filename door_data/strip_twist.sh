cat "$1" | grep Irintensity | egrep -o  "gular,x,.*,y,.*,z,.*,H" | egrep -o "x.*" | sed -E "s/x|y|x| |z|H/_/g" | sed -E "s/_,|_$//g"
