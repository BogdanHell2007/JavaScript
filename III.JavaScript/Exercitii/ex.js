// pagina pentru testarea sau gasirea solutiilor intr o problema

function countdown(n) {
    if (n < 0) {
        return; // Cazul de bază - când ajunge la un număr mai mic de 0, funcția se oprește
    }
    console.log(n);
    countdown(n - 1); // Funcția se apelează pe ea însăși cu n-1
}

countdown(5); 0