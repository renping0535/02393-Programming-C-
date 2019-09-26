#include <iostream>

using namespace std;

typedef enum {wood,stone,player} material;
typedef struct
{
    int x;
    int y;
    bool isWall, isPlayer;
    material type;
} field;

char character(material m);

int main(){

    // the number of row and column of the playground
    int n = 12;
    int m = 16;
    // initial position of the player
    int pn = 5;
    int pm = 5;

	// dynamically allocated memory
	field **playground = new field*[n];
	for (int i=0; i<n; i++){
		playground[i] = new field[m];
	}

    for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			// Note here how we access an element of an array
			// with playground[i][j]
			// and how we access the fields of a (field) record
			// with .x, .y, etc.
			playground[i][j].x=i;
			playground[i][j].y=j;
            playground[i][j].isWall= (i==0&&j!=3||i==(n-1)||(j==0)||j==(m-1));
            playground[i][j].isPlayer = (i==pn&&j==pm);
			if (playground[i][j].isWall){
				playground[i][j].type=stone;
			}
			else{
				playground[i][j].type=wood;
			}
			if (playground[i][j].isPlayer)
            {
                playground[i][j].type = player;
            }
		}
	}
	// printing the playground
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			cout << character(playground[i][j].type);
		}
		cout << endl;
	}


    int flag = 1;
    while (flag)
    {
	char in_str;
//	cout << "enter the command:" <<endl;
	cin >> in_str;

	switch(in_str)
	{
		case 'l':
		{
			pm = pm-1;
			if (pm ==0)
                pm = 1;
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
		// Note here how we access an element of an array
		// with playground[i][j]
		// and how we access the fields of a (field) record
		// with .x, .y, etc.
					playground[i][j].x=i;
					playground[i][j].y=j;
					playground[i][j].isWall= (i==0&&j!=3||i==(n-1)||(j==0)||j==(m-1));
					playground[i][j].isPlayer = (i==pn&&j==pm);
					if (playground[i][j].isWall){
						playground[i][j].type=stone;
					}
					else{
						playground[i][j].type=wood;
					}
					if (playground[i][j].isPlayer)
					{
						playground[i][j].type = player;
					}
				}
			}
			// printing the playground
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					cout << character(playground[i][j].type);
				}
				cout << endl;
			}
			break;
		}
		case 'r':
		{
			pm = pm+1;
			if(pm==15)
                pm=14;
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
		// Note here how we access an element of an array
		// with playground[i][j]
		// and how we access the fields of a (field) record
		// with .x, .y, etc.
					playground[i][j].x=i;
					playground[i][j].y=j;
					playground[i][j].isWall= (i==0&&j!=3||i==(n-1)||(j==0)||j==(m-1));
					playground[i][j].isPlayer = (i==pn&&j==pm);
					if (playground[i][j].isWall){
						playground[i][j].type=stone;
					}
					else{
						playground[i][j].type=wood;
					}
					if (playground[i][j].isPlayer)
					{
						playground[i][j].type = player;
					}
				}
			}
			// printing the playground
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					cout << character(playground[i][j].type);
				}
				cout << endl;
			}
			break;
		}
		case 'u':
		{
			pn = pn-1;

			if(pn==0)
            {
                if(pm==3)
                    pn = 0;
                else
                    pn = 1;
            }

//            if(pn==0&&pm==3)
//                pn=0;
//            else
//                pn = 1;


			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
		// Note here how we access an element of an array
		// with playground[i][j]
		// and how we access the fields of a (field) record
		// with .x, .y, etc.
					playground[i][j].x=i;
					playground[i][j].y=j;
					playground[i][j].isWall= (i==0&&j!=3||i==(n-1)||(j==0)||j==(m-1));
					playground[i][j].isPlayer = (i==pn&&j==pm);
					if (playground[i][j].isWall){
						playground[i][j].type=stone;
					}
					else{
						playground[i][j].type=wood;
					}
					if (playground[i][j].isPlayer)
					{
						playground[i][j].type = player;
					}
				}
			}
			// printing the playground
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					cout << character(playground[i][j].type);
				}
				cout << endl;
			}
			break;
		}
		case 'd':
		{
			pn = pn+1;
			if(pn==11)
                pn=10;
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
		// Note here how we access an element of an array
		// with playground[i][j]
		// and how we access the fields of a (field) record
		// with .x, .y, etc.
					playground[i][j].x=i;
					playground[i][j].y=j;
					playground[i][j].isWall= (i==0&&j!=3||i==(n-1)||(j==0)||j==(m-1));
					playground[i][j].isPlayer = (i==pn&&j==pm);
					if (playground[i][j].isWall){
						playground[i][j].type=stone;
					}
					else{
						playground[i][j].type=wood;
					}
					if (playground[i][j].isPlayer)
					{
						playground[i][j].type = player;
					}
				}
			}
			// printing the playground
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					cout << character(playground[i][j].type);
				}
				cout << endl;
			}
			break;
		}
		case 'q':
			flag = 0;
			break;
	}
    }

	
	
	
	// when memory is dynamically allocated, you have to deallocate it explicitly!
	for (int i=0; i<n; i++){
		delete[] playground[i];
	}
	delete[] playground;

	return 0;

}

char character(material m)
{
    switch(m)
    {
    case wood:
        return ' ';
    case stone:
        return '*';
    case player:
        return 'O';
    default:
        return '?';
    }
}
