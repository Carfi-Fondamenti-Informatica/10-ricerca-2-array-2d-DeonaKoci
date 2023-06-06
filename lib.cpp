bool cerca(char listanome[10][20], int &pos, char a[]){
    for(int i=0;i<10;i++){

        for(int j=0;j<20;j++){
            if(listanome[i][j] != a[j]){
                  j = 20;
            }else{

                    if(j==19){
                          pos = (i);

                           return true;

                    }}}
    }
    return false;
}
