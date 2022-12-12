# Bash Scripts Beispiele

**[GERMAN VERSION]**



[TOC]



## Aufgabe 1 

Schreiben Sie ein Shell Skript, dass zunächst in einen Unterordner "test" wechselt. Sollte dieser Ordner nicht existieren, muss dieser  zunächst angelegt werden und dann hineingewechselt werden.

In diesem Unterverzeichnis sollen dann 5 Dateien erstellt werden: test1.txt, test2.txt, test3.txt, test4.txt, test5.txt. Für die Erstellung dieser Dateien muss ein Loop verwendet werden! 

In jede dieser Dateien soll folgender Text geschrieben werden:  `This is testfile <number>`, wobei `<number>` die aktuelle Nummer der Datei ist. Für die Datei `test4.txt` wäre der Text also: `This is testfile 4`.

Lösung: [script1.sh](script1.sh)



------

## Aufgabe 2

Schreibe ein Shell Skript, dass über alle Dateien im aktuellen Verzeichnis iteriert und für jede Datei eine Backup-Datei mit dem Zusatz `_bak` im Namen erstellt. 

Z.B. für die Datei `test.txt` soll eine Backup-Datei: `test.txt_bak` erstellt werden.

Lösung: [script2.sh](script2.sh)



------

## Aufgabe 3

Schreiben Sie ein Shell Skript, dass einen Dateinamen als Argument erhält und den Inhalt Zeile für Zeile ausgibt. Jede Zeile sollte dabei in folgenden Format ausgegeben werden: 

`Line <number>: <content>`, wobei `<number>` die aktuelle Zeilennummer ist und `<content>`  der aktuellen Inhalt der Zeile ist.

Lösung: [script3.sh](script3.sh)



------

## Aufgabe 4

Schreiben Sie ein Shell Skript, dass zwei Dateinamen als Argumente erhält und den Inhalt der ersten Datei bei der zweiten Datei hinten anhängt.

Beispiel: Datei 1 enthält `Hello` und Datei 2 enthält `Students` als Inhalt, dann soll nach Ausführen des Skripts in der Datei 2: `Students Hello` stehen.

Lösung: [script4.sh](script4.sh)

Beispielaufruf: ./script4.sh test1.txt test2.txt 



------

## Aufgabe 5

Schreiben Sie eine Shell Skript, dass einen Link als Argument erhält und diesen Link mittels `wget` herunterladet. Nach dem Download soll folgender Text angezeigt werden: `The content is: `   

Danach soll der Inhalt der neuen Datei Zeile für Zeile angezeigt werden. Zum Schluss soll die erstellte Datei gelöscht werden.

Lösung: [script5.sh](script5.sh)

Beispielaufruf: ./script5.sh https://raw.githubusercontent.com/dkerschbaumer/operatingsystem_examples/master/05-threads/05-threads1.c
