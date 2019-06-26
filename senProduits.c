#include <stdio.h>
#include<windows.h>
// taille du tableau d'article
const N =2000;


struct article{
    char nomArt[30];
    char catArt[30];
    char datfArt[10];
    char payArt[30];
    char nomFab[30];
};



int menu(){
    int choix;
    menu:;
    system("cls");
    puts("\n\n\n");
    puts("\t\t\t**************************************");
    puts("\t\t\t**                                  **");
    puts("\t\t\t**              MENU                **");
    puts("\t\t\t**                                  **");
    puts("\t\t\t**************************************");
    puts("\t\t\t**                                  **");
    puts("\t\t\t**    1- Ajouter un article         **");
    puts("\t\t\t**    2- Afficher les articles      **");
    puts("\t\t\t**    3- Rechercher article         **");
    puts("\t\t\t**    4- Modifier article           **");
    puts("\t\t\t**    5- Supprimer article          **");
    puts("\t\t\t**    6- Noms fabricants            **");
    puts("\t\t\t**    7- Quitter                    **");
    puts("\t\t\t**                                  **");
    puts("\t\t\t**************************************");
    puts("\n\nFaites un choix:");
    scanf("%d", &choix);
    fflush(stdin);

    if((choix>0 && choix <8)){
        
        return choix;
    }
    
goto menu;
}



void main(){
    int a;
    int nbrArt;
    nbrArt=0;
    struct article tabArt[N];

    squall:;

    a=menu();

    switch(a){
        case 1:
            newArt:;
            system("cls");
            puts("\t\t\t**************************************");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**    1- Ajouter un article         **"); 
            puts("\t\t\t**                                  **");
            puts("\t\t\t**************************************");
            puts("\n\n");

            fflush(stdin);
            printf("Saisissez le nom de l'article %d \n", nbrArt+1);
            gets(tabArt[nbrArt].nomArt);
            printf("\nSaisissez la catégorie de l'article %d \n", nbrArt+1);
            gets(tabArt[nbrArt].catArt);
            printf("\nSaisissez la date de fabrication de l'article %d \n", nbrArt+1);
            gets(tabArt[nbrArt].datfArt);
            printf("\nSaisissez le pays d'origine de l'article %d \n", nbrArt+1);
            gets(tabArt[nbrArt].payArt);
            printf("\nSaisissez le nom du fabricant de l'article %d \n", nbrArt+1);
            gets(tabArt[nbrArt].nomFab);

            nbrArt++;
            char rep;
            do
            {
                fflush(stdin);
                printf("\n\n\n Voulez vous ajouter un autre article ? [o/n] : ");
                scanf("%c",&rep);
            }
            while(rep!='o'&&rep!='O'&&rep!='n'&&rep!='N');
            if(rep=='o'||rep=='O')
            {
                goto newArt;
            }
            goto squall;
        break;
        case 2:
            system("cls");
            puts("\t\t\t**************************************");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**    2- Afficher les articles      **");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**************************************");
            puts("\n\n");

            for (int i = 0; i < nbrArt; i++)
            {
                puts("\n#############################\n");
                printf("Article %d \n Nom: %s \n Categorie: %s \n Date de fabrication: %s \n Pays d'origine: %s \n Nom fabricant: %s \n", (i+1), tabArt[i].nomArt, tabArt[i].catArt, tabArt[i].datfArt, tabArt[i].payArt, tabArt[i].nomFab);
                puts("\n#############################\n");
            }
                                    system("pause");

            goto squall;
        break;
        case 3:
            system("cls");
            puts("\t\t\t**************************************");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**    3- Rechercher article         **");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**************************************");
            puts("\n\n");

            char paysearch[30];
            puts("Saisissez le pays d'origine des produits à rechercher:");
            gets(paysearch);
            puts("\n\n");
            for (int i = 0; i < nbrArt; i++)
            {
                if(strcmp(tabArt[i].nomArt,paysearch)==0)
                {
                    puts("\n#############################\n");
                    printf("Article %d \n Nom: %s \n Categorie: %s \n Date de fabrication: %s \n Pays d'origine: %s \n Nom fabricant: %s \n", (i+1), tabArt[i].nomArt, tabArt[i].catArt, tabArt[i].datfArt, tabArt[i].payArt, tabArt[i].nomFab);
                    puts("\n#############################\n");
                }
            }
            

                                    system("pause");
            
            goto squall;
        break;
        case 4:
        system("cls");
        int numodif;
            puts("\t\t\t**************************************");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**    4- Modifier article           **");
            puts("\t\t\t**                                  **");
            puts("\t\t\t**************************************");
            puts("\n\n");
            puts("Quel numero d'article souhaitez vous modifier?");
            scanf("%d", &numodif);
            goto squall;
        break;
        case 5:
            goto squall;
        break;
        case 6:
            goto squall;
        break;
        case 7:
            goto manu;
        break;

        manu:;
    }

    

}