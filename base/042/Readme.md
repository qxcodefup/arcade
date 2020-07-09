## ©02_seleção L3 - Rufus e Ordenação!


![](__capa.jpg)

## Motivação

Rufus precisa procriar a especie para passar seus genes valiosos.
Rufus tem muitos filhinhos e os ama tanto que não consegue compará-los.
\- Papai, eu sou maior que o Rufus Junior Terceiro não sou?? Perguntou Rufus Júnior Quadragésimo novo. 
Ajude Rufus com isso. Dados os tamanhos em cm de 3 Rufinhos, informe qual o maior(G) o menor(P) e o do meio(M). Os valores nunca serão iguais.
\[DS\]

## Exemplo:

```
>>>>>>>>
12
15
17
========
P M G
<<<<<<<<

>>>>>>>>
11
17
12
========
P G M
<<<<<<<<

>>>>>>>>
14
13
12
========
G M P
<<<<<<<<
```

## Dicas
Para fazer uma ordenação você pode simplesmente comparar um valor com os outros dois, caso aquele valor seja o maior ou menor(depende de como você quer ordenar), só resta agora comparar os outros 2 que sobraram. 

### Pseudocódigo

```c
LER A B C;
SE A < B E A < C
	SE B < C
		IMPRIME P M G;
	SE NÃO 
		IMPRIME P G M;
SE NÃO SE B < A E B < C
	SE A < C
		IMPRIME M P G;
	SE NÃO
		IMPRIME G P M;
SE NÃO
	SE A < B
		IMPRIME M G P;
	SE NÃO
		IMPRIME G M P;
	

```



