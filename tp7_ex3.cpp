//�crire :
//Une fonction int saisie_n() permettant de saisir un entier 5<=n<=20,
//Une proc�dure void chargement(int, int *) permettant de charger un tableau t par n
//entiers,
//Une proc�dure void affichage (int, int *) permettant d�afficher les �l�ments de t
//Le programme principal d�clarant n et un tableau dynamique t pouvant contenir n entiers
//et d�appeler les deux proc�dures chargement et affichage.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int saisie_n();
	void chargement(int, int *);
	void affichage (int, int *);
	int n;
	int *t;
	n=saisie_n();
	t=(int*)malloc(n*sizeof(int));
	if (t==NULL){
		printf("erreur");
		return 0;
	}
	else{
		chargement(n,t);
		affichage(n,t);		
	}
	if(t!=NULL){
		free(t);
	}
	return 0;
}

int saisie_n(){
	int n;
	do{
		printf("donner n=");
		scanf("%d",&n);
	}while((n<5)||(n>20));
	return n;
}

void chargement(int n, int *p1){
	int* p2; //pointeur pour parcourir le tableau
	//p1 pointe vers la premiere case du tableau
	for(p2=p1; p2<p1+n; p2++){
		printf("donner t[%d]",p2-p1);
		scanf("%d",p2);
	}
}

void affichage(int n, int *p1){
	int* p2; //pointeur pour parcourir le tableau
	//p1 pointe vers la premiere case du tableau
	for(p2=p1; p2<p1+n; p2++){
		printf("t[%d]=%d\t",p2-p1,*p2);
	}
}
