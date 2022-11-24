#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


//-------------------------------------------------- USUÁRIO: 1234 ---------------------------------------------------
//-------------------------------------------------- SENHA: 12345    ---------------------------------------------------

void main()
{
    int usuSenha = 1;
    int usuario = 0;
    int senha = 0;
    char pass[50];
    char usua[50];
    char c;
    int i;
// ------------------------------------------------------------------ USUARIO -----------------------------------------------------------
     do
     {
         i = 0;
         printf("\n\nInforme o usuario do sistema: ");

         do
         {
             c=getch();
             if (isdigit(c)!=0)
             {
                 usua[i] = c;
                 i++;
                 printf ("%c", c);
             }
             else if(c==8&&i)
             {
                 usua[i]='\0';
                 i--;
                 printf("\b \b");
             }
         }while(c!=13);

         usua[i]='\0';
         usuario = atoi(usua);

         if(usuario == 1234)
         {
             printf("\n\nUsuario validado com sucesso!!");
             usuSenha = 0;
         }
         else
         {
             printf("\n\nDigite um nome de usuario valido!!");
         }

     } while (usuSenha == 1);
 // ------------------------------------------------------------------ SENHA -----------------------------------------------------------
do
     {
         i = 0;
         printf("\n\nInforme a sua senha: ");

         do
         {
             c=getch();
             if (isdigit(c)!=0)
             {
                 pass[i] = c;
                 i++;
                 printf ("%c", c);
             }
             else if(c==8&&i)
             {
                 pass[i]='\0';
                 i--;
                 printf("\b \b");
             }
         }while(c!=13);

         pass[i]='\0';
         senha = atoi(pass);

         if(senha == 12345)
         {
             printf("\n\nSenha validada com sucesso!!");
             usuSenha = 1;
         }
         else
         {
             printf("\n\nDigite uma senha valida!!");
         }

     } while (usuSenha == 0);
 // ------------------------------------------------------------------ NOME -----------------------------------------------------------
     char nome[50];
     i=0;

     printf ("\n\nInforme o nome do paciente: ");

     do
     {
        c=getch();
        if (isalpha(c)!=0 || c==32)
        {
           nome[i] = c;
           i++;
           printf ("%c", c);
        }
        else if(c==8&&i)
        {
           nome[i]='\0';
           i--;
           printf("\b \b");
        }
     }while(c!=13);

     nome[i]='\0';
 // ------------------------------------------------------------------ TELEFONE -----------------------------------------------------------
     char tel[50];
     char d;
     int j=0;
         printf ("\n\nInforme o telefone do paciente: ");
     do
     {
        d=getch();
        if (isdigit(d)!=0)
        {
           tel[j] = d;
           j++;
           printf ("%c", d);
        }
        else if(d==8&&j)
        {
           tel[j]='\0';
           j--;
           printf("\b \b");
        }
     }while(d!=13);

     tel[j]='\0';
 // ------------------------------------------------------------------ CPF -----------------------------------------------------------
     char cpf[50];
     i=0;

     printf ("\n\nInforme o CPF do paciente: ");

     do
     {
        c=getch();
        if (isdigit(c)!=0)
        {
           cpf[i] = c;
           i++;
           printf ("%c", c);
        }
        else if(c==8&&i)
        {
           cpf[i]='\0';
           i--;
           printf("\b \b");
        }
     }while(c!=13);

     cpf[i]='\0';
    // ------------------------------------------------------------------ CEP -----------------------------------------------------------
    char cep[100];
    i = 0;
    printf("\n\nInforme o CEP do paciente: ");
    do
     {
        c=getch();
        if (isdigit(c)!=0 || c == 45 || c == 46)
        {
           cep[i] = c;
           i++;
           printf ("%c", c);
        }
        else if(c==8&&i)
        {
           cep[i]='\0';
           i--;
           printf("\b \b");
        }
     }while(c!=13);

     cep[i]='\0';
    // ------------------------------------------------------------------ ENDEREÇO -----------------------------------------------------------

            char endereco[100];
            printf ("\n\nInforme o endereco do paciente: ");
            scanf("%s", &endereco);
    // ------------------------------------------------------------------ DATA DE NASCIMENTO ----------------------------------------------------
    int dataNasc = 0;
    int diaNasc = 0;
    int mesNasc = 0;
    char mes[50];
    int anoNasc = 0;
    char ano[10];
    char dia[10];

     do
    {
    // ------------------------------------------------------------------ DIA NASCIMENTO -----------------------------------------------------

    i = 0;
    printf("\n\nInforme o dia de nascimento do paciente: ");

    do
    {
        c = getch();
        if (isdigit(c) != 0)
        {
            dia[i] = c;
            i++;
            printf("%c", c);
        }
        else if (c == 8 && i)
        {
            dia[i] = '\0';
            i--;
            printf("\b \b");
        }
            }while(c!=13);

        dia[i]='\0';
        diaNasc = atoi(dia);
// ------------------------------------------------------------------ MES NASCIMENTO --------------------------------------------------
            i=0;
            printf ("\n\nInforme o mes de nascimento do paciente: ");

            do
            {
            c=getch();
            if (isdigit(c)!=0)
            {
                mes[i] = c;
                i++;
                printf ("%c", c);
            }
            else if(c==8&&i)
            {
                mes[i]='\0';
                i--;
                printf("\b \b");
            }
            }while(c!=13);

        mes[i]='\0';
        mesNasc = atoi(mes);
// ------------------------------------------------------------------ ANO NASCIMENTO ------------------------------------------------
            i=0;
            printf ("\n\nInforme o ano de nascimento do paciente: ");

            do
            {
            c=getch();
            if (isdigit(c)!=0)
            {
                ano[i] = c;
                i++;
                printf ("%c", c);
            }
            else if(c==8&&i)
            {
                ano[i]='\0';
                i--;
                printf("\b \b");
            }
            }while(c!=13);

        ano[i]='\0';
        anoNasc = atoi(ano);
// ------------------------------------------------------- VALIDAÇÃO DA DATA DE NASCIMENTO --------------------------------------------------
        switch (mesNasc)
        {
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            {
                if (diaNasc > 31)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataNasc = 1;
                }

                break;
            }

            case 2:
            {
                if (diaNasc > 29)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataNasc = 1;
                }
                break;
            }

            case 4: case 6: case 9: case 11:
            {
                if (diaNasc > 30)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataNasc = 1;
                }

                break;
            }

            default:
                printf("\n\nDigite uma data valida");
        }

        if (anoNasc == 0 || diaNasc == 0 || (anoNasc - 1900) < 0 || anoNasc > 2022)
        {
            printf("\n\nDigite uma data valida");
            dataNasc = 0;
        }

        } while (dataNasc == 0);
// ------------------------------------------------------------------ E-MAIL ------------------------------------------------------------------
        char email[50];
        int arroba;
        int ponto;

        do
        {
            i = 0;
            arroba = 0;
            ponto = 0;

            printf("\n\nInforme o E-mail do paciente: ");

            do
            {
                c = getch();
                if (isalpha(c) != 0 || isdigit(c) != 0 || c == 64 || c == 46 || c == 45 || c == 95)
                {


                    email[i] = c;
                    i++;
                    printf("%c", c);
                }
                else if (c == 8 && i)
                {
                    email[i] = '\0';
                    i--;
                    printf("\b \b");
                }
                    if (c == 64)
                    {
                        arroba++;
                    }
                    if (c == 46)
                    {
                        ponto++;
                    }

            } while (c != 13);

            email[i] = '\0';
            if (arroba != 1)
            {
                printf("\n\nE-mail invalido");
                ponto++;
            }
            if (ponto == 0)
            {
                printf("\n\nE-mail invalido");
            }

} while (arroba != 1 || ponto == 0);
// ------------------------------------------------------------------ DATA DO DIAGNOSTICO----------------------------------------------------
    int dataDiag = 0;
    int diaDiag = 0;
    int mesDiag = 0;
    char mesD[50];
    int anoDiag = 0;
    char anoD[10];
    char diaD[10];

     do
    {
// ------------------------------------------------------------------- DIA DIAGNOSTICO ---------------------------------------------------------
    i = 0;
    printf("\n\nInforme o dia do diagnostico do paciente: ");

    do
    {
        c = getch();
        if (isdigit(c) != 0)
        {
            diaD[i] = c;
            i++;
            printf("%c", c);
        }
        else if (c == 8 && i)
        {
            diaD[i] = '\0';
            i--;
            printf("\b \b");
        }
            }while(c!=13);

        diaD[i]='\0';
        diaDiag = atoi(diaD);
// ------------------------------------------------------------------ MES DIAGNOSTICO --------------------------------------------------
            i=0;
            printf ("\n\nInforme o mes do diagnostico do paciente: ");

            do
            {
            c=getch();
            if (isdigit(c)!=0)
            {
                mesD[i] = c;
                i++;
                printf ("%c", c);
            }
            else if(c==8&&i)
            {
                mesD[i]='\0';
                i--;
                printf("\b \b");
            }
            }while(c!=13);

        mesD[i]='\0';
        mesDiag = atoi(mesD);
// ------------------------------------------------------------------ ANO DIAGNOSTICO ------------------------------------------------
            i=0;
            printf ("\n\nInforme o ano do diagnostico do paciente: ");

            do
            {
            c=getch();
            if (isdigit(c)!=0)
            {
                anoD[i] = c;
                i++;
                printf ("%c", c);
            }
            else if(c==8&&i)
            {
                anoD[i]='\0';
                i--;
                printf("\b \b");
            }
            }while(c!=13);

        anoD[i]='\0';
        anoDiag = atoi(anoD);
// ------------------------------------------------------- VALIDAÇÃO DA DATA DE DIAGNOSTICO --------------------------------------------------
        switch (mesDiag)
        {
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            {
                if (diaDiag > 31)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataDiag = 1;
                }

                break;
            }

            case 2:
            {
                if (diaDiag > 29)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataDiag = 1;
                }
                break;
            }

            case 4: case 6: case 9: case 11:
            {
                if (diaDiag > 30)
                {
                    printf("\n\nDigite uma data valida");
                }
                else
                {
                    dataDiag = 1;
                }

                break;
            }

            default:
                printf("\n\nDigite uma data valida");
        }

        if (anoDiag == 0 || diaDiag == 0 || (anoDiag - 1900) < 0)
        {
            printf("\n\nDigite uma data valida");
            dataDiag = 0;
        }

        } while (dataDiag == 0);
// ------------------------------------------------------- POSSUI COMORBIDADE ------------------------------------------------------
        int comorbidade;
        int repeticao = 0;
        char comorb[50];

        do
        {
        printf("\n\nO paciente possui alguma comorbidade (diabetes, obesidade, hipertensao, tuberculose etc.)");
        printf("\nSe sim digite 1, caso contrario digite 0:  ");
        i=0;
            do
            {
            c=getch();
            if (isdigit(c)!=0)
            {
                comorb[i] = c;
                i++;
                printf ("%c", c);
            }
            else if(c==8&&i)
            {
                comorb[i]='\0';
                i--;
                printf("\b \b");
            }
            }while(c!=13);

        comorb[i]='\0';
        comorbidade = atoi(comorb);

        if (comorbidade == 0 || comorbidade == 1)
        {
            repeticao++;
        } else
        {
            printf("\n\nDigite uma opcao valida");
        }
       } while (repeticao == 0);

       char idade[10];
        int numero = (2022 - anoNasc);
        sprintf(idade, "%d", numero);

        if (comorbidade == 1 || numero >= 65)
        {
            FILE *Ponteiro;
            Ponteiro = fopen("arquivo.txt", "a");
            fputs("CEP do paciente: ", Ponteiro);
            fputs(cep, Ponteiro);
            fputs("\nIdade do paciente: ", Ponteiro);
            fputs(idade, Ponteiro);
            fputs("\n\n", Ponteiro);

            fclose(Ponteiro);
         }
        printf ("\n\nDados do paciente");
        printf ("\n\nNome: %s", nome);
        printf ("\nTelefone: %s", tel);
        printf ("\nCPF: %s", cpf);
        printf ("\nCEP: %s", cep);
        printf ("\nEndereco: %s", endereco);

        printf ("\nData de nascimento: %d/%d/%d", diaNasc, mesNasc, anoNasc);

        printf ("\nIdade: %d", numero);

        printf ("\nE-mail:  %s", email);

        printf ("\nData do diagnostico: %d/%d/%d", diaDiag, mesDiag, anoDiag);

        if (comorbidade == 1)
        {
            printf ("\nO paciente possui comorbidades");
        }
        else
        {
            printf ("\nO paciente nao possui comorbidades");
        }
}
























