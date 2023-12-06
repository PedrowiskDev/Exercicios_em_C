#include <iostream>
#include <cmath>

// Classe para representar um ponto 2D
class Ponto2D {
private:
    double x;
    double y;

public:
    // Construtor sem argumentos, considerando o ponto na origem (0,0)
    Ponto2D() : x(0), y(0) {}

    // Construtor que recebe dois argumentos do tipo double ou float
    Ponto2D(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Método para calcular a distância euclidiana entre dois pontos
    double calcularDistanciaEuclidiana(const Ponto2D& outroPonto) {
        return sqrt(pow(outroPonto.x - x, 2) + pow(outroPonto.y - y, 2));
    }

    // Método para verificar se tem eixo comum com outro ponto
    bool temEixoComum(const Ponto2D& outroPonto) {
        return (x == outroPonto.x || y == outroPonto.y);
    }

    // Métodos para verificar a posição relativa a outro ponto
    bool estaAcimaDe(const Ponto2D& outroPonto) { return y > outroPonto.y; }
    bool estaAbaixoDe(const Ponto2D& outroPonto) { return y < outroPonto.y; }
    bool estaAEsquerdaDe(const Ponto2D& outroPonto) { return x < outroPonto.x; }
    bool estaADireitaDe(const Ponto2D& outroPonto) { return x > outroPonto.x; }
};

// Classe para representar uma reta usando dois pontos no espaço cartesiano 2D
class Reta {
private:
    Ponto2D pontoInicial;
    Ponto2D pontoFinal;

public:
    // Construtores da classe Reta
    Reta() : pontoInicial(), pontoFinal() {} // Reta começa e termina no ponto (0,0)
    Reta(const Ponto2D& ponto) : pontoInicial(), pontoFinal(ponto) {} // Reta começa na origem e termina no ponto passado
    Reta(const Ponto2D& ponto1, const Ponto2D& ponto2) : pontoInicial(ponto1), pontoFinal(ponto2) {} // Reta com dois pontos dados
    Reta(double x1, double y1, double x2, double y2) : pontoInicial(x1, y1), pontoFinal(x2, y2) {} // Reta com coordenadas dos pontos

    // Método para calcular o comprimento da reta
    double calcularComprimento() {
        return pontoInicial.calcularDistanciaEuclidiana(pontoFinal);
    }

    // Método para calcular o ângulo da reta em relação ao eixo x
    double calcularAnguloEmRelacaoAoEixoX() {
        double deltaX = pontoFinal.x - pontoInicial.x;
        double deltaY = pontoFinal.y - pontoInicial.y;
        return atan2(deltaY, deltaX) * 180.0 / M_PI;
    }
};

// Classe para representar um retângulo com pontos opostos como objetos Ponto2D
class Retangulo {
private:
    Ponto2D ptsupesquerdo;
    Ponto2D ptinfdireito;

public:
    // Construtores da classe Retangulo
    Retangulo() : ptsupesquerdo(), ptinfdireito() {} // Retângulo com pontos extremos em (0,0)
    Retangulo(const Ponto2D& ponto) : ptsupesquerdo(), ptinfdireito(ponto) {} // Um ponto extremo está na origem
    Retangulo(const Ponto2D& ponto1, const Ponto2D& ponto2) : ptsupesquerdo(ponto1), ptinfdireito(ponto2) {} // Com dois pontos dados
    Retangulo(double x1, double y1, double x2, double y2) : ptsupesquerdo(x1, y1), ptinfdireito(x2, y2) {} // Com coordenadas dos pontos

    // Método para verificar se um ponto está dentro do retângulo
    bool pontoEstaDentro(const Ponto2D& ponto) {
        return (ponto.estaADireitaDe(ptsupesquerdo) && ponto.estaAEsquerdaDe(ptinfdireito) &&
                ponto.estaAbaixoDe(ptsupesquerdo) && ponto.estaAcimaDe(ptinfdireito));
    }

    // Método para redimensionar o retângulo
    void redimensionar(const Ponto2D& ponto) {
        ptinfdireito = ponto;
    }

    // Método para calcular a área do retângulo
    double calcularArea() {
        double largura = ptinfdireito.estaADireitaDe(ptsupesquerdo) ?
            ptinfdireito.x - ptsupesquerdo.x :
            ptsupesquerdo.x - ptinfdireito.x;

        double altura = ptinfdireito.estaAcimaDe(ptsupesquerdo) ?
            ptinfdireito.y - ptsupesquerdo.y :
            ptsupesquerdo.y - ptinfdireito.y;

        return largura * altura;
    }

    // Método para calcular o perímetro do retângulo
    double calcularPerimetro() {
        double largura = ptinfdireito.estaADireitaDe(ptsupesquerdo) ?
            ptinfdireito.x - ptsupesquerdo.x :
            ptsupesquerdo.x - ptinfdireito.x;

        double altura = ptinfdireito.estaAcimaDe(ptsupesquerdo) ?
            ptinfdireito.y - ptsupesquerdo.y :
            ptsupesquerdo.y - ptinfdireito.y;

        return 2 * (largura + altura);
    }

    // Método para verificar se uma reta está dentro do retângulo
    bool retaEstaDentro(const Reta& reta) {
        return pontoEstaDentro(reta.pontoInicial) && pontoEstaDentro(reta.pontoFinal);
    }

    // Método para calcular a interseção entre dois retângulos
    Retangulo calculaIntersecao(const Retangulo& outroRetangulo) {
        // Cálculo dos pontos para a interseção dos retângulos
        double intersecaoX1 = std::max(ptsupesquerdo.x, outroRetangulo.ptsupesquerdo.x);
        double intersecaoY1 = std::min(ptsupesquerdo.y, outroRetangulo.ptsupesquerdo.y);
        double intersecaoX2 = std::min(ptinfdireito.x, outroRetangulo.ptinfdireito.x);
        double intersecaoY2 = std::max(ptinfdireito.y, outroRetangulo.ptinfdireito.y);

        // Verifica se há interseção
        if (intersecaoX1 > intersecaoX2 || intersecaoY1 < intersecaoY2) {
            std::cout << "Não há interseção entre os retângulos." << std::endl;
            return Retangulo();
        } else {
            return Retangulo(intersecaoX1, intersecaoY1, intersecaoX2, intersecaoY2);
        }
    }

    // Método para calcular a área da interseção entre dois retângulos
    double calcularAreaIntersecao(const Retangulo& outroRetangulo) {
        Retangulo intersecao = calculaIntersecao(outroRetangulo);
        return intersecao.calcularArea();
    }

    // Método para calcular o perímetro da interseção entre dois retângulos
    double calcularPerimetroIntersecao(const Retangulo& outroRetangulo) {
        Retangulo intersecao = calculaIntersecao(outroRetangulo);
        return intersecao.calcularPerimetro();
    }
};

int main() {
    // Exemplo de uso das classes
    Ponto2D ponto1(1, 2);
    Ponto2D ponto2(-9, 0);
    Ponto2D ponto3(13, -8);
    Ponto2D ponto4(8, -22);

    // Verificando se pontos têm eixo comum
    std::cout << "Ponto1 e Ponto2 têm eixo comum: " << ponto1.temEixoComum(ponto2) << std::endl;
    std::cout << "Ponto2 e Ponto3 têm eixo comum: " << ponto2.temEixoComum(ponto3) << std::endl;

    // Criando retas
    Reta reta1(ponto1, ponto2);
    Reta reta2(ponto3, ponto4);

    // Calculando comprimento das retas
    std::cout << "Comprimento da Reta1: " << reta1.calcularComprimento() << std::endl;
    std::cout << "Comprimento da Reta2: " << reta2.calcularComprimento() << std::endl;

    // Criando retângulos
    Retangulo retangulo1(ponto1, ponto3);
    Retangulo retangulo2(ponto2, ponto4);

    // Calculando área e perímetro dos retângulos
    std::cout << "Área do Retangulo1: " << retangulo1.calcularArea() << std::endl;
    std::cout << "Perímetro do Retangulo1: " << retangulo1.calcularPerimetro() << std::endl;
    std::cout << "Área do Retangulo2: " << retangulo2.calcularArea() << std::endl;
    std::cout << "Perímetro do Retangulo2: " << retangulo2.calcularPerimetro() << std::endl;

    // Verificando se uma reta está dentro do retângulo
    std::cout << "Reta1 está dentro do Retangulo1: " << retangulo1.retaEstaDentro(reta1) << std::endl;
    std::cout << "Reta2 está dentro do Retangulo2: " << retangulo2.retaEstaDentro(reta2) << std::endl;

    // Calculando a interseção entre os retângulos e suas áreas e perímetros
    Retangulo intersecao = retangulo1.calculaIntersecao(retangulo2);
    std::cout << "Área da interseção: " << intersecao.calcularArea() << std::endl;
    std::cout << "Perímetro da interseção: " << intersecao.calcularPerimetro() << std::endl;

    return 0;
}
