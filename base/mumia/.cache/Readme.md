# Criança, jovem, adulto

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/mumia/cover.jpg)

## Contexto

Em um projeto escolar, um professor precisa classificar os alunos de acordo com suas idades. A tarefa é determinar se um aluno é uma criança, jovem, adulto, idoso ou uma múmia, com base em regras específicas. O professor gostaria que a implementação fosse feita de forma clara e eficiente.

Leia o nome da pessoa e um inteiro que representa a idade de uma pessoa e escreva:

- "crianca" se menor que 12 (não use o ç),
- "jovem" se menor que 18,
- "adulto" se menor que 65,
- "idoso" se menor que 1000,
- "mumia" caso contrario (não ponha o acento).

### Entrada

- Na primeira o nome da pessoa (uma string)
- Na segunfa linha a idade (um inteiro)

### Saída

- Uma frase no formato "`<nome>` eh `<classificação>`"

### Restrição

Por simplificações, não faça flexão de gênero (idoso, idosa, adulto, adulta), não use acento, nem ç, nem maiúscula.

## Testes

```py
>>>>>>>> INSERT
mario
4
======== EXPECT
mario eh crianca
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
jose
65
======== EXPECT
jose eh idoso
<<<<<<<< FINISH
```

## Dicas

### Programando em: C

- Utilize a técnica do seleção intervalada e termine com um else sem condição:

```c
int main() {
    if(x < 12) {
        ...
    }  
    else if(x < 18) {
        ...
    }  
    else if(x < 65) {
        ...
    }  
    else {
        ...
    }
}
```

### Programando em: Python

- Utilize a técnica do seleção intervalada e termine com um else sem condição:

```py
if x < 12:
    ...
elif x < 18:
    ...
elif x < 65:
    ...
else:
    ...
```

### Programando em: TypeScript

- Utilize a técnica do seleção intervalada e termine com um else sem condição:

```ts
if(x < 12) {
    ...
} else if(x < 18) {
    ...
} else if(x < 65) {
    ...
} else {
    ...
}
```
