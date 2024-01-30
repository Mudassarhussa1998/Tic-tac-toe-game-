#include <iostream>
#include <ctime>
#include <random>

using namespace std;

//mudassar
char table[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};
int rows, columns;
char playerturn = 'X' ;
char selectedcell ;
bool gameOver = false;



char board[9]= {' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' ' , ' '};
void show_board();
void get_x_player_choice();
void get_computer_choice();
int count_board(char symbol);
char check_winner();
void computer_vs_player();


int wonCount[2] = {0,0};
char table1[4][4] = {{'*', '*', '*','*'}, {'*', '*', '*' ,'*'}, {'*', '*', '*' ,'*'}, {'*', '*', '*' ,'*'}};
char playerturn1 = 'Y';
void switchplayer1()
{
    if( playerturn1 == 'X')
    {
        playerturn1 = 'Y';
    }
    else
    {
        playerturn1 ='X';
    }
}

void Board1()
{

    cout<<"\n\n";
    cout << "   |      |     |   \n";
    cout << " " << table1[0][0] << " |  " << table1[0][1] << "   | " << table1[0][2] << "   | " << table1[0][3] << "\n";
    cout << "___|______|_____|___\n";
    cout << "   |      |     |   \n";
    cout << " " << table1[1][0] << " |  " << table1[1][1] << "   | " << table1[1][2] << "   | " << table1[1][3] << "\n";
    cout << "___|______|_____|___\n";
    cout << "   |      |     |   \n";
    cout << " " << table1[2][0] << " |  " << table1[2][1] << "   | " << table1[2][2] << "   | " << table1[2][3] << "\n";
    cout << "___|______|_____|___\n";
    cout << "   |      |     |   \n";
    cout << " " << table1[3][0] << " |  " << table1[3][1] << "   | " << table1[3][2] << "   | " << table1[3][3] << "\n";
    cout << "   |      |     |   \n";
}

int check1()
{
    if (table1[0][0] == table1[1][1] && table1[1][1] == table1[2][2] && table1[0][0] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[3][3] == table1[1][1] && table1[1][1] == table1[2][2] && table1[1][1] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[0][3] == table1[1][2] && table1[1][2] == table1[2][1] && table1[2][1] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[3][0] == table1[2][1] && table1[2][1] == table1[1][2] && table1[1][2] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[1][3] == table1[2][2] && table1[2][2] == table1[3][1] && table1[3][1] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[3][3] == table1[1][1] && table1[1][1] == table1[2][2] && table1[1][1] != '*')
    {
        cout << playerturn << " win by d1 \n";
        return 1;
    }
    else if (table1[0][2] == table1[1][1] && table1[1][1] == table1[2][0] && table1[0][2] != '*')
    {
        cout << playerturn << " win by d2 \n";
        return 1;
    }
    else if (table1[0][0] == table1[1][0] && table1[1][0] == table1[2][0] && table1[0][0] != '*')
    {
        cout << playerturn << " win by v1 \n";
        return 1;
    }
    else if (table1[1][0] == table1[2][0] && table1[2][0] == table1[3][0] && table1[3][0] != '*')
    {
        cout << playerturn << " win by v1 \n";
        return 1;
    }
    else if (table1[0][1] == table1[1][1] && table1[1][1] == table1[2][1] && table1[0][1] != '*')
    {
        cout << playerturn << " win by v2 \n";
        return 1;
    }
    else if (table1[3][1] == table1[1][1] && table1[1][1] == table1[2][1] && table1[3][1] != '*')
    {
        cout << playerturn << " win by v2 \n";
        return 1;
    }
    else if (table1[0][2] == table1[1][2] && table1[1][2] == table1[2][2] && table1[0][2] != '*')
    {
        cout << playerturn << " win by v3 \n";
        return 1;
    }
    else if (table1[3][2] == table1[1][2] && table1[1][2] == table1[2][2] && table1[3][2] != '*')
    {
        cout << playerturn << " win by v3 \n";
        return 1;
    }
    else if (table1[0][3] == table1[1][3] && table1[1][3] == table1[2][3] && table1[1][3] != '*')
    {
        cout << playerturn << " win by v3 \n";
        return 1;
    }
    else if (table1[3][3] == table1[1][3] && table1[1][3] == table1[2][3] && table1[1][3] != '*')
    {
        cout << playerturn << " win by v3 \n";
        return 1;
    }
    else if (table1[0][0] == table1[0][1] && table1[0][1] == table1[0][2] && table1[0][2] != '*')
    {
        cout << playerturn << " win by h1 \n";
        return 1;
    }
    else if (table1[0][3] == table1[0][1] && table1[0][1] == table1[0][2] && table1[0][3] != '*')
    {
        cout << playerturn << " win by h1 \n";
        return 1;
    }
    else if (table1[1][0] == table1[1][1] && table1[1][1] == table1[1][2] && table1[1][2] != '*')
    {
        cout << playerturn << " win by h2 \n";
        return 1;
    }
    else if (table1[1][3] == table1[1][1] && table1[1][1] == table1[1][2] && table1[1][2] != '*')
    {
        cout << playerturn << " win by h2 \n";
        return 1;
    }
    else if (table1[2][0] == table1[2][1] && table1[2][1] == table1[2][2] && table1[2][2] != '*')
    {
        cout << playerturn << " win by h3 \n";
        return 1;
    }
    else if (table1[2][3] == table1[2][1] && table1[2][1] == table1[2][2] && table1[2][2] != '*')
    {
        cout << playerturn << " win by h3 \n";
        return 1;
    }
    else if (table1[3][0] == table1[3][1] && table1[3][1] == table1[3][2] && table1[3][2] != '*')
    {
        cout << playerturn <<" win by h3 \n";
        return 1 ;
    }
    else if(table1[3][3]==table1[3][1] && table1[3][1]==table1[3][2] && table1[3][3]!= '*' )
    {
        cout<< playerturn <<" win by h3 \n";
        return 1 ;
    }


     for (int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
           if (table1[i][j] == '*')
           return -1;
        }
    }
}

void resetGame1(){
    for (int i = 0; i<4;i++){
        for(int j=0;j<4;j++){
            table[i][j] = '*';
        }
    }
    gameOver=false;
}
void resetGame(){
    for (int i = 0; i<3;i++){
        for(int j=0;j<3;j++){
            table[i][j] = '*';
        }
    }
    gameOver=false;
}
void Scoreboard()
{
    cout<<"\n==========================\n";
    cout<<"X Won :: "<<wonCount[0];
    cout<<"\nY Won :: "<<wonCount[1];
    cout<<"\n==========================\n";


}

void Scoreboardcond()
{
    if(playerturn == 'X' )
    {
        cout<<"1 point to "<< playerturn << endl ; 
        wonCount[0]+=1;
       
    }else
    {
    cout<<"1 point to "<< playerturn << endl ; 
    wonCount[1]+=1;
    }

}

void Board()
{

    cout<<"\n"; 
    cout << "          |      |     \n";
    cout << "        " << table[0][0] << " |  " << table[0][1] << "   | " << table[0][2] << "\n";
    cout << "      ____|______|_____\n";
    cout << "          |      |     \n";
    cout << "       " << table[1][0] << "  |  " << table[1][1] << "   | " << table[1][2] << "\n";
    cout << "      ____|______|_____\n";
    cout << "          |      |     \n";
    cout << "        " << table[2][0] << " |  " << table[2][1] << "   | " << table[2][2] << "\n";
    cout << "          |      |     \n\n\n";
}
void switchplayer()
{
    if( playerturn == 'X')
    {
        playerturn = 'Y';
    }
    else
    {
        playerturn='X';
    }
}
int check()
{
    if(table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] != '*')
    {
        cout << "     "<< playerturn << " win  \n";
        return 1 ;
    
    }
    else if(table[0][2] == table[1][1] && table[1][1] == table[2][0] && table[0][2] != '*')
    {
        cout << "     "<< playerturn << " win  \n";
        return 1 ;
    }
    else if(table[0][0]==table[1][0] && table[1][0]==table[2][0] && table[0][0]!= '*' )
    {
        cout<< "     "<< playerturn<<" win  \n";
        return 1 ;
    }
    else if(table[0][1]==table[1][1] && table[1][1]==table[2][1] && table[0][1]!= '*' )
    {
        cout<< "     "<< playerturn<<" win  \n";
        return 1 ;
    }
    else if(table[0][2]==table[1][2] && table[1][2]==table[2][2] && table[0][2]!= '*' )
    {
        cout<< "     "<< playerturn<<" win  \n";
        return 1 ;
    }
    else if(table[0][0]==table[0][1] && table[0][1]==table[0][2] && table[0][2]!= '*' )
    {
        cout<< "     "<< playerturn<<" win  \n";
        return 1 ;
    }
    else if(table[1][0]==table[1][1] && table[1][1]==table[1][2] && table[1][2]!= '*')
    {
        cout<< "     "<< playerturn<<" win  \n";
        return 1 ;
    }
    else if(table[2][0]==table[2][1] && table[2][1]==table[2][2] && table[2][2]!= '*' )
    {
        cout<< "     "<<playerturn <<" win  \n";
        return 1 ;
    }

     for (int i = 0; i<3;i++)
        {
            for(int j=0;j<3;j++)   
            {
                if (table[i][j] == '*')
                return -1;
            }
        }

    return 0;
}

int main()
{
    int j ;
    cout<<"Enter 1 - 4 to select mode : "<<endl;
    cout<<"1 for 2 player "<<endl;
    cout<<"2 for Tournment "<<endl;
    cout<<"3 for Single Player"<<endl;
    cout<<"4 for 4x4 Mode"<<endl;
    cout<<"5 for Exist"<<endl;
    cin>>j;


    switch (j)
        {
        case 1 : cout<<"You have Entered into 2 player mode "<<endl ;
    
        while(true)
        {

            while(true)
            {
                Board();

                cout<<"         "<< playerturn <<" player turn \n\n\n" ;

                cout<<"Please enter row and column number : \n";
                cin>>rows>>columns;

                try{
                if  (rows <0 || rows >2 || columns <0 || columns > 2)
                {
                    
                   throw 404;
                }
                }
                catch(int error)
                {
                    cout<<"In valid row column choice ;";
                    continue;
                }

                selectedcell = table[rows][columns];

                if(selectedcell != '*')
                {
                    cout<<"already taken \n";
                    continue;
                }
                else
                {
                    table[rows][columns]=playerturn;
                }

                if (check() == 1) 
                {
                    break;
                }
                else if(check()==0){
                   
                    cout<<"Game Draw ";
                    break;
                }
                switchplayer();
                

            }
            Board(); 
            break;
        }
                 break;


         case 2 : cout<<"You Entered Tournment mode :"<<endl;
          while(true)
        {

            resetGame();
            while(true)
            {
                Board();

                cout<< playerturn <<" player turn \n" ;

                cout<<"Enter row and column number : \n";
                cin>>rows>>columns;

                if (rows <0 || rows >2 || columns <0 || columns > 2)
                {
                    
                    cout<<"In valid row column choice ;";
                    continue;
                }
                

                selectedcell = table[rows][columns];

                if(selectedcell != '*')
                {
                    cout<<"already taken \n";
                    continue;
                }
                else
                {
                    table[rows][columns]=playerturn;
                }

                if (check() == 1) 
                {
                    gameOver = true;
                    break;
                }else if(check()==0){
                    gameOver = true;
                    cout<<"Game Draw ";
                    break;
                }
                switchplayer();
                

            }
            Board();
            Scoreboardcond();
            Scoreboard();
            cout<<"Do you want another match ? y/n :: ";
            char choice;
            cin>>choice;
                if (choice == 'y' || choice == 'Y')
                {
                continue;
                }
            
            break;

        }
            break;
        case 3 :
            {
                computer_vs_player();
                return 0;
            }
                break;
        case 4 :     while(true)
        {

            resetGame1();
            while(true)
            {
                Board1();

                cout<< playerturn1 <<" player turn \n" ;

                cout<<"Enter row and column number : \n";
                cin>>rows>>columns;

                if (rows <0 || rows >3 || columns <0 || columns > 3)
                {
                    
                    cout<<"In valid row column choice ;";
                    continue;
                }
                

                selectedcell = table1[rows][columns];

                if(selectedcell != '*')
                {
                    cout<<"already taken \n";
                    continue;
                }
                else
                {
                    table1[rows][columns]=playerturn1;
                }

                if (check1() == 1) 
                {
                    gameOver = true;
                    break;
                }else if(check1()==0){
                    gameOver = true;
                    cout<<"Game Draw ";
                    break;
                }
                switchplayer1();
                

            }
            Board1();
            Scoreboardcond();
            Scoreboard();
            cout<<"Do you want another match ? y/n :: ";
            char choice;
            cin>>choice;
            if (choice == 'y' || choice == 'Y'){
                continue;
            }
            
            break;

        }

            break;



        case 5 :
            break;

    
         default : cout<<"You did not selected any option ";
            break;
        }

}
void computer_vs_player()
{
string player_name;
cout << "Enter your name : ";
cin>> player_name;
while(true)
{
  system("cls");
  show_board();
  if(count_board('X') == count_board('O'))
  {
    cout<< player_name << " 's Turn " <<endl;
    get_x_player_choice();
  }
  else{
    get_computer_choice();
  }
  char winner = check_winner();
  if(winner == 'X')
  {
    system("cls");
    show_board();
    cout<< player_name <<" " << "won the game"<< endl;
    break;
  }
  else if(winner == 'O')
  {
    system("cls");
    show_board();
    cout << "Computer won the Game" << endl;
    break;
  }
  else if(winner == 'D')
  {
    cout << "Game Draw" << endl;
    break;
  }
}
}



void get_computer_choice()
{
    srand(time(0));
    int choice;
    do{
        choice = rand()%10;
    }
    while(board[choice] !=' ');
    board[choice] = 'O';
}



void get_x_player_choice()
{
    while(true){
        cout<<"select position (1-9):";
        int choice;
        cin >> choice;
        choice--;
        if(choice < 0 || choice > 9)
        {
            cout<<"plz select choice from 1-9"<<endl;
        }
        else if(board[choice] != ' ')
        {
          cout<< " plz select empty location"<<endl;
        }
        else {
            board[choice] = 'X';
            break;
        }
    }
}



int count_board(char symbol)
{
    int total = 0;
    for(int i=0 ; i<9 ; i++)
    {
        if(board[i] == symbol) 
        total += 1;
    } 
    return total;
}



char check_winner() {

    if(board[0] == board[1] && board[1] == board[2] && board[0] != ' ')
    return board[0];
    if(board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
    return board[3];
    if(board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
    return board[6];


    if(board[0] == board[3] && board[3] == board[6] && board[0] != ' ' )
    return board[0];
    if(board[1] == board[4] && board[4] == board[7] && board[1] != ' ' )
    return board[1];
    if(board[2] == board[5] && board[5] == board[8] && board[2] != ' ' )
    return board[2];


    if(board[0] == board[4] && board[4] == board[8] && board[0] != ' ' )
    return board[0];
    if(board[2] == board[4] && board[4] == board[6] && board[2] != ' ' )
    return board[2];


    if(count_board('X') + count_board('O') < 9)
    return 'C';
    else
    return 'D';
       

}



void show_board() 
{
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[0]  << "  |   " << board[1] << "  |   " << board[2] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "--------------------"<<endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[3]  << "  |   " << board[4] << "  |   " << board[5] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "--------------------"<<endl;
    cout << "   " << "   |   " << "   |   " << endl;
    cout << "   " << board[6]  << "  |   " << board[7] << "  |   " << board[8] << endl;
    cout << "   " << "   |   " << "   |   " << endl;
}