#### Lista 1

1-) Classes são como *templates* que armazenam uma estrutura com atributos e funções (métodos) que podem ser compartilhados por vários objetos, que, por sua vez, dizem respeito a instâncias dessas classes. 

2-) Construtores são métodos que tem a função de inicializar os atributos de uma classe.

3-) *new* é um operador que tem como propósito alocar espaço na memória para um novo objeto. Ao fazê-lo, ele retorna um endereço que aponta para esse novo espaço alocado.

4-) Isentar o usuário de uma classe de preocupações acerca de sua estrutura interna, além de lidar com tratamento de dados e correções de erros de dados de entrada. Ex:
```
produto_1.setPreco(-300); // Um produto não pode ter um preço negativo, então o método setPreco() pode ter como funcionalidade a correção de casos como esse de maneira automática
```

