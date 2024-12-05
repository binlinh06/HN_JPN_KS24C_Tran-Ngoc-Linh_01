#include<stdio.h>
int main(){
	int choice,n,value,position,x;
	int arr[100];
	int found=0;
	
	do{
		printf("\n-------------MENU-------------\n");
		printf("1.Nhap so phan tu va gan gia tri cho mang\n");
		printf("2.In ra gia tri cac phan tu trong mang theo dang(arr[0],arr[1]),...\n");
		printf("3.Dem so luong cac so nguyen to co trong mang\n");
		printf("4.Tim gia tri nho thu hai trong mang \n");
		printf("5.Thêm mot phan tu vào vi trí ngau nhiên trong mang, phan tu moi thêm vào mang và vi trí thêm vào phai do nguoi dùng nhap vào\n");
		printf("6.Xoa phan tu tai mot vi tri cu the(nguoi dung nhap vi tri)\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Cho nguoi dung nhap vao mot phan tu,tim kiem xem phan tu do co ton tai trong mang hay khong\n");
		printf("9.Xóa toàn bo phan tu trùng lap trong mang và hien thi toàn bo phan tu doc nhat có o trong mang\n");
		printf("10.Dao nguoc thu tu cua cac phan tu co trong mang\n");
		printf("11.Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("Vui long nhap so phan tu: ");
				scanf("%d",&n);
				if(n<0){
					printf("LOI!VUI LONG NHAP LAI\n");
					break;
				}
				for(int i=0;i<n;i++){
					printf("Phan tu thu %d la: ",i+1);
					scanf("%d",&arr[i]);
				}
				break;
			}
			
			case 2:{
				for(int i=0;i<n;i++){
					printf("Phan tu arr[%d] la: %d\n",i,arr[i]);
				}
				break;
			}
			
			case 3:{
				if(n <= 0){
					printf("Mang chua duoc tao \n");
					break;
				}else{
					printf("Cac phan tu la so nguyen to trong mang la : ");
					for(int i = 0 ; i < n ; i++){
						int number = arr[i];
						int isPrime = 1;
						if(number < 2){
							isPrime = 0;
						}else{
							for(int i = 2 ; i*i <= number ; i++){
								if(number % i == 0){
									isPrime = 0;
									break;
								}
							}
						}
						if(isPrime){
							printf("%d \t",number);
							found = 1;
						}
					}
					if(!found){
						printf("Khong co so nguyen trong mang \n");
					}
				}
				break;
			}

			case 4:{
				int nhoNhat;
				printf("Gia tri nho thu 2 trong mang la: ");
				nhoNhat=arr[0];
				for (int i=1;arr[i]<nhoNhat;i++){
					
			 }
				break;
			}
			case 5:{
				printf("Vui long nhap phan tu muon them: ");
	            scanf("%d",&value);
        	    printf("Vui long nhap vi tri muon them: ");
        	    scanf("%d",&position);
        	    if (position < 1 || position > n + 1) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
        	    for(int i=n;i>=position;i--){
      	            arr[i]=arr[i-1];
        	    }
        	    arr[position-1]=value;
        	    n++;    
         	    break;
			}
		    case 6:{
		    	printf("Vui long nhap vi tri muon xoa: ");
	            scanf("%d",&position);
	            if (position < 1 || position > n + 1) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
	            for(int i=position-1;i<n;i++){
		            arr[i]=arr[i+1];
	            }
	            n--;
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				printf("Vui long nhap 1 so bat ki de tim vi tri:");
                scanf("%d",&x);
                for(int i=0;i<n;i++){
                	if(arr[i]==x){
                		printf("Vi tri phan tu can tim o vi tri %d\n",i+1);
                		found=1;
					}
				}
				if(found==0){
					printf("Khong tim thay phan tu %d trong mang.\n", x);
				}else{
					printf("\n");
				}
				break;
			}
			
			case 9:{
				
				break;
			}
			
			case 10:{
					for(int i=n-1;0<=i;i--){
					printf("Phan tu arr[%d] la: %d\n",i,arr[i]);
				}
				break;
			}
			
			case 11:{
				printf("THOAT!");
				return 0;
			}
			default:
				printf("VUI LONG NHAP LAI!!!!");
		}
	}while(choice!=11);
	return 0;
}
