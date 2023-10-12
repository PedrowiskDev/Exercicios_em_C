/* valor == &valorPtr: Falso. valor e valorPtr são de tipos diferentes. &valorPtr é o endereço de valorPtr, enquanto valor é o valor da variável valor.

valor == *valorPtr: Falso. valor é uma variável de valor, e *valorPtr é o valor apontado por valorPtr.

valorPtr == &valor: Verdadeiro. Aqui, estamos comparando o endereço de valor (obtido com &valor) com o valor de valorPtr.

valorPtr == *valor: Falso. valor é uma variável de valor, enquanto valorPtr é um ponteiro.*/