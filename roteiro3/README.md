
#### Roteiro 3

1-) Polimorfismo diz respeito a uma técnica de programação que consiste na possibilidade de um mesmo objeto assumir formas diferentes formas.

Por exemplo, considere as seguintes classes:

```
class Animal
{
  public:
    virutal void som() = 0;
};

class Cachorro
{
  public:
    void som() {cout << "Au!"};
}

class Gato
{
  public:
    void som() {cout << "Miau"};
};
```

Através do polimorfismo, é possível criar um objeto do tipo genérico *Animal*, e fazê-lo assumir diferentes formas, usando o mesmo método genérico *som()*, conforme mostrado abaixo:

```
...

Animal *a = new Cachorro();
a.som();
delete a;
a = new Gato();
a.som();
delete a;

...

```
Na tela, será exibido:

```
Au!
Miau!
```
