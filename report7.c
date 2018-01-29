#include <stdio.h>

void arrange(int scores[], int size){
  //配列変数resultを用意
  const int Nsize = size;
  int result[Nsize];
  printf("scores = ");//引数のscores配列の出力
  for(int i=0; i<size; i++){
    printf("%d ",scores[i]);
    result[i] = scores[i];
    for(int a = i; a>0; a--){
      //若い数字の配列と比較し並び替える
      if(result[a] > result[a-1]){
	int Otrade = result[a];
	int Ttrade = result[a-1];
	result[a-1] = Otrade;
	result[a] = Ttrade;
      }
    }
  }
  printf("\nresult = ");//scoresの中身を大きい順に並べたresultを出力
  for(int i=0; i<size; i++){
    printf("%d ",result[i]);
  }
}


int main(){
  const int SIZE = 6; //定数として配列のサイズを宣言                          
  int scores[SIZE] = {100, 60, 70, 100, 90, 80};
  //処理コード
  arrange(scores, SIZE);
  return 0;
}
