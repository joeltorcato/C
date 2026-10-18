let pauta: number[] = [2401, 2405, 2410, 2413, 2420, 2422]
let numeroprocurar = 2422;

for (let contador = 0; contador <= 6; contador = contador + 1) {
  if (pauta[contador] == numeroprocurar) {
    console.log("está na posição", contador + 1)
  } else {
      console.log("não existe")
  }
}
