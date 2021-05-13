#include <stdio.h>
#include <math.h>
#include <iostream>

int main(){
	//Tahtamýzdaki Taþlar
	bool taslar[7][7] = {{false,false,true,true,true,false,false},
	{false,false,true,true,true,false,false},
	{true,true,true,true,true,true,true},{true,true,true,false,true,true,true},
	{true,true,true,true,true,true,true},{false,false,true,true,true,false,false},
	{false,false,true,true,true,false,false}};
	int j,k,i =0,n=0;
	int v,c;
	int a,b,o,p,t=0;
	int counterPins=32;
	
	//Gerekli uyarýlar ve oyun tahtasýný gösterelim
    printf("Solo test nasil oynanir ? Asagidaki koordinat sistemi ile\n , oynamak istediginiz tasin koordinatini\nve goturmek istediginiz yonu seciniz\n");
    printf("Yonler;\n1 : Yukari\n2 : Saga\n3 : Asagi\n4 : Sola");
    printf("\n\n\n");
    printf("Not : 3-3 numarali koordinatin baslangicta bos oldugunu unutmayin! ");
    printf("\n\n\n");
    printf("Bitirmek icin yon secimine -1 giriniz\n");
    printf("Oyun Tahtasi ;");
    printf("\n");
		while(i<1){
    printf("\n\n\n");
    printf("  0 1 2 3 4 5 6\n");
		while(n<1){
			for(j=0;j<7;j++){
		 		printf("%d ",j);
				for(k=0;k<7;k++){
					if(taslar[j][k]==true){
					
						printf("* ");
					}else{
						printf("  ");
					}
				}
				printf("\n");
			}
			n++;
			printf("\n");
		}
		n=0;
		i++;
	}
    printf("\n\n\n");
	while(t<1){	
		printf("Oynamak istediginiz tasin y eksenini (asagi dogru satýr) seciniz\n");
		scanf("%d",&a);
		printf("Oynamak istediginiz tasin x eksenini (saga dogru sutun) secinizm\n");
		scanf("%d",&b);
		if((a<2 && b<2 && b>4) || (a>4 && b>4 && b<2)){
			printf("Bu koordinat secilemez\n");
		}else{
			printf("\n\n\n\n");
			printf("Goturmek istediginiz yonu seciniz\n");
	 		printf("Yonler;\n1 : Yukari\n2 : Saga\n3 : Asagi\n4 : Sola\n");
	 		scanf("%d",&o);
	 	printf("\n\n\n\n");	
	 	//Yukarý Hareket
		if(o==1 ){
			if(taslar[a][b]==true &&  taslar[a-1][b]==true && taslar[a-2][b]==false ){
				if(a<2){
					printf("Boyle bir hamle yapilamaz!\n");
				}else if(b<2 && a<4){
					printf("Boyle bir hamle yapilamaz!\n");
				}else if(b>4 && a<4){
					printf("Boyle bir hamle yapilamaz!\n");
				}else {
				taslar[a][b]=false;
				taslar[a-1][b]=false;
				taslar[a-2][b]=true;
				counterPins--;
				}	
			}else{
				printf("Boyle bir hamle yapilamaz!\n");
			}
		}
		//Saða Hareket
		if(o==2){
			if(taslar[a][b]==true &&  taslar[a][b+1]==true && taslar[a][b+2]==false){
				if(a<2 && b>2){
					printf("Boyle bir hamle yapilamaz!\n");
				}else if(a>1 && b>4){
					printf("Boyle bir hamle yapilamaz!\n");
				}else if(a>4 && b>2){
					printf("Boyle bir hamle yapilamaz!\n");
				}else{
				taslar[a][b]=false;
				taslar[a][b+1]=false;
				taslar[a][b+2]=true;
				counterPins--;
				}
			}else{
				printf("Boyle bir hamle yapilamaz!\n");}	
		}
		//Aþaðý Hareket
		if(o==3){
			if(taslar[a][b]==true &&  taslar[a+1][b]==true && taslar[a+2][b]==false){
				if(b<2 && a>2){
					printf("Boyle bir hamle yapilamaz!\n");
				}else if(b>4 && a>2){
					printf("Boyle bir hamle yapilamaz!\n");}
				else if(a>4){
					printf("Boyle bir hamle yapilamaz!\n");}
				else{
					taslar[a][b]=false;
					taslar[a+1][b]=false;
					taslar[a+2][b]=true;
					counterPins--;
				}
				}else{	
			
				printf("Boyle bir hamle yapilamaz!\n");}}
		//Sola Hareket
		if(o==4){
			if(taslar[a][b]==true &&  taslar[a][b-1]==true && taslar[a][b-2]==false){
				if(b<2){
					printf("Boyle bir hamle yapilamaz!\n");}
				else if(b<4 && a<2){
					printf("Boyle bir hamle yapilamaz!\n");}
				else if(b<4 && a>4){
					printf("Boyle bir hamle yapilamaz!\n");}
				else{
					taslar[a][b]=false;
					taslar[a][b-1]=false;
					taslar[a][b-2]=true;
					counterPins--;
				}			
			}else{
				printf("Boyle bir hamle yapilamaz!\n");}
		}
		if(o==-1){
			t+=2;
		}
		i=0;
		n=0;
		while(i<1){
			printf("Bitirmek icin , yon secimine -1 giriniz");
    printf("\n");
    printf("  0 1 2 3 4 5 6\n");
		while(n<1){
			for(j=0;j<7;j++){
		 		printf("%d ",j);
				for(k=0;k<7;k++){
					if(taslar[j][k]==true){
					
						printf("* ");
					}else{
						printf("  ");
					}
				}
				printf("\n");
			}
			n++;
			printf("\n");
		}
		n=0;
		i++;
	}}	
	//Ana döngü bitiþi
	}
	if(counterPins==1){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Parcaladin attin oyunu , tebrik ederim..\n");
	}else if (counterPins==2){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Sen bir dahi olmalisin..\n");
	}else if (counterPins==3){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Harika!\n");
	}else if (counterPins==4){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Normal...\n");
	}else if (counterPins==5){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Yetersizdi...\n");
	}else if (counterPins==6){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Daha cok calismalisin..");
	}else if (counterPins==7){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Cok kotu...\n");
	}else if(counterPins >= 8){
		printf("%d tane tas kaldi\n",counterPins);
		printf("Derhal bu oyunu rahat birak beceremiyorsun!\n");
	}
//Bitti
}
