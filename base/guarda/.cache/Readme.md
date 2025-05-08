# Retornando problemas primeiro

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/guarda/cover.jpg)

## Contexto

Imagine um sistema de acesso seguro onde é necessário atender a várias condições para conceder permissão. Por exemplo, ao tentar acessar uma informação importante em um sistema, você precisa garantir que está conectado à rede, autenticado e com permissões administrativas.

Implemente um programa que verifique três condições necessárias para acessar um sistema: conexão ao Wi-Fi, autenticação do login e permissões de administrador. O programa deve imprimir a mensagem de erro correspondente à primeira condição que falhar, ou indicar sucesso caso todas as condições sejam atendidas. Utilize a lógica das negações para simplificar a estrutura das verificações no código, evitando aninhamentos desnecessários de `if else`.

### Entrada

- Três valores booleanos (0 ou 1):
  - `wifi`: se está conectado ao Wi-Fi (1 para verdadeiro (`true`) e 0 para falso (`false`)).
  - `login`: se o login foi feito (1 para verdadeiro (`true`) e 0 para falso (`false`)).
  - `admin`: se o acesso é de um administrador (1 para verdadeiro (`true`) e 0 para falso (`false`)).

### Saída

- Se `wifi` for false: "you must connect to wifi".
- Se `login` for false: "you need to login first".
- Se `admin` for false: "you must login as admin".
- Caso todos sejam verdadeiros: "done".

## Testes

``` py
>>>>>>>> INSERT
0
0
0
======== EXPECT
you must connect to wifi
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
1
1
======== EXPECT
you must connect to wifi
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
0
0
1
======== EXPECT
you must connect to wifi
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
0
1
======== EXPECT
you need to login first
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
0
0
======== EXPECT
you need to login first
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
1
0
======== EXPECT
you must to login as admin
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT
1
1
1
======== EXPECT
done
<<<<<<<< FINISH

```

## Dicas

### Programando em: C

- É possível utilizar verificações simples para verificar cada condição individualmente. Em valores booleanos, 0 é considerado falso (`false`) e qualquer valor diferente de 0 é verdadeiro (`true`). O símbolo `!` indica a negação de uma condição, ou seja, espera-se que a condição seja falsa:

```c
int main() {
    if (!wifi) {
    printf("you must connect to wifi\n");
    }
}
```

### Programando em: Python

- Podemos utilizar verificações simples para avaliar cada condição individualmente. Valores numéricos diferentes de zero são interpretados como True, enquanto zero é considerado False. O operador not é utilizado para negar uma condição

```py
if not wifi:
    print("you must connect to wifi")
```

### Programando em: TypeScript

- podemos utilizar verificações simples para avaliar cada condição individualmente. Valores numéricos diferentes de zero são interpretados como `true` em contextos booleanos, enquanto zero é considerado `false`. O operador `!` (exclamação) inverte o valor booleano de uma expressão.

```ts
if (!wifi) {
    console.log("you must connect to wifi");
}
```

```ts
if (!wifi) {
    write("you must connect to wifi");
}
```
