# Será que eu passo?

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/final/cover.jpg)

## Contexto

Imagine-se no fim do semestre, ansioso para saber se suas notas foram suficientes para passar direto ou se precisará fazer a temida prova final. Além disso, alguns colegas estão se perguntando se ainda têm chance de salvar o semestre com a nota da final, ou se já estão reprovados. Para evitar todo esse suspense, você decide criar um programa que, a partir das suas notas e da prova final (se for o caso), calcula se você está aprovado, reprovado ou se precisará da nota final para decidir seu destino.

- Caso a média das duas primeiras notas seja maior ou igual a 7, o aluno será aprovado.
- Caso a média seja menor que 4, o aluno será reprovado diretamente.
- Se a média estiver entre 4 e 7, o aluno fará a prova final. A nova média será calculada e, se for maior ou igual a 5, o aluno será aprovado na final, caso contrário, será reprovado na final.

Agora, implemente um programa que siga essas regras e decida automaticamente seu resultado.

### Entrada

- Três valores inteiros, por linha, que representam:
  - A nota1 (nota da primeira prova),
  - A nota2 (nota da segunda prova),
  - A nota_final (nota da prova final), descarte a nota da final se ela não for necessária.

### Saída

- Se o aluno foi aprovado diretamente, o programa deve imprimir "aprovado".
- Se o aluno foi reprovado diretamente, o programa deve imprimir "reprovado".
- Se o aluno foi aprovado na final, o programa deve imprimir "aprovado na final".
- Se o aluno foi reprovado na final, o programa deve imprimir "reprovado na final".

### Retrições

- As notas serão inteiros entre 0 e 10

## Testes

``` py
>>>>>>>> INSERT
8
8
9
======== EXPECT
aprovado
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
8
2
9
======== EXPECT
aprovado na final
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
2
9
======== EXPECT
reprovado
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
4
8
3
======== EXPECT
reprovado na final
<<<<<<<< FINISH
```

## Dicas

Use o pseudocódigo a seguir para implementar o algoritmo de calcular nota e decidir se você ficou aprovado, reprovado, aprovado na final ou reprovado na final.

```txt
leia a primeira nota
leia a segunda nota
media = some as notas e divida por 2
se media maior igual a 7
  aprovado
se menor que 4 reprovado
  reprovado
se entre 4 e 7
  leia a final
  mediaFinal = (mediaParcial + final)/2
  se mediaFinal >= 5
      aprovado
  senao
      reprovado
```
