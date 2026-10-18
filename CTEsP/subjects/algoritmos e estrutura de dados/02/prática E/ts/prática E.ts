let pauta: number[] = [2401, 2405, 2410, 2413, 2420, 2422]
let numeroprocurar = 241;

function numeropauta(): any {
  for (let contador = 0; contador < pauta.length; contador = contador + 1) { // contador++
  if (pauta[contador] === numeroprocurar) {
    return "está na posição"
    }
  } return "não existe"
} 

numeropauta();
