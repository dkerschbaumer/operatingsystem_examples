#!/bin/bash

# Schreiben Sie eine Shell script, dass einen Link als Argument erhält und 
# diesen Link mittels "wget" herunterladet. Nach dem Download soll folgender Text 
# angezeigt werden: "The content is: "
# Danach soll der Inhalt der neuen Datei Zeile für Zeile angezeigt werden. 

to_download=$1
wget $to_download -O new_filename # -O definiert den neuen Namen der Datei nach dem Download

echo "The content is: "
while read line; do
	echo $line
done < new_filename # das neue file soll zeile für zeile ausgegeben werden

rm new_filename # das file löschen nachdem es verwendet wurde