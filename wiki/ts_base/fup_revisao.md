# Revisão

- O que é TypeScript e como ele se relaciona com o JavaScript?
- O TypeScript é um superset do JavaScript, isso quer dizer que é como se fosse uma versão melhorada do JavaScript.
  
- Porque dizemos que Typescript é transpilado ao invés de compilado?
- Sgnifica que o código TypeScript precisa ser convertido em JavaScript antes de ser executado em navegadores ou servidores (como no Node.js), fazendo com que ele funcione em qualquer lugar em que o JavaScript consiga ser compilado.

- Qual é a diferença entre variáveis ​​declaradas com `var`, `let` e `const` em TypeScript?
- O let é uma variavel que pode variar seu valor, ao contrario do const, que uma vez declarado não pode ser modificado. Ao contrario dos dois, o Var é uma variavel que pode ser usada em diferentes ocasiões, por ser de escopo global, pode ser acessada tanto no meio do codigo como em algumas estruturas tipo de repetição (ao contrario do let i que só pode ser usado dentro da estrutura).
  
- Como você define um tipo explícito para uma variável em TypeScript?
- Quando usamos o tipo da variavel na frente de sua declaração
  
- O que é inferência de tipos?
- É como se é chamado a ação do TypeScript de atribuir o tipo da variável só em você dar o valor dela, sem explicitar o tipo 
  
- Qual a diferença entre atribuição de tipo e inicialização de variável? Me dê um exemplo de variável inicializada e não inicializada.
- let i = 0; let i :number;
  
- Qual valor possui uma variável não inicializada?
- undefined
  
- Quais os três tipos de dados primitivos em TypeScript?
- number, string, boolean

- Quais os três tipos de dados que representam "ausência de valor" em TypeScript? Quando usar cada um deles?
- null, undefined e void
  
- O que é o tipo `any` em TypeScript?
- Quando ele aceita qualquer tipo de valor em alguma variavel
  
- Crie uma variável que pode ser do tipo `string` ou `number`.
- let i: number | string;
 
- Como você declara um array de números em TypeScript?
- let i: number[] = [];
 
- Como converter de `string` para `number` em TypeScript?
- Adicionar um sinal de + na frente da variavel ou usar o método Number();
 
- Como converter de `number` para `string` em TypeScript?
- Usar o método String();

- Dado um número quebrado, como você arredonda ele para baixo?
- Usando o método Math.floor()
  
- Como verificar se uma variável que pode ser `null` possui um valor?
- usando um condicional simples: var !== null = tem valor.
  
- Se `for` e `while` podem fazer a mesma coisa, por que usar um em vez do outro?
- o for usamos como se fossemos criar uma linha de um ponto para o outro, equanto no while ele vai criando a linha com o tempo, até certa condição ocorrer
