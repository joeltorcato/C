let readline = require('readline');

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});



 rl.question  ('escreve o valor em metros: ', /*async*/ (metros: number) =>
{
  let decimetros = metros * 10;
  let centimetros = metros * 100;
  let milimetros = metros * 1000;

  console.log (`metros: ${metros}`)
  console.log(`decímetros: ${decimetros}`)
  console.log(`centímetros: ${centimetros}`)
  console.log(`milímetros: ${milimetros}`)

  rl.close()
})

rl.question()

export {};

// scope - await