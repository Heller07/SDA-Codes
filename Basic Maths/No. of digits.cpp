int digits(int n){
    int cnt = 0;
    while(n!=0){
      cnt++;
      n = n/10;
    }
}
//another method
int digits = (int)(log10(n)+1);
