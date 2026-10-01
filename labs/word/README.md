# Meu word QuEbRoU - formatação de case

![_](assets/cover.jpg)

## Contexto

O seu editor de texto deu problema. Seu orientador pediu que você formatasse toda uma seção do seu trabalho em caixa alta. Como você é um fantástico programador, resolveu logo fazer algo mais completo.

Sua tarefa é criar um programa que, dado um texto e um comando de formatação, aplique a transformação solicitada. As opções de formatação são:

- **M:** Converte todas as letras para MAIÚSCULAS.
- **m:** Converte todas as letras para minúsculas.
- **p:** Converte a primeira letra de cada palavra para maiúscula, exceto para palavras de uma letra como 'a', 'e', 'o', que devem permanecer minúsculas.
- **i:** Inverte o case de cada letra (maiúscula vira minúscula e vice-versa).

### Entrada

- A primeira linha contém um texto.
- A segunda linha contém um caractere representando a formatação desejada ('M', 'm', 'p' ou 'i').

### Saída

- O texto formatado de acordo com o comando recebido.

### Restrições

- O texto terá no máximo **100** caracteres.
- A formatação deve ser aplicada apenas às letras, ignorando pontuação, espaços e números.

## Exemplos
<!-- tests tests.toml --limit 4 -->
<!-- end -->
