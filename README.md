# STEF

## Publicações

* Testa, R. L.; Muniz, A. H. N. ; Carpio, L. U. S. ; Dias, R. G. ; Rocca, C. C. A. ; Machado-Lima, A. and  Nunes, F. L. S. **Generating Facial Emotions for Diagnosis and Training.** Computer-Based Medical Systems (CBMS), 2015 IEEE 28th International Symposium on. IEEE, 2015.

## Rodando
Para que a imagem seja gerada corretamente, é necessário gerar o arquivo exe e rodar por lá (junto com os txts respectivos)

### Docker (modo fácil)

[Instalar docker](https://docs.docker.com/engine/installation/)

```bash
bash build.sh
bash run.sh
```

### Ubuntu

#### Requisitos
É preciso instalar o C++, cmake, OpenGL e OpenCV.

```bash
sudo apt-get install g++ cmake
sudo apt-get install libxmu-dev libxi-dev
sudo apt-get install freeglut3 freeglut3-dev
sudo apt-get install libopencv-dev
```
#### Compilando

```bash
mkdir build
cd build
cmake ..
make
```

#### Rodando

```bash
cd build
./STEF
```

## FUNCIONAMENTO BÁSICO
1. É criado e instanciado um objeto `Factory`
1. É feito a leitura dos alphas e do grafo.
  * Ao ler o arquivo txt do grafo, os nós são criados. As coordenadas dos pontos de cada curva são lidas como nós no grafo, mas isso é feito APENAS para armazenar os valores nos vetores das curvas. Na hora do desenho ser feito, eles não são acessados.
1. O grafo é percorrido até chegar aos nós folhas (curvas) e então é feito o desenho com o vetor encontrado lá.

![Funcionamento básico](https://raw.githubusercontent.com/lapidarioz/STEF/and-or-graph/docs/images/and-or-graph.png)

## CLASSES

### MEDIDAS FACTORY
Classe `Factory` onde será instanciado o objeto do tipo `FacsMedidas` ou `AlphaMedidas`.

### MEDIDAS
Possui os métodos para leitura e criação do grafo, além da leitura dos **alphas**.

### GRAFO
Possui métodos para percorrer o Grafo (além de percorrer no modelo And-Or, tem a busca em largura caso necessária e busca por `ID`).

### NO
Nó possui o tipo `id` (numérico), `valor` (nome) e `coordenada`.

### ENTRADA
Possui métodos (opcionais) de leitura de pontos e alocação de arrays.

### ANIMACAO
Depois de gerada a face neutra é escolhido através do teclado a emoção desejada.

Exemplo. Quando digitado:
```bash
> 1
```
O método acessado é `animação->satisfação(1)` (o `1` do argumento é a intensidade, 100% neste caso).

```bash
> 2
```
O método acessado é `animação->tristeza(1)` e assim por diante.

Isso ocorre no main, mas os métodos de cada emoção estão na classe animação. Dentro desses métodos é chamado o `desenhaFace` da classe `Face`.

### FACE
Classe onde os arrays de curvas serão utilizados para realizar os desenhos. Possui métodos para desenho da face neutra utilizados anteriormente. Principal método utilizado nessa versão do projeto é o `void desenhaFace(GLint expressao, GLfloat qtdExpressao)`. Quando uma emoção é solicitada ele acessa os métodos da classe `Movimentos`.

### MOVIMENTOS
Nessa classe são armazenados todos os alphas e movimentos do FACS. Quando é utilizado o tipo de `Factory ALPHASNUM`, ele usa o método movAlpha que movimenta todos os pontos. Além dos métodos dos enrugamentos correspondentes a cada emoção.

### ANTROPOMETRIA
Classe legada onde calculava-se os pontos da antropometria, agora eles são lidos através do Grafo. A classe foi mantida como referência para os cálculos.

### DESENHA
Métodos utilizados para efetuar os desenhos.

### SAÍDA
Métodos para salvar imagens.
