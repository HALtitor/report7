#include <stdio.h>

void arrange(int array[], int size){
  const int Nsize = size;
  int Nscores[Nsize];
  for(int i=0; i<size; i++){
    Nscores[i] = array[i];
    for(int a = i; a>0; a--){
      if(Nscores[a] < Nscores[a-1]){
	int Otrade = Nscores[a];
	int Ttrade = Nscores[a-1];
	Nscores[a-1] = Otrade;
	Nscores[a] = Ttrade;
      }
      printf("data[%d] = %d\n",i,Nscores[i]);
    }
    printf("data[%d] = %d\n",i,Nscores[i]);
  }
}


int main(){
  const int SIZE = 5; //定数として配列のサイズを宣言                          
  int scores[SIZE] = {0, 60, 30, 100, 90};
  //処理コード
  arrange(scores, SIZE);
  return 0;
}
