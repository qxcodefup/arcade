# Números de Fibonacci

![_](cover.jpg)

## Motivação

Os números de Fibonacci são definidos recursivamente de acordo com a expressão abaixo:

```py
se n=1 ou n=2, então fib(n) = 1
se n >= 3, então fib(n) = fib(n-1) + fib(n-2).

n         1  2  3  4  5  6   7   8   9
fib(n)    1  1  2  3  5  8  13  21  34
```

## Ação

A função fib abaixo retorna o n-ésimo número de Fibonacci, mas de forma não recursiva. Forneça uma função fib que seja recursiva.

```C
int fib(int n){
    int f = 1, fib1 = 1, fib2 = 1, i;
    for (i = 3; i <= n; i++) {
        f = fib1 + fib2;
        fib2 = fib1;
        fib1 = f;
    }
    return f;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}
```

## Exemplos

``` py
>>>>>>>> INSERT 01
1
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 02
2
======== EXPECT
1
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 03
3
======== EXPECT
2
<<<<<<<< FINISH
```

```py
>>>>>>>> INSERT 04
4
======== EXPECT
3
<<<<<<<< FINISH
```
