const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('escreve o valor em metros: ', (metros: number) =>
{
  const decimetros = metros * 10;
  const centimetros = metros * 100;
  const milimetros = metros * 1000;

  console.log(`decímetros: ${decimetros}`)
  console.log(`centímetros: ${centimetros}`)
  console.log(`milímetros: ${milimetros}`)
})

// programa infinito
