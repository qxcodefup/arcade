## bombardeio matriz

- Entrada
    - dimensões do campo
    - posição onde cai a bomba
    - força da bomba. Cada quadrado de distãncia diminui a força em 1
- Saída
    - campo destruido colocando `.` nas posições não afetadas e o dano nas posições afetadas.

```
>>>>>>>>
3 4
1 2
1
========
....
..1.
....
<<<<<<<<

>>>>>>>>
3 4
1 2
2
========
.111
.121
.111
<<<<<<<<

>>>>>>>>
5 7
2 3
3
========
.11111.
.12221.
.12321.
.12221.
.11111.
<<<<<<<<

```
