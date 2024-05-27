#include "lab.h"

int lr1(){
float L; // искомое расстояние между пунктами
float v1; // скорость машины
float v2; // скорость мотоциклиста
float t; // время до встречи

printf("t = ");

scanf("%f", &t);

printf("v1 = ");

scanf("%f", &v1);
printf("v2 = ");

scanf("%f", &v2);

L = t * (v1 + v2);

printf("distance = %f\n", L);


}
int lr1d(){
    
int L; // искомое расстояние между пунктами
float v1; // скорость машины
float v2; // скорость мотоциклиста
int t; // время до встречи

printf("t = ");

scanf("%i", &t);

printf("v1 = ");

scanf("%f", &v1);

printf("v2 = ");

scanf("%f", &v2);

L = t * ((int)v1 + (int)v2);

printf("distance = %i\n", L);
    
}
int lr2(){
    
float s; // сумма ряда
float d; // очередной элемент ряда
float eps; // входной параметр ряда
int a; // числитель
int b; // знаминатель
int sign; // знак очередного элемента ряда
// ввод параметра ряда
printf("eps=");
scanf("%f", &eps);
// начальное присваивание переменных
sign = -1;
a=b=d=1;
s=1;
// цикл
while( d > eps ){
a+=1;
b*=2;
d=(float)a/b;
s+=(float)sign*d;
sign=-sign;
}
// вывод результата
printf("s = %f\n", s);
    
}
int lr2d(){
    
float s; // сумма ряда
float d; // очередной элемент ряда
float eps; // входной параметр ряда
int a; // числитель
int b; // знаминатель
int sign; // знак очередного элемента ряда
int count=0;
// ввод параметра ряда
printf("eps=");
scanf("%f", &eps);
// начальное присваивание переменных
sign = -1;
a=b=d=1;
s=1;
for(int i=0; i>=0; i++){
a++;
b*=2;
d=(float)a/b;
if(d<eps){
break;
}else{
count++;
}
}
a=b=d=1;
// цикл
for(int i=count;i>0;i--){
a+=1;
b*=2;
d=(float)a/b;
s+=(float)sign*d;
sign=-sign;
}
// вывод результата
printf("s = %f\n", s);
    
}

int lr3(){
int c; // текущий символ из потока
int prev_c; // предыдущий символ
int flag; // признак слова
int cnt; // счётчик
int found; // индикатор того, что искомый признак
// обнаружен
// начальные присваивания (инициализация)
cnt = 0;
flag = NO;
found = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
// найден разделитель
if( flag == YES ){
// это первый разделитель после слова
if( found != YES ){
// две последних буквы в слове
// были одинаковы
cnt = cnt + 1;
}
}
flag = NO;
found = NO;
}else{
if(found == NO){
if( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c
!= 'I' && c != 'O' && c != 'U' )
found = NO;
else
found = YES;
}
flag = YES;
}
}
printf("\nnumber of words = %d\n", cnt );

}

int lr3d(){
    
int c; // текущий символ из потока
int prev_c; // предыдущий символ
int flag; // признак слова
int cnta; // счётчик
int cntb;
int founda; // индикатор того, что искомый признак
int foundb; // индикатор того, что искомый признак
// обнаружен
// начальные присваивания (инициализация)
cnta = 0;
cntb = 0;
flag = NO;
founda = NO;
foundb = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
// найден разделитель
if( flag == YES ){
// это первый разделитель после слова
if( foundb == NO ){
cntb++;
}
if( founda == NO ){
cnta++;
}
}
flag = NO;
foundb = NO;
founda = NO;
}else{
if(foundb == NO){
if( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O'
&& c != 'U' )
foundb = NO;
else
foundb = YES;
}
if(founda == NO){
if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c
== 'U' )
founda = NO;
else
founda = YES;
}
flag = YES;
}
}
printf("\nnumber of words glas = %d\n", cnta );
printf("number of words sogls = %d\n", cntb );

}

int lr4(){
    
int h;
char c;
int cnta;
int cntb;
int cnt;
char str[100];
int i = 0;
while( (c = getchar()) != EOF && h<100){
if (c == '\n' && h != 0){
break;
}
str[h] = c;
h++;
}
//scanf("%s", &str);
//getline(str);
int j = 0;
char word[100];
//printf("%s ", str);
for (int i = 0; i <= h+1; i++) {
if (str[i] != ' ' && i!=h ) {
word[j++] = str[i];
c = str[i];
if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A'
&& str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' ){
cntb++;
}else{
cnta++;
}
//printf("%f ", cnta);
} else {
if(i==h) word[j++] = str[i];
word[j++]='\0' ;
j = 0;
//cnt=strlen(word);
if (cntb >= cnta) {
printf("%s ", word);
}
cnta = 0;
cntb = 0;
}
}
    
} 

    
char alph(char liter, int operation) {
char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
'z'};
char ABC[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z'};
if (operation == 1){
for (int i = 0; i < 26; i++) {
if (liter == abc[i]){
return 'd';
break;
}
}
for (int i = 0; i < 26; i++) {
if (liter == ABC[i]){
return 'u';
break;
}
}
}
if (operation == 2){
for (int i = 0; i < 26; i++) {
if (liter == abc[i]){
return ABC[i];
break;
}
}
for (int i = 0; i < 26; i++) {
if (liter == ABC[i]){
return abc[i];
break;
}
}
}
}

int lr4d(){
int h;
char c;
int cnta;
int cntb;
int cnt;
char str[100];
int i = 0;
while( (c = getchar()) != EOF && h<100){
if (c == '\n' && h != 0){
break;
}
str[h] = c;
h++;
}
int j = 0;
char word[100];
for (int i = 0; i <= h+1; i++) {
if (str[i] != ' ' && i!=h-1 ) {
word[j++] = str[i];
c = str[i];
if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E'
&& str[i] != 'I' && str[i] != 'O' && str[i] != 'U' ){
cntb++;
}else{
cnta++;
}
} else {
if(i==h) word[j++] = str[i];
word[j++]='\0' ;
if (cntb >= cnta) {
printf("%s ", word);
}else{
for(int y = 0; y<=j; y++){
if(word[y] == 'a' || word[y] == 'e' || word[y] == 'i' || word[y] == 'o' || word[y] == 'u' || word[y]
== 'A' || word[y] == 'E' || word[y] == 'I' || word[y] == 'O' || word[y] == 'U' ){
word[y] = alph(word[y], 2);
}
}
printf("%s ", word);
}
j = 0;
cnta = 0;
cntb = 0;
}
}
    
}

int lr5(){
int i;
int cntN;
int cntC;
int num[10];
for ( i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
}

/**/
for ( i = 0; i < 10; i+=2) {
    cntC += num[i];
}
for ( i = 1; i < 10; i+=2) {
    cntN += num[i];
}

for (i=0; i < 10; i+=2) {
    if (cntC<cntN&&i<1)
        i++;
    num[i] = 0;
}
/**/
for( i = 0; i < 10; i++ )
    printf("%d ", num[i]);
printf("\n");


}     


int lr5d(){
    
int i;
int cntN;
int cntC;
int num[10];
for ( i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
}

/**/
for ( i = 0; i < 10; i+=2) {
    cntC += num[i];
}
for ( i = 1; i < 10; i+=2) {
    cntN += num[i];
}

for (i=0; i < 10; i+=2) {
    if (cntC<cntN&&i<1)
        i++;
    if (i!=0 && i < 8){
        if ((num[i+1] <= num[i] && num[i] >= num[i-1]) || (num[i] < num[i+1] && num[i] < num[i-1]))
            num[i] = 0;
    }    
}
/**/
for( i = 0; i < 10; i++ )
    printf("%d ", num[i]);
printf("\n");

    
    
} 

int lr6(){

int K = 3;
int N = 4;
//scanf("%d", K);
//scanf("%d", N);
    
int x[3][4]; // массив из K на N элементов
int aver; // среднее арифметическое
int i, j;
int cntM = 0;
int cnt = 0;
int Xs = 0;
int dir = 1;
int r;
int m;
int l;
int p;

for( i = 0; i < K; i++ ){
    for( j = 0; j < N; j++ )
        scanf("%d", &x[i][j]);
}
for(l = -N; l < N; l++){
    m = l;
    p = 0;
    cnt = 0; 
    for(; m < N; m++ ){

        if (m>=0 && p<K){
        cnt += x[p][m];
        p++;
        }
    }
          
    if(cnt>cntM){
        cntM = cnt;
        Xs = l;
        dir = 1;
    }
}

for(l = 2*N; l >= 0; l--){
    m = l;
    p = 0;
    cnt = 0; 
    for(; m >=0; m-- ){

        if (m>=0 && p>=0 && m<N && p<K){
        cnt += x[p][m];
        p++;
        }
    }
          
    if(cnt>cntM){
        cntM = cnt;
        Xs = l;
        dir = -1;
    }
}
//printf("%d ", Xs);
//printf("\n");
//if(dir==1)p = 0;
p=0;
//if(dir!=1)p = K-1;
for(m = Xs; p<K&&p>=0;){
    x[p][m] = 0;
    m += dir;
    p++;
}
//}

for( i = 0; i < K; i++ ){
    for( j = 0; j < N; j++ )
        printf("%4d ", x[i][j]);
    printf("\n");
}


    
}

int lr6d(){

int N = 3;
int i;
int j;
int c;
int num[3][3];
int sort[3*3];
for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &num[i][j]);
            sort[j+N*i] = num[i][j];
        }
    }
i = 1;
while (i < N) {
		if (i == 0) {
			i = 1;
		}
		if (sort[i-1] <= sort[i]) {
			++i;
		} else {
			int cnt = sort[i];
			sort[i] = sort[i-1];
			sort[i-1] = cnt;
			--i;
		}
	}
for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            num[i][j] = sort[j+N*i];
        }
    }
for( i = 0; i < N; i++ ){
    for( j = 0; j < N; j++ )
        printf("%4d ", num[i][j]);
    printf("\n");
}



}


int lr7(){
long int N;
int K;
printf("Number = ");
scanf("%li", &N);
printf("derection = ");
scanf("%i", &K);
for(int i = 0; i < K; i++){
    N = N >> 1;
}
printf("%li", N);


}






int lr7d(){}
