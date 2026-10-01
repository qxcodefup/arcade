# Orientações para agentes

## Formatação das atividades

Estas orientações se aplicam aos READMEs das atividades em `labs/`. O README da raiz é o índice do projeto e não deve receber automaticamente a estrutura das atividades.

Cada problema deve ter uma solução de referência em `src/go/main.go`. A validação da atividade deve ser feita executando `tko run . -l go` a partir da pasta da tarefa. Em tarefas que seguem este padrão, `src/` deve conter somente a pasta `go/`; remova implementações e outros conteúdos de outras linguagens abaixo de `src/` durante a revisão. Preserve os outros arquivos do projeto que estiverem fora de `src/`.

Para exercícios com entrada e saída, adote esta ordem:

1. Título da atividade.
2. Capa, quando houver.
3. Contexto: história, quando houver, e descrição clara do que o programa deve fazer.
4. Entrada: dados na ordem em que serão recebidos, incluindo linhas, tipos e separadores.
5. Saída: resultado esperado e sua formatação exata.
6. Restrições: limites e garantias existentes no enunciado.
7. Exemplos: conteúdo gerado pelos scripts, preservado integralmente.
8. Orientações: dicas opcionais, sem entregar a solução.

Use um único título de nível `#`, seções principais com `##` e subseções com `###`. Todo cabeçalho deve ter uma linha em branco antes e outra depois, exceto antes do primeiro cabeçalho no início do arquivo. Use no máximo uma linha em branco consecutiva entre blocos; remova linhas vazias duplicadas sem motivo editorial. As seções de entrada e saída devem usar obrigatoriamente `### Entrada` e `### Saída`. Padronize os nomes das seções em português: `Contexto`, `Entrada`, `Saída`, `Restrições`, `Exemplos` e `Orientações`. Inclua seções opcionais apenas quando houver conteúdo relevante; não crie seções vazias.

### Convenções de escrita

- Use parágrafos curtos e listas para regras e dados.
- Nas soluções Go, prefira entrada simples com `fmt.Scan` e saída direta usando somente `fmt.Print` e `fmt.Println`; não use `bufio.Writer` para formatar ou armazenar a saída. Quando a atividade exigir ler uma linha inteira, use `bufio.NewScanner(os.Stdin)`, confira `scanner.Scan()` e obtenha a linha com `scanner.Text()`. Se precisar extrair valores dessa linha, use `fmt.Sscan` ou divida o texto em campos. Nunca misture `fmt.Scan` com `bufio.NewScanner` na mesma solução.
- Use crases para valores literais, variáveis e funções, como `SIM`, `NAO`, `+`, `-`, `N`, `M` e `fib(n)`.
- Quando for necessário descrever nomes de variáveis, funções ou métodos nos READMEs das tarefas, use Go como linguagem de referência, seguindo suas convenções de nomenclatura. Apresente declarações, tipos e assinaturas em sintaxe válida de Go e identifique esses blocos com `go`. As explicações permanecem em português. Preserve identificadores já exigidos pelo contrato da atividade.
- Identifique os blocos de código com a linguagem correta. Use `text` para saída e pseudocódigo.
- Mantenha imagens em `assets/` e use descrições úteis no texto alternativo.
- Preserve mensagens, limites, nomes e comportamento exigidos pelo contrato da atividade. A padronização visual não autoriza alterações no contrato.
- Não invente restrições, requisitos ou detalhes ausentes do enunciado.
- Trate inconsistências de conteúdo separadamente da formatação. Quando houver versões conflitantes do contrato, apresente a divergência para decisão antes de redefinir o comportamento esperado.
- Se identificar erros ou inconsistências na descrição da atividade ou nos testes, reporte-os para correção ou melhoria. Não altere os blocos de testes gerados protegidos por estas orientações.

### Jogos e projetos interativos

Use a variante `Objetivo → Regras → Interação → Exemplos de execução → Etapas → Critérios de conclusão`. Inclua instalação quando necessária e omita seções sem conteúdo relevante.

## Acompanhamento das revisões

Use o `README.md` principal do repositório para acompanhar quais atividades tiveram sua revisão concluída. Ao concluir a revisão de uma atividade conforme estas orientações, acrescente `<!-- REVIEW_DONE -->` ao final da linha da entrada correspondente à tarefa no índice principal.

Marque apenas atividades efetivamente revisadas e concluídas. Não duplique o marcador quando ele já existir e preserve os marcadores existentes ao editar o índice. A simples definição ou atualização destas orientações não conta como revisão de uma atividade.

## Proteção dos testes gerados

Os marcadores `<!-- tests -->` e suas variantes com parâmetros, como `<!-- tests tests.toml --limit 3 -->`, são gerados e mantidos automaticamente por scripts.

O Codex não deve editar, mover, remover ou reformatar:

- o marcador de abertura `<!-- tests ... -->` e seus parâmetros;
- todo o conteúdo gerado entre a abertura e o fechamento, incluindo tabelas HTML e marcadores `<!-- INPUT -->` e `<!-- OUTPUT -->`;
- o marcador de fechamento `<!-- end -->` correspondente.

Preserve integralmente o texto desses marcadores e o conteúdo gerado entre a abertura e o fechamento. Se o marcador de abertura estiver na mesma linha de `## Exemplos`, coloque-o em linha própria, deixando uma linha em branco após o cabeçalho; não altere o texto do marcador, seus parâmetros ou o conteúdo gerado. A padronização deve atuar apenas no conteúdo editorial ao redor deles. Não execute scripts de geração ou processamento de Markdown que possam alterar esses blocos como parte de uma tarefa de formatação; se outras orientações recomendarem essa execução, esta regra prevalece.
