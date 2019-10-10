## bombardeio vetor

- Entrada
    - tamanho
    - posição onde cai a bomba
    - força da bomba. Cada quadrado de distãncia diminui a força em 1
- Saída
    - campo destruido colocando `.` nas posições não afetadas e o dano nas posições afetadas.

```
>>>>>>>>
4
2
1
========
..1.
<<<<<<<<

>>>>>>>>
4
2
2
========
.121
<<<<<<<<

>>>>>>>>
3
2
2
========
.12
<<<<<<<<

>>>>>>>>
7
4
3
========
..12321.
<<<<<<<<
```

## Help

leia posição
inicialize vetor vazio
para todas as direções
    enquanto valor for maior que 0
        ponho o valor
        ando na direção
        diminuo o valor

```c
int size = 0, pos = 0, forca = 0;
scanf("%d %d %d", &size, &pos, &forca);
int vet[size];
for(int i = 0; i < size; i++)
    vet[i] = 0;
int forca_bak = forca;
for(int i = pos; forca > 0; i += 1, forca -= 1){
    if(i >= size)
        break;
    vet[i] = forca;
}

int forca = forca_bak;
for(int i = pos; forca > 0; i -= 1, forca -= 1){
    if(i < 0)
        break;
    vet[i] = forca;
}
```

7
4
9
0000987

