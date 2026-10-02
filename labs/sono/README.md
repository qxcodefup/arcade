# Quanto tempo ainda tenho

![_](assets/cover.jpg)

## Contexto

Já colocou o despertador no seu celular e ele lhe informou que você só tinha algumas poucas horas de sono? Faça um código que receba horas minutos e segundos da hora atual e da hora do horário de despertar e retorne quantas horas minutos e segundos você terá de sono.

Se o segundo horário for menor que o primeiro, compreenda como o dia seguinte. Se você dormir 23:00 e acorda às 6:00 então você tem 7:00 horas de sono.

### Entrada

- linha 1: hora minuto segundo (do horário que vai dormir).
- linha 2: hora minuto segundo (do horário que vai acordar).

### Saída

- hora minuto segundo (do tempo de sono que resta).

## Exemplos

<!-- tests tests.toml --limit 3 -->
<table><tr><th><code>Entrada</code></th><th><code>Saída</code></th></tr>
<!-- INPUT --><tr><td valign="top"><pre>
01 00 00
03 00 00
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
02 00 00
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
02 11 00
03 10 10
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
00 59 10
</pre></td></tr>
<!-- INPUT --><tr><td valign="top"><pre>
04 10 00
03 10 10
</pre></td>
<!-- OUTPUT --><td valign="top"><pre>
23 00 10
</pre></td></tr>
</table>
<!-- end -->
