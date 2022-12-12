#!/bin/bash

# Schreiben Sie ein Shell script, dass 2 Dateinamen als Argumente erhält und den Inhalt
# der ersten Datei bei der zweiten Datei hinten anhängt
# Z.b. Datei 1 enthält:. "Hello" und Datei 2 enthält: "Students"
# dann soll nach ausführen des Scripts in der Datei 2: "Students Hello" stehen

# Möglichkeit 1: 
filename1=$1
filename2=$2
cat $filename1 >> $filename2
  

# Möglichkeit 2:  Zeile für Zeile hineinschreiben

# filename1=$1
# filename2=$2
# while read line; do
# 	echo $line >> $filename2
# done < $filename1 