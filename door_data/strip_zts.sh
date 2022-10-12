cat "$1"| rg -o "(\[\d+\.\d+\]|angular.*,H)" | rg -o "(\d+\.\d+\]|z,.*,H)"| tr "\n" " " | tr "H" "\n"| sed "s/] z//g"| sed -E "s/.*]//g"

