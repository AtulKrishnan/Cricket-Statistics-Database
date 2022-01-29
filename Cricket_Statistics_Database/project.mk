a.exe: Client_File.o Display_Records.o Options_File.o Add_A_Record.o Add_To_File.o Delete_A_Record.o Modify_A_Record.o
	gcc Client_File.o Display_Records.o Options_File.o Add_A_Record.o Add_To_File.o Delete_A_Record.o Modify_A_Record.o

Client_File.o: Client_File.c
	gcc -c Client_File.c

Display_Records.o: Display_Records.c
	gcc -c Display_Records.c 

Options_File.o: Options_File.c
	gcc -c Options_File.c

Add_A_Record.o: Add_A_Record.c
	gcc -c Add_A_Record.c

Add_To_File.o: Add_To_File.c
	gcc -c Add_To_File.c

Delete_A_Record.o: Delete_A_Record.c
	gcc -c Delete_A_Record.c

Modify_A_Record.o: Modify_A_Record.c
	gcc -c Modify_A_Record.c
