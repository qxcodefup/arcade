---
name: question-test-authoring
description: Create or expand automated cases in an Arcade activity's tests.toml, using the task contract and Go reference solution. Use when the user asks to add or generate tests for questions.
---

# Testes para questões do Arcade

Use esta skill para aumentar ou criar os casos de uma questão em `labs/<atividade>/tests.toml`.

## Fluxo

1. Leia o `AGENTS.md`, o README da atividade, `tests.toml` e `src/go/main.go`. Extraia do enunciado os formatos de entrada e saída, limites, garantias e casos especiais. Não invente limites nem mude o contrato. Se o enunciado e os testes existentes divergirem, descreva a divergência antes de redefinir o comportamento.
2. Conte os casos existentes. Quando o pedido não especificar outra meta, busque um total de aproximadamente `30` a `50` casos; acrescente apenas o necessário e não remova casos existentes para atingir essa faixa.
3. Combine casos direcionados com entradas aleatórias válidas. Inclua limites e situações distintas do contrato, como valores mínimos e máximos, zeros, negativos, repetições, entradas curtas e combinações que testem regras diferentes. Use gerador pseudoaleatório com semente fixa para que as entradas possam ser reproduzidas. Gere dentro dos limites declarados, evite entradas duplicadas e não use valores que provoquem overflow fora do contrato.
4. Acrescente cada caso como um bloco `[[tests]]` em `tests.toml`, preservando os casos preexistentes. Mantenha exatamente o formato de linhas e separadores esperado pelo programa.
5. Obtenha a saída esperada executando a solução Go com a entrada de cada caso, ou calculando-a de forma independente quando o resultado for simples. Confira manualmente exemplos, limites e casos especiais para não copiar um erro da solução de referência. Se um caso preexistente estiver inconsistente, reporte-o; altere-o somente quando isso estiver dentro da autorização dada pelo usuário.
6. Valide a atividade a partir de sua pasta com `tko run . -l go`. A opção `--down` apenas apresenta diferenças verticalmente; ela não calcula nem grava saídas em `tests.toml`. Use-a opcionalmente para facilitar a leitura de falhas.
7. Só depois de todos os casos passarem, acrescente `<!-- NEW-TESTS -->` ao final da linha da atividade correspondente no `README.md` principal. Não duplique o marcador.

## Limites de edição

- Edite os casos em `tests.toml` apenas na atividade solicitada.
- Não edite, mova, gere ou reformate os marcadores `<!-- tests ... -->`, o conteúdo entre eles ou `<!-- end -->` nos READMEs. Não execute `mdpp`, `tko build` nem outros processadores de Markdown como parte da criação dos casos.
- Não marque a revisão com `<!-- REVIEW_DONE -->` só por ter ampliado os testes; esse marcador requer uma revisão completa conforme o `AGENTS.md`.
- Ao concluir, informe o total de casos, a semente e a faixa usada para os valores aleatórios, o resultado do TKO e quaisquer inconsistências encontradas.
