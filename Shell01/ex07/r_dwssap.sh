cat -e /etc/passwd | grep -v '^#' | awk 'FNR % 2 == 0' | sed -n 's/\:.*//p' | rev | sort -r | awk 'FNR >= 7 && FNR <=15' | tr '\n' ',' | sed 's/\,/, /g' | sed 's/, $/./'
