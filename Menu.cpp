
//Programs menu
int menu()
{
    int choice;
    cout <<"\t\tMain Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Admin\n"
         <<"\t\t2. Clients\n"
         <<"\t\t3. Tellers\n" 
		 <<"\t\t4. Encrypt and Decrypt data\n"                      
         <<"\t\t5. Exit and Save to File\n"
         
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int main(int argc, char** argv) {
	
	int option;
	Client cl[100];
	int clCounter = 0;
	
	do
	{
		system("CLS");
		option = menu();
		switch(option)
		{
			case 1:Admin();
				break;
			case 2: Clients();
				break;
			case 3: Tellers();
				break;
			case 4: EncDec ();
				break;
			case 5: cout <<"Exiting\n"; 
				break;
			default: cout <<"Invalid choice!\n";
		}
		system("PAUSE");
	}while (option != 5);
	
	
	return 0;
}
