//Quantidade de linhas e Colunas
#define ROWS_COUNT 5
#define COLS_COUNT 7
#define LAYOUT_COUNT 3

//Definindo os Pinos
int L = 0;
int rows[ROWS_COUNT] = {1, 2, 3, 4, 5};
int cols[COLS_COUNT] = {6, 7, 8, 9, 10, 11, 12};
int layout[LAYOUT_COUNT] = {0, 1, 2};

//Camada | linha | coluna
char layout[LAYOUT_COUNT][ROWS_COUNT][COLS_COUNT] = {
    //Minusculo
    {        
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '}
    },

    //Maiusculo
    {        
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '}
    },
    
    //Especiais
    {        
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '}
    }

};

void setup(){
    //Definindo as Linhas como Input
    for(int r = 0; r < ROWS_COUNT; r++){
        pinMode(rows[r], INPUT_PULLUP);
    }
    //Definindo as colunas como output
    for(int c = 0; c < COLS_COUNT; c++){
        pinMode(cols[c], OUTPUT);
        digitalWrite(cols[c], HIGH);
    }
    Serial.begin(9600);
}

void layotAtual(int L, int R, int C){
    posicaoAtual = 0;
    switch(){
        case "":
        Keyboard.print(layout[L][R][C]); 
        break;
    }
}

//Função que verifica o o botão pressionado e o tempo que foi precionado 
void botaoPressionado(int L, int R, int C){
    long TempoPrecionado = millis(); // conta o tempo desde que o botão começou a ser precionado
    char tecla = layout[L][R][C]; //Pega a tecla precionada     
    do{  
        //Tecla de mudar o layout1 e aspas      
        if (L = 5 && C = 1 && TempoPrecionado > 2000){
            if(L < 3){
                //Muda A posiçao se segurar
                L++;
                layotAtual(L, R, C);
            }else{
                layotAtual(L, R, C);
            }
        }else{
            //Imprime aspas
            layotAtual(L, R, C);
        }

        //Tecla de mudar o layout2
        if (r = 2 && c == 7 ){
            if(L < 3){
                //Muda A posiçao
                L++;
                layotAtual(L, R, C);
            }else{
                layotAtual(L, R, C);
            }
        }
        //Tecla Normal
        else{
            L = 1;
            layotAtual(L, R, C);
        }                
    }
    while (TempoPrecionado > 1500); //continua imprimindo se for precionado por mais de 1500 milissegundos, equivalente a 1,5 segundos
    delay(100);
}

// Verifica se alguma tecla foi pressionada
void TecladoFunction(){
    //Passa pelas colunas
    for (int c = 0; c < COLS_COUNT; c++){
        //Ativa a coluna
        digitalWrite(cols[c], 0);
        // Passa pelas linhas
        for (int r = 0; r < ROWS_COUNT; r++){            
            //Verifica se o botão foi precionado
            if (digitalRead(rows[r]) == LOW){
                //Chama função que verifica qual botão e quanto tempo foi pressionado
                botaoPressionado(l, r, c); 
                
            }        
        }
        digitalWrite(cols[c], HIGH);        
    }
}


void loop(){
    teclaPressionada();
    delay(100);
}