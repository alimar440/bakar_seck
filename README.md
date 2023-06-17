
<h1 align="center">Licence Science Et Technologie 2 <br> MPI2 - MASS 2 <br> Examen D'Algorithme Et Programmation 3 <br> Premiere Session</h1>
<hr>

## Table Of Contents

1. [Description](#description)
2. [Contributing](#contributing)
3. [Author](#author)

## Description <a name="description"></a>

This Repository contains Exercises of the Exam for licence 2 SAT of UGB
We have Two Exercise Here:

#### Calcul

That consist on writting a program that take three arguments:
    * The first, an option `1`, `2` or `3`
    * The second and the third, two numbers representing the dimensions of a shape and calculate the area of this shape if valid dimensions.

We have these three functions:    

```c
    double surf_rect (double a, double b) { return a*b ; }
    double surf_tria (double a, double b) { return a*b/2 ; }
    double surf_disq (double a, double b) { return 3.14*a*a ; }
```    

#### Usage

* First : Compile The program
```bash
    gcc -o main.c main
```

* Execute The program
```bash
    .\main 1 3 4
```
    
## Authors <a name="authors"></a>

* [Bakarseck](https://github.com/Bakarseck)
* [alimar440](https://github.com/alimar440)

