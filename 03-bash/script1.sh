#!/bin/bash

# Schreiben Sie ein Shell Script, dass zunächst in einen Unterordner "test"
# wechselt. Sollte dieser Ordner nicht existieren, muss dieser 
# zunächst angelegt werden und dann hineingewechselt werden.

# In diesem Unterverzeichnis sollen dann 5 Dateien erstellt werden.
# (test1.txt, test2.txt, test3.txt, test4.txt, test5.txt)
# Für die Erstellung dieser Dateien muss ein Loop verwendet werden!
# In jede dieser Dateien soll folgender Text geschrieben werden: 
# "This is tesfile <number>", wobei <number> die aktuelle Nummer der Datei
# ist. Für die Datei test4.txt wäre der Text also: "This is testfile 4".

if [ ! -d test ]; then
	mkdir test
fi

cd test

for i in {1..5}
do
	echo "This is test "$i > test$i.txt
done
