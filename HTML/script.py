import random
import datetime
inizio = "<!DOCTYPE html><html>", 
"<head><title>Dati sensori</title></head>",
"<body><h1>Dati sensore</h1>",
"<table><tr><td>Data</td><td>Valore sensore</td></tr>"

fine = "</table></body></html>"
contenuto = ""

for n in range(5):
    contenuto += "<tr><td>"+datetime.now()+"</td><td>"
    str(random.randint(1, 30)+"°</td></tr>")
pagina = inizio + contenuto + fine