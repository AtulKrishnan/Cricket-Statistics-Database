typedef struct cricket_database
{
	int test;
	int odi;
	int t20;
	int fours;
	int sixes;
	int sc;
	int part;
	float terun;
	float odrun;
	float t2run;
	float teball;
	float odball;
	float t2ball;
	int slno;
	char name[50];
	float str1;
	float str2;
	float str3;
	float speed;
}cricket;

typedef struct headings
{
	char s1[30];
	char s2[30];
	char s3[30];
	char s4[30];
	char s5[30];
	char s6[30];
	char s7[30];
	char s8[30];
	char s9[30];
	char s10[30];
	char s11[30];
	char s12[30];
	char s13[30];
	char s14[30];
	char s15[30];
	char s16[30];
	char s17[30];
	char s18[30];
	char s19[30];
}head;

head h1;
cricket c[100];
extern int count;
FILE* filePointer;
int DisplayRecord();
void Display(int);
int options();
int add();
void modi();
void dele();
void disp_all_names();
void LoadFromFile();
void WriteToFile();