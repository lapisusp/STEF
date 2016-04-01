# STEF
Para que a imagem seja gerada corretamente, é necessário gerar o arquivo exe e rodar por lá (junto com os txts respectivos)

## INSTALAÇÃO
Instalação da biblioteca FreeGlut no Code::Blocks
http://wiki.codeblocks.org/index.php/Using_FreeGlut_with_Code::Blocks

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
