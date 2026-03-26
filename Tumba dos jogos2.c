#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

// Feito por Arthur Paiva e Augusto Ferreira , CC1MA SUB A

void respPerguntas();
void cobraNaCaixa();
void gousmasWar();

int main()
{
    int opcao = 0;

    while (opcao != 4) {

        printf("\n====TUMBA DOS JOGOS====\n");
        printf("1) Perguntas e respostas\n");
        printf("2) Cobra na caixa\n");
        printf("3) Gousmas War\n");
        printf("4) Sair...\n");

        if (scanf("%d", &opcao) != 1) {

            printf("\nEntrada invalida!\n");

            while (getchar() != '\n');

            opcao = 0;
            continue;
        }

        switch (opcao) {

            case 1:
                respPerguntas();
                break;

            case 2:
                cobraNaCaixa();
                break;

            case 3:
                gousmasWar();
                break;

            case 4:
                printf("\nTe vejo do outro lado...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }
    }

    return 0;
}



void respPerguntas()
{
        int resposta;
    int jogar;

    do {
        printf("\n====PERGUNTAS E RESPOSTAS!====\n");

        // Pergunta 1
        do {
            printf("\n1) Qual eh a capital do Egito?\n");
            printf("1: Alexandria\n");
            printf("2: Cairo\n");
            printf("3: Gize\n");
            printf("4: Luxor\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &resposta) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n'); // Limpa o buffer
                resposta = 0;
            }
        } while (resposta < 1 || resposta > 4);

        if (resposta == 2) {
            printf("Resposta correta!\n");
        } else {
            printf("Resposta incorreta, a resposta certa era 2: Cairo\n");
        }

        
        do {
            printf("\n2) Qual a deidade mais importante para o Egito antigo?\n");
            printf("1: Osiris\n");
            printf("2: Horus\n");
            printf("3: Ra\n");
            printf("4: Anubis\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &resposta) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                resposta = 0;
            }
        } while (resposta < 1 || resposta > 4);

        if (resposta == 3) {
            printf("Resposta correta!\n");
        } else {
            printf("Resposta incorreta, a resposta certa era 3: Ra\n");
        }

        
        do {
            printf("\n3) Quem foi o faraoh mais importante do Egito antigo?\n");
            printf("1: Ramses\n");
            printf("2: Cleopatra\n");
            printf("3: Queops\n");
            printf("4: Narmer\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &resposta) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                resposta = 0;
            }
        } while (resposta < 1 || resposta > 4);

        if (resposta == 1) {
            printf("Resposta correta!\n");
        } else {
            printf("Resposta incorreta, a resposta certa era 1: Ramses\n");
        }

        
        do {
            printf("\n4) Qual era a funcao das piramides no Egito antigo?\n");
            printf("1: Servir como centro comercial e de mercadorias para a populacao egipcia\n");
            printf("2: Eram fortalezas militares para proteger as fronteiras do reino\n");
            printf("3: Serem tumulos monumentais para proteger o corpo do faraoh e seus pertences\n");
            printf("4: Tinham a funcao de servir como templo divino de devocao e adoracao aos deuses egipcios\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &resposta) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                resposta = 0;
            }
        } while (resposta < 1 || resposta > 4);

        if (resposta == 3) {
            printf("Resposta correta!\n");
        } else {
            printf("Resposta incorreta, a resposta certa era 3: Serem tumulos monumentais para proteger o corpo do faraoh e seus pertences\n");
        }

        
        do {
            printf("\n5) Por que os egipcios tinham a pratica de mumificar corpos?\n");
            printf("1: Pois sua crenca em vida apos a morte os faziam acreditar que a alma voltaria ao corpo\n");
            printf("2: Para preservar a aparencia fisica dos mortos, pois era com aquele corpo que eles iriam para o alem\n");
            printf("3: Garantir que os mortos nao transmitissem doencas para os vivos durante as cerimonias funebres\n");
            printf("4: Para utilizarem os corpos preservados em rituais de culto aos seus deuses\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &resposta) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                resposta = 0;
            }
        } while (resposta < 1 || resposta > 4);

        if (resposta == 1) {
            printf("Resposta correta!\n");
        } else {
            printf("Resposta incorreta, a resposta certa era 1: Pois sua crenca em vida apos a morte os faziam acreditar que a alma voltaria ao corpo\n");
        }

        
        do {
            printf("\nFim...\n");
            printf("1) Jogar de novo\n");
            printf("2) Voltar para a tumba dos jogos\n");
            printf("Escolha uma opcao: ");

            if (scanf("%d", &jogar) != 1) {
                printf("Entrada invalida! Digite um numero.\n");
                while (getchar() != '\n');
                jogar = 0;
            }
        } while (jogar != 1 && jogar != 2);

    } while (jogar == 1);
}



void cobraNaCaixa()
{
    char nomes[7][20] = {
        "Ramses",
        "Cleopatra",
        "Anubis",
        "Osiris",
        "Horus",
        "Nefertiti",
        "Tutankhamon"
    };

    char jogador1[20], jogador2[20];
    int escolha1, escolha2;

    int valido = 0;
    int i = 0;

    while (!valido) {

        printf("==== COBRA NA CAIXA ====\n");
        printf("Escolha um nome:\n\n");

        for (i = 0; i < 7; i++) {
            printf("%d - %s\n", i + 1, nomes[i]);
        }

        printf("\nJogador 1 escolha um numero: ");
        if (scanf("%d", &escolha1) != 1) {
            printf("\nEntrada invalida!\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Jogador 2 escolha um numero: ");
        if (scanf("%d", &escolha2) != 1) {
            printf("\nEntrada invalida!\n");
            while (getchar() != '\n');
            continue;
        }

        if (escolha1 < 1 || escolha1 > 7 || escolha2 < 1 || escolha2 > 7) {
            printf("\nEscolha numeros entre 1 e 7!\n");
            continue;
        }

        valido = 1;
    }

    strcpy(jogador1, nomes[escolha1 - 1]);
    strcpy(jogador2, nomes[escolha2 - 1]);

    srand(time(NULL));
    int turno = rand() % 2;

    printf("\nQuem comeca foi sorteado!\n");

    int botao = rand() % 5;
    int cobra;

    do {
        cobra = rand() % 5;
    } while (cobra == botao);

    int caixa;

    while (1) {

        if (turno == 0)
            printf("\nVez de %s\n", jogador1);
        else
            printf("\nVez de %s\n", jogador2);

        printf("Escolha uma caixa (1-5): ");
        if (scanf("%d", &caixa) != 1) {
            printf("\nEntrada invalida!\n");
            while (getchar() != '\n');
            caixa = 0;
            continue;
        }

        caixa = caixa - 1;

        if (caixa == cobra) {

            printf("A cobra estava na caixa! Fim de jogo!\n");

            if (turno == 0)
                printf("%s perdeu!\n", jogador1);
            else
                printf("%s perdeu!\n", jogador2);

            break;
        }

        else if (caixa == botao) {

            printf("Voce encontrou o BOTAO!\n");

            if (turno == 0)
                printf("%s venceu!\n", jogador1);
            else
                printf("%s venceu!\n", jogador2);

            break;
        }

        else {
            printf("Caixa vazia...\n");
        }

        turno = !turno;
    }
}
void gousmasWar()
{
    int jogar;

    do {
        int g1j1 = 1, g2j1 = 1;
        int g1j2 = 1, g2j2 = 1;
        int turno = 1;

        int acao;
        int atacante;
        int alvo;
        int doadora;
        int qtd;

        while (g1j1 != 0 || g2j1 != 0) {

            if (g1j2 == 0 && g2j2 == 0) {
                printf("\nJogador 1 venceu!\n");
                break;
            }

            if (g1j1 == 0 && g2j1 == 0) {
                printf("\nJogador 2 venceu!\n");
                break;
            }

            printf("\n==== GOUSMAS WAR ====\n");
            printf("\nJogador 1 -> G1: %d | G2: %d\n", g1j1, g2j1);
            printf("Jogador 2 -> G1: %d | G2: %d\n", g1j2, g2j2);

            if (turno == 1)
                printf("\nVez do Jogador 1\n");
            else
                printf("\nVez do Jogador 2\n");

            printf("1) Atacar\n");
            printf("2) Dividir\n");
            printf("Escolha: ");

            if (scanf("%d", &acao) != 1) {
                printf("\nEntrada invalida!\n");
                while (getchar() != '\n');
                acao = 0;
                continue;
            }

            if (acao == 1) {

                if (turno == 1) {

                    printf("Escolha sua Gousma atacante (1 ou 2): ");
                    if (scanf("%d", &atacante) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        atacante = 0;
                        continue;
                    }

                    printf("Escolha a Gousma inimiga alvo (1 ou 2): ");
                    if (scanf("%d", &alvo) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        alvo = 0;
                        continue;
                    }

                    if (atacante == 1 && g1j1 != 0) {

                        if (alvo == 1 && g1j2 != 0) {
                            g1j2 = g1j2 + g1j1;

                            if (g1j2 > 5) {
                                g1j2 = 0;
                                printf("Gousma 1 do Jogador 2 foi destruida!\n");
                            }

                        } else if (alvo == 2 && g2j2 != 0) {
                            g2j2 = g2j2 + g1j1;

                            if (g2j2 > 5) {
                                g2j2 = 0;
                                printf("Gousma 2 do Jogador 2 foi destruida!\n");
                            }
                        }
                    }

                    else if (atacante == 2 && g2j1 != 0) {

                        if (alvo == 1 && g1j2 != 0) {
                            g1j2 = g1j2 + g2j1;

                            if (g1j2 > 5) {
                                g1j2 = 0;
                                printf("Gousma 1 do Jogador 2 foi destruida!\n");
                            }

                        } else if (alvo == 2 && g2j2 != 0) {
                            g2j2 = g2j2 + g2j1;

                            if (g2j2 > 5) {
                                g2j2 = 0;
                                printf("Gousma 2 do Jogador 2 foi destruida!\n");
                            }
                        }
                    }
                }

                else {

                    printf("Escolha sua Gousma atacante (1 ou 2): ");
                    if (scanf("%d", &atacante) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        atacante = 0;
                        continue;
                    }

                    printf("Escolha a Gousma inimiga alvo (1 ou 2): ");
                    if (scanf("%d", &alvo) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        alvo = 0;
                        continue;
                    }

                    if (atacante == 1 && g1j2 != 0) {

                        if (alvo == 1 && g1j1 != 0) {
                            g1j1 = g1j1 + g1j2;

                            if (g1j1 > 5) {
                                g1j1 = 0;
                                printf("Gousma 1 do Jogador 1 foi destruida!\n");
                            }

                        } else if (alvo == 2 && g2j1 != 0) {
                            g2j1 = g2j1 + g1j2;

                            if (g2j1 > 5) {
                                g2j1 = 0;
                                printf("Gousma 2 do Jogador 1 foi destruida!\n");
                            }
                        }
                    }

                    else if (atacante == 2 && g2j2 != 0) {

                        if (alvo == 1 && g1j1 != 0) {
                            g1j1 = g1j1 + g2j2;

                            if (g1j1 > 5) {
                                g1j1 = 0;
                                printf("Gousma 1 do Jogador 1 foi destruida!\n");
                            }

                        } else if (alvo == 2 && g2j1 != 0) {
                            g2j1 = g2j1 + g2j2;

                            if (g2j1 > 5) {
                                g2j1 = 0;
                                printf("Gousma 2 do Jogador 1 foi destruida!\n");
                            }
                        }
                    }
                }
            }

            else if (acao == 2) {

                if (turno == 1) {

                    printf("Qual Gousma vai doar furia? (1 ou 2): ");
                    if (scanf("%d", &doadora) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        doadora = 0;
                        continue;
                    }

                    printf("Quantos pontos de furia deseja transferir? ");
                    if (scanf("%d", &qtd) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        qtd = 0;
                        continue;
                    }

                    if (doadora == 1 && g1j1 > qtd && qtd > 0) {
                        g1j1 -= qtd;
                        g2j1 += qtd;
                    }

                    else if (doadora == 2 && g2j1 > qtd && qtd > 0) {
                        g2j1 -= qtd;
                        g1j1 += qtd;
                    }

                    if (g1j1 > 5) {
                        g1j1 = 0;
                        printf("Gousma 1 do Jogador 1 foi destruida!\n");
                    }

                    if (g2j1 > 5) {
                        g2j1 = 0;
                        printf("Gousma 2 do Jogador 1 foi destruida!\n");
                    }
                }

                else {

                    printf("Qual Gousma vai doar furia? (1 ou 2): ");
                    if (scanf("%d", &doadora) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        doadora = 0;
                        continue;
                    }

                    printf("Quantos pontos de furia deseja transferir? ");
                    if (scanf("%d", &qtd) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        qtd = 0;
                        continue;
                    }

                    if (doadora == 1 && g1j2 > qtd && qtd > 0) {
                        g1j2 -= qtd;
                        g2j2 += qtd;
                    }

                    else if (doadora == 2 && g2j2 > qtd && qtd > 0) {
                        g2j2 -= qtd;
                        g1j2 += qtd;
                    }

                    if (g1j2 > 5) {
                        g1j2 = 0;
                        printf("Gousma 1 do Jogador 2 foi destruida!\n");
                    }

                    if (g2j2 > 5) {
                        g2j2 = 0;
                        printf("Gousma 2 do Jogador 2 foi destruida!\n");
                    }
                }
            }

            else {
                printf("Opcao invalida!\n");
            }

            if (turno == 1)
                turno = 2;
            else
                turno = 1;
        }

        printf("\n1) Jogar de novo...?\n");
        printf("2) Voltar para a tumba dos jogos...?\n");
        if (scanf("%d", &jogar) != 1) {
                        printf("\nEntrada invalida!\n");
                        while (getchar() != '\n');
                        jogar = 0;
                        continue;
		}
    } while (jogar == 1);
}
