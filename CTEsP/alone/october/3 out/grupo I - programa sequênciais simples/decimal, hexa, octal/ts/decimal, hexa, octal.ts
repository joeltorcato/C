let readline = require('readline');

let rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
})

rl.question ("escreve um número em decimal: ", (decimal: number) => {
  console.log(`hexa: ${decimal.toString(16)}`)
  console.log(`octal: ${decimal.toString(8)}`)

  rl.close()
})
