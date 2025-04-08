#include <math.h>
#include <stdio.h>

// move o cursor para a posição (x,y) do console
void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

// limpa a tela do console
void clear() { printf("\033[2J"); }

// função para desenhar um pixel na posição (x,y) do console
void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
  // get console coordinates and draw rgbaPixel
  gotoxy(x, y);
  printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

int main() {
  // imagem 10x10
  int imagem[10][10] = {{RGBA(255, 0, 0, 255), RGBA(230, 25, 25, 255),
                         RGBA(204, 51, 51, 255), RGBA(179, 76, 76, 255),
                         RGBA(153, 102, 102, 255), RGBA(128, 128, 128, 255),
                         RGBA(102, 153, 153, 255), RGBA(76, 179, 179, 255),
                         RGBA(51, 204, 204, 255), RGBA(25, 230, 230, 255)},
                        {RGBA(255, 25, 0, 255), RGBA(230, 51, 25, 255),
                         RGBA(204, 76, 51, 255), RGBA(179, 102, 76, 255),
                         RGBA(153, 128, 102, 255), RGBA(128, 153, 128, 255),
                         RGBA(102, 179, 153, 255), RGBA(76, 204, 179, 255),
                         RGBA(51, 230, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 51, 0, 255), RGBA(230, 76, 25, 255),
                         RGBA(204, 102, 51, 255), RGBA(179, 128, 76, 255),
                         RGBA(153, 153, 102, 255), RGBA(128, 179, 128, 255),
                         RGBA(102, 204, 153, 255), RGBA(76, 230, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 76, 0, 255), RGBA(230, 102, 25, 255),
                         RGBA(204, 128, 51, 255), RGBA(179, 153, 76, 255),
                         RGBA(153, 179, 102, 255), RGBA(128, 204, 128, 255),
                         RGBA(102, 230, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 102, 0, 255), RGBA(230, 128, 25, 255),
                         RGBA(204, 153, 51, 255), RGBA(179, 179, 76, 255),
                         RGBA(153, 204, 102, 255), RGBA(128, 230, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 128, 0, 255), RGBA(230, 153, 25, 255),
                         RGBA(204, 179, 51, 255), RGBA(179, 204, 76, 255),
                         RGBA(153, 230, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 153, 0, 255), RGBA(230, 179, 25, 255),
                         RGBA(204, 204, 51, 255), RGBA(179, 230, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 179, 0, 255), RGBA(230, 204, 25, 255),
                         RGBA(204, 230, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 204, 0, 255), RGBA(230, 230, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 230, 0, 255), RGBA(230, 255, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)}};

  // copia imagem original para imagem 2
  int imagem2[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem2[x][y] = imagem[x][y];
  }

  // copia imagem original para imagem 3
  int imagem3[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem3[x][y] = imagem[x][y];
  }

  // imagem em branco
  int imagem4[10][10];
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++)
      imagem4[x][y] = imagem[x][y]; // Branco
  }

  // Exercício 1
  unsigned char *pchar2 = (unsigned char *)imagem2;
  // unsigned char *pchar2 = (unsigned char *)&imagem2[0][0];
  // insira o seu código abaixo
  // soluçao:
  for (int i = 0; i < 10 * 10 * 4; i += 4) {
    pchar2[i + 3] = 0; // Zera o canal vermelho
  }
  // insira o seu código acima

  // Exercício 2
  unsigned char *pchar3 = (unsigned char *)imagem3;
  // insira o seu código abaixo

  // soluçao:
  for (int i = 0; i < 10 * 10 * 4; i += 4) {
    // Obtém os valores dos canais R, G e B
    unsigned char r = pchar3[i + 3];
    unsigned char g = pchar3[i + 2];
    unsigned char b = pchar3[i + 1];

    // Calcula a média
    unsigned char gray = (r + g + b) / 3;

    // Atribui o valor da média a R, G e B
    pchar3[i + 3] = gray; // Canal vermelho
    pchar3[i + 2] = gray; // Canal verde
    pchar3[i + 1] = gray; // Canal azul
  }
  // insira o seu código acima

  // Exercício 3
  unsigned char *pchar4 = (unsigned char *)imagem4;
  // insira o seu código abaixo
  for (int lin = 0; lin < 10; lin++) {
    for (int col = 0; col < 10; col++) {
      if (lin == col) {
        // Diagonal Principal
        pchar4[(lin * 10 * 4) + (col * 4) + 1] = 225;
        pchar4[(lin * 10 * 4) + (col * 4) + 2] = 0;
        pchar4[(lin * 10 * 4) + (col * 4) + 3] = 0;

      // Diagonal Secundaria
      pchar4[(lin * 10 * 4) + (9*4)-(col * 4) + 1] = 225;
      pchar4[(lin * 10 * 4) + (9*4)-(col * 4) + 2] = 0;
      pchar4[(lin * 10 * 4) + (9*4)-(col * 4) + 3] = 0;
      }
    }
  }
  // insira o seu código acima

  // limpa a tela
  clear();
  gotoxy(1, 1);
  printf("Imagem original\n");
  // desenha a imagem original a partir da posição (0,2)
  int xoffset = 1, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem[x][y] & R) >> 24,
              (imagem[x][y] & G) >> 16, (imagem[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 1);
  printf("Imagem2 com quadrado vermelho\n");
  xoffset = 25, yoffset = 3;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem2[x][y] & R) >> 24,
              (imagem2[x][y] & G) >> 16, (imagem2[x][y] & B) >> 8);
    }
  }

  gotoxy(1, 14);
  printf("Imagem3 com X azul\n");
  xoffset = 1, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem3[x][y] & R) >> 24,
              (imagem3[x][y] & G) >> 16, (imagem3[x][y] & B) >> 8);
    }
  }

  gotoxy(25, 14);
  printf("Imagem4 com a sobreposição");
  gotoxy(25, 15);
  printf("da imagem2 em imagem3");
  xoffset = 25, yoffset = 17;
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      draw_xy((x * 2) + xoffset, y + yoffset, (imagem4[x][y] & R) >> 24,
              (imagem4[x][y] & G) >> 16, (imagem4[x][y] & B) >> 8);
    }
  }
  printf("\n");
  return 0;
}