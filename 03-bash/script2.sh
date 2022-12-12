#!/bin/bash

# Schreibe ein Shell script, dass über alle Dateien im aktuellen Verzeichnis iteriert
# und für jede Datei eine Backup-Datei mit dem Zusatz "_bak" im Namen erstellt.
# Z.B. für die Datei "test.txt" soll eine Backup-Datei: "test.txt_bak" erstellt werden

for file in *; # loop through directory
do
	echo "backup file" $file
	cp $file $file"_bak"
done
