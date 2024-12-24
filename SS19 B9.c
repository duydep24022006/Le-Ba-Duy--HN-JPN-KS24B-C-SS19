#include <stdio.h>
#include <string.h>

typedef struct {
	int id;
	char name[50];
	int age;
	char phoneNumber[50];
}studen;
studen studenMenu[100]={
	{1,"nguyen A",23,"034298723"},
	{2,"le Van",20,"0349834"},
	{3,"ngo B",99,"0934578"},
	{4,"ba Duy",5,"03454612"},
	{5,"ninh pon",100,"0983489734"}
};
int studentsNumber=5;
int *studentsNumberptr=&studentsNumber;

void menu();
void output();
int main(){
	int choice;
	do{
		menu();
		scanf("%d",&choice);
		switch(choice){
			case 1:
				output();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				printf("cam on ban da su dung menu cua minh");
				return 0;
		default:
			printf("loi cu phap");
}

	}while(1);
}

void menu(){
	printf("\n--------------MENU--------------");
	printf("\n1. Hien thi danh sach sinh vien");
	printf("\n2. Them sinh vien");
	printf("\n3. Sua thong tin sinh vien");
	printf("\n4. Xoa sinh vien");
	printf("\n5. Tim kiem sinh vien");
	printf("\n6. Sap xep danh sach sinh vien");
	printf("\n7. Thoat");
	printf("\nLua chon cua ban:");
}

void outputStudents(){
	for(int i=0;i<studentsNumber;i++){
		printf("\nid:%d, ten:%s, tuoi:%d, sdt:%s",studenMenu[i].id,studenMenu[i].name,studenMenu[i].age,studenMenu[i].phoneNumber);
	}
}

void inputStudents(int *index){
	
	printf("moi ban nhap id :");
	scanf("%d",&studenMenu[*index].id);
	
	printf("moi ban nhap ten :");
	fflush(stdin);
	fgets(studenMenu[*index].name,sizeof(studenMenu[*index].name),stdin);
	
	printf("moi ban nhap tuoi :");
	scanf("%d",&studenMenu[*index].age);
	
	printf("moi ban nhap so dien thoai :");
	fflush(stdin);
	fgets(studenMenu[*index].phoneNumber,sizeof(studenMenu[*index].phoneNumber),stdin);
}

void addIndex(int *index){
	if(*index<0 || *index>99 || studentsNumber>=99){
		printf("vi tri khong hop le hoac ban da nhap gioi han ");
		return -1;
	}if(*index>studentsNumber){
		studenMenu[*index]=
	}
	
}
