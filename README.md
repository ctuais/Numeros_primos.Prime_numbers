Una forma de calcular números primos.

- Si se quiere saber si N es primo, debe dejar un residuo 0 sólo de la división entre 1 y el mismo.
Por lo tanto, si se obtiene un residuo igual a 0 al dividir por alguno de los números M (entre 2 y N-1); dicho número N no es primo.
Siendo este el caso, al tomar N dividirlo entre M (N % M) y su residuo no es igual a 0, entonces, N es primo.

Para hacer este procedimiento más eficiente, se puede decir que:
- Cuando M es 2 y N % 2 no da un residuo 0, entonces, la mitad de N (N/2) tampoco dará como residuo 0.
- Entonces, no es necesario que se intente dividir con M de valor mayor a N/2.
- Lo que quiere decir que si M % 3 no da un residuo 0, entonces, un tercio de N (N/3) tampoco dará un residuo 0.
- Entonces, no es necesario que se intente dividir con M de valor mayor a N/3.
- ...
- ...
- ...
- Entonces podemos concluir que " (N/M)/M " establecerá una cantidad suficiente de intentos para verificar si N es o no un número primo.


*****************************************************************************


A way to calculate prime numbers.

- If you want to know if N is prime, there must leave a remainder 0 only from the division between 1 and itself.
Therefore, if you obtain a remainder equal to 0 when dividing by any of the numbers M (between 2 and N-1); This number N is not prime.
This being the case, when taking N divide it by M (N % M) and its remainder is not equal to 0, then N is prime.

To make this procedure more efficient, we can say that:
- When M is 2 and N % 2 does not give a remainder 0, so half of N (N/2) will not give a remainder 0 either.
- So, it is not necessary to try to divide with M of value greater than N/2.
- Which means that if M % 3 does not give a residue 0, then a third of N (N/3) will not give a residue 0 either.
- So, it is not necessary to try to divide with M of a greater value a N/3.
- ...
- ...
- ...
- Then we can conclude that " (N/M)/M " will establish a sufficient number of trials to verify whether or not N is a prime number.

*****************************************************************************
PC SPECs: https://valid.x86.fr/8gkv0a
CPU util: 1% a 14% (1 nueclo [automático])
Intervalo: 1-1.000.000   | Hallados: 78.498     Números Primos | Tiempo: 93 ms
Intervalo: 1-5.000.000   | Hallados: 348.513    Números Primos | Tiempo: 907 ms
Intervalo: 1-10.000.000  | Hallados: 664.579    Números Primos | Tiempo: 2.566 ms (2.56 seg)
Intervalo: 1-100.000.000 | Hallados: 76.125.785 Números Primos | Tiempo: 76.125 ms (76.12 seg)
