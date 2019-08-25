#include <iostream>
using namespace std;

int main() {
    int test_cases;cin>>test_cases;
    for(int i=1;i<=test_cases;i++){
        int number_of_walls,previa=0,current=0,high=0,low=0;
        cin>>number_of_walls;
        for(int j=0;j<number_of_walls;j++){
            cin>>current;
            if(j == 0)
                previa = current;
            if(current>previa)
                high++;
            else if(current<previa)
                low++;
            previa=current;
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;}
	return EXIT_SUCCESS;}
