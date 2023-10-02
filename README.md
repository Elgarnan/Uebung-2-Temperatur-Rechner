Aufgabe 02: Temperatur-Rechner
In dieser Aufgabe soll ein Programm entwickelt werden, das es erlaubt, Temperaturen in verschiedenen Einheiten umzurechnen. Es soll es dabei sein, eine Temperatur in einer wählbaren Einheit einzugeben und dann eine andere Einheit zu wählen, in die diese dann umgerechnet wird.
Vorbereitung:


Das gewünschte Programm wurde bereits zum Teil entwickelt (siehe Vorlage). Erschließen Sie sich zunächst das gegebene Programm.


In die Konversionen haben sich Bugs eingeschlichen, so dass die berechneten Temperaturen teilweise falsch sind. Denken Sie sich eine sinnvolle Menge an Testfällen aus, finden Sie die Fehler und korrigieren Sie diese.


in der Übung:


Das Programm sollte eigentlich durch eine Eingabe von 0 bei der ersten Frage direkt abbrechen, und nicht nach Abfrage weiterer Eingaben, die dann ja sinnlos sind. Modifizieren Sie das Programm so, dass das Programm direkt nach Eingabde der 0 abbricht.


Machen Sie das Programm robuster, indem Sie nur sinnvolle Eingaben bei der Einheitenauswahl erlauben. Die Abfrage einer Einheit soll so lange wiederholt werden, bis eine korrekte Einheit eingegeben wurde. (Tipp: Um im C-Programm zu prüfen, ob zwei Bedingungen gleichzeitig erfüllt sind, benutzt man den &&-Operator, also z.B. (x>50) && (x<100), wenn x größer als 50 und kleiner als 100 sein soll).


Erweitern Sie das Programm um die Einheit Grad Rømer. 0°Rø entsprechen dem Schmelzpunkt von Salzlake (-14,3°C), und 60°Rø entsprechen dem Siedepunkt von Wasser (100°C).


Zusatz-Aufgaben für Fortgeschrittene:


Stellen Sie das Ergebnis zusätzlich durch ein ASCII-Art-Thermometer dar (siehe Beispiel unten). Linkes Ende des Thermometers soll immer der Schmelzpunkt von Wasser sein (0°C), rechter Endpunkt der Siedepunkt von Wasser (100°C). Beispielsweise soll für 20°C die folgende Anzeige generiert werden.


Machen Sie das Programm noch robuster, indem Sie nur sinnvolle Eingaben erlauben. Ergänzen Sie dazu eine Abfrage, sodass  nur gültige Temperaturen (über dem absoluten Nullpunkt 0 Grad Kelvin) eingegeben werden können.



--------------------------------------------------
**********
--------------------------------------------------
0 deg C                                  100 deg C
