def trova_regione(targa):
    codice_provincia = targa[:2]
    
    # Esempio di mappatura dei codici di provincia alle regioni
    regioni = {
        "RM": "Lazio",
        "MI": "Lombardia",
        # Altri codici qui...
    }
    
    if codice_provincia in regioni:
        return regioni[codice_provincia]
    else:
        return "Regione non riconosciuta"

# Esempio di utilizzo:
targa = "RM123AB"
regione = trova_regione(targa)
print(f"La targa {targa} è stata immatricolata nella regione: {regione}")
