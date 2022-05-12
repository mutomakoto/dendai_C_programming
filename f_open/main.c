#include <stdio.h>
main(){
  FILE* fa;
  FILE* fb;
  int c;
  char fileA[]="a.txt";
  char fileB[]="b.txt";
  if((fa=fopen(fileA,"r"))==0){
    fprintf(stderr,"ファイル %s を開けませんでした。エラーコードは%dです\n",fileA,2);
    return 2;
  }
  if((fb=fopen(fileB,"w"))==0){
    fclose(fa);
    fprintf(stderr,"ファイル %s を開けませんでした。エラーコードは%dです\n",fileB,3);
    return 3;
  }
  while((c=getc(fa))!=EOF){
    fprintf(fb,"%c",c);
  }
  fclose(fb);
  fclose(fa);
}
