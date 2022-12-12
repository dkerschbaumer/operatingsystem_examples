#!/bin/bash

# Schreiben Sie ein Shell script, dass 1 Dateinamen als Argument erhält und den Inhalt
# Zeile für Zeile ausgibt. Jede Zeile sollte dabei in folgenden Format ausgegeben werden:
# "Line <number>: <content>", wobei <number> die aktuelle Zeilennummer ist und <content>
# der aktuellen Inhalt der Zeile ist. 

filename=$1 # get the first argument
n=1
while read line; do
	echo "Line $n: $line"
	n=$((n+1))
done < $filename # input the file