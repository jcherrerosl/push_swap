# Push_swap

`push_swap` es un proyecto en C que consiste en ordenar una pila (o _stack_) de enteros usando un conjunto limitado de operaciones. Para ello, disponemos de dos pilas, _a_ y _b_. El conjunto inicial y final deben estar en _a_, esto es, la pila _b_ se utiliza únicamente como auxiliar.   

## Tabla de contenidos

- [Instalación](#instalación)
- [Uso](#uso)
- [Operaciones](#operaciones)
- [Explicación del Algoritmo](#explicación-del-algoritmo)

## Instalación

Para compilar el proyecto, necesitas tener instalados `make` y `gcc`.   
Ejecuta el siguiente comando en tu terminal para descargar y compilar el proyecto:   
```bash
git clone https://github.com/jcherrerosl/push_swap.git
cd push_swap
make
```

Esto generará el archivo ejecutable `push_swap`.    

## Uso

Para usar el programa `push_swap`, es necesario ejecutarlo con una lista de enteros como argumentos.   
Esta lista puede escribirse de dos maneras: los enteros como argumentos independientes o una lista entre comillas como único argumento.   

```bash
./push_swap 3 2 6 4 9 1
```

```bash
./push_swap "3 2 6 4 9 1"
```

## Operaciones   

El proyecto permite utilizar las siguientes operaciones para ordenar la pila     

- `sa`: intercambia los dos primeros elementos en la parte superior de la pila a.
- `sb`: intercambia los dos primeros elementos en la parte superior de la pila b.
- `ss`: `sa` y `sb` al mismo tiempo.
- `pa`: toma el primer elemento en la parte superior de b y lo pone en la parte superior de a.
- `pb`: toma el primer elemento en la parte superior de a y lo pone en la parte superior de b.
- `ra`: desplaza hacia arriba todos los elementos de la pila a por 1.
- `rb`: desplaza hacia arriba todos los elementos de la pila b por 1.
- `rr`: `ra` y `rb` al mismo tiempo.
- `rra`: desplaza hacia abajo todos los elementos de la pila a por 1.
- `rrb`: desplaza hacia abajo todos los elementos de la pila b por 1.
- `rrr`: `rra` y `rrb` al mismo tiempo.

## Explicación del algoritmo

El algoritmo consiste en dos fases principales:

**Mover a B**: Los enteros se dividen en bloques y se mueven de la pila A a la pila B usando la operación `pb`. Se utiliza un enfoque de K-sort, con el que los elementos se mueven a B en bloques del tamaño de la raíz cuadrada de N (N es el tamaño de la pila A). Este enfoque optimiza el número de movimientos necesarios.    
**Mover a A**: Los enteros se mueven de vuelta a la pila A en orden usando la operación `pa`.   


