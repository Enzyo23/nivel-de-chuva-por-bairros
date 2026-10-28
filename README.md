# Nível de chuva por bairros

Programa em C que lê a quantidade de chuva de 7 dias em 3 bairros, usando laços de repetição para ler e mostrar os dados.

## O que o programa faz

- Pergunta a chuva (em milímetros) de cada dia e de cada bairro.
- Guarda os 21 valores em uma matriz `float milimetros_de_chuva[7][3]` (7 dias x 3 bairros).
- Mostra a lista final com o dia, o nome do bairro e o valor com 1 casa decimal.

Bairros: 0 = Jardim California, 1 = Novo Horizonte, 2 = Centro.

## O que foi usado

- Matriz de `float`, para não perder a parte decimal.
- `for` dentro de `for`: o de fora conta os dias e o de dentro conta os bairros.
- `switch`, para trocar o número do bairro pelo nome.
- `printf` com `%.1f` e `\n`, para deixar a saída organizada.

## Como compilar e rodar

```
gcc main.c -o teste
.\teste
```

Feito no Windows com GCC e VS Code, como atividade de Algoritmos e Pensamento Computacional.