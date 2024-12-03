#include <stdio.h>

int main()
{
	int choose;
	int i,j,n,check,num,location,temp;
	int max; 
	int arr[100]; 
	while(choose!=9){
	
	printf("\nMENU\n");
	printf("1.Nhap so phan tu va gia tri cac phan tu\n");
	printf("2.In ga tri cac phan tu dang quan ly\n");
	printf("3.In ra gia tri lon nhat cua mang\n");
	printf("4.In ra cac phan tu la so nguyen to trong mang\n");
	printf("5.Them mot phan tu vao trong mang\n");
	printf("6.Xoa mot phan tu trong mang\n");
	printf("7.Sap xep mang theo thu tu tang dan\n");
	printf("8.Tim kiem phan tu va in ra vi tri index cua phan tu do\n"); 
	printf("9.Thoat\n");
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
	switch (choose){
		case 1:
		    printf("Moi ban nhap so phan tu trong mang ban muon:");
			scanf("%d",&n);
			for(i=0;i<n;i++){
				printf("Moi ban nhap gia tri cho phan tu thu %d:",i+1);
				scanf("%d",&arr[i]); 
			}
		break;
		case 2:
		   	printf("Cac phan tu trong mang cua ban la:\n");
		   	for(i=0;i<n;i++) {	   
		        printf("%d ",arr[i]); 
	     	}
	    break;
		case 3:
			max=arr[0];
			for(i=1;i<n;i++){
				if(max<arr[i]) {
					max=arr[i]; 
				}				 
			}
			printf("Gia tri lon nhat cua mang la:%d",max); 
		break;
		case 4:
			check =0;
			printf("Mang co cac phan tu la do nguyen to la:\n"); 
		    for(i=0;i<n;i++){
				if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%4!=0 && arr[i]%5!=0 && arr[i]%6!=0 && arr[i]%7!=0 && arr[i]%8!=0 && arr[i]%9!=0 || arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7) {
					printf("%d ",arr[i]);
					check++; 
				}
			}
			if(check==0) {
				printf("Ham khong co so nguyen to"); 
			} 
	    break;
		case 5:
			printf("Moi ban nhap gia tri can them:"); 
		    scanf("%d",&num);
			printf("Moi ban nhap vi tri can them:"); 
		    scanf("%d",&location);  
			for(i=n;i>=location;i--) {
				arr[i]=arr[i-1];	
			}
			arr[location-1]=num;
			n++;
			printf("Mang sau khi chen la:\n");
			for(i=0;i<n;i++) {	 
			    printf("%d ",arr[i]); 
         	}
        break;
		case 6:
		   	printf("Moi ban nhap vi tri muon xoa:");
			scanf("%d",&location);
			for(i=location-1;i<n;i++) {
				arr[i]=arr[i+1];
			}
			n--;
			printf("Mang sau khi xoa la:\n");
			for(i=0;i<n;i++) {	 
			    printf("%d ",arr[i]); 
         	}
        break;
		case 7: 
		    for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
				    }
	        	}
	    	}
	    	printf("Cac phan tu sau khi sap xep la:\n"); 
	    	for(i=0;i<n;i++) {
				printf("%d ",arr[i]);
			}
		break;
		
		 
        case 8: 
		    printf("Moi ban nhap phan tu ban muon tim kiem:");
			scanf("%d",&num);
			check=0; 
			for(i=0;i<n;i++) {
				if(num==arr[i]) {
					printf("Phan tu %d ma ban muon tim kiem nam o vi tri:%d",num,i+1);
					check++;
					 
				}
			} 			
			if(check==0) {
				printf("Mang khong co phan tu ma ban muon tim kiem"); 
			}
		break;
		case 9: 
		break;	 
	}
	printf("HEN GAP LAI");
	}
	return 0;

 }

