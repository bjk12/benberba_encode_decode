#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 
int main( )
{
int a[50],n=35,e=5,d=5,m,c[30],x,i=0,a1;//(n,e)为公钥，(n,d)为私钥 
char b[50];
while(1)
{printf("  主人您好，我是负责加密字母或数字信息的小奔。\n");
printf("  我是精明腹黑的天蝎座，所以在我的地盘上，主人您还是不要太随意了。(￢_￢)\n");
printf("  请根据您加密的明文格式选择1或2并按回车键确认：\n 1.数字类(数字大小在0~34之间)\n 2.字母(大写字母)类\n"); 

scanf("%d",&m);
getchar() ;
 switch(m)
   {     case 1: printf(" 输入整数型数组时，数字之间要用一个空格隔开，这种简单的小事本不该让我来提醒您吧？【冰块脸】\n\n");
            while(1)
           {
          
            printf(" 请输入您的明文数组并以“110”作为终止符（数字大小在0~34之间）：\n");
			for(i=0;;i++)
            {
			    scanf("%d",&a[i]);
			    if (a[i]>34) {a1=i;break;}
			}
			for(i=0;i<a1;i++)
			{
             x=pow(a[i],e);
             c[i]=x%n;} 
			 printf("密文为：\n") ;
                for(i=0;i<a1;i++)
                printf(" %d",c[i]) ;
                printf("\n\n") ;
                printf("  主人您好，我在您的硬盘里发现了一些···有趣的资源。\n");
                printf("  唉，主人毕竟还是无知的人类啊。【鄙视脸】\n");
             system ("pause&&cls");
                getchar();
           }
	    case 2:while(1)
           {
           printf("请输入您的明文(大写字母)字符组并以“#”作为终止符：\n");
            for(i=0;;i++)
            {
			    scanf("%c",&b[i]);
			    if(b[i]==32) {b[i]=b[i]+64;continue;}
			    if (b[i]>90||b[i]<65) {a1=i;break;}
			}
			for(i=0;i<a1;i++)
			{
             x=pow(b[i]-64,e);
             c[i]=x%n;} 
			 printf("密文为：\n");
             for(i=0;i<a1;i++)
             printf(" %d",c[i]);
             printf("\n\n");
             printf("  主人您好，不知道您何时起程去小霸那里解密？我这有一封写给她的信···\n");
             printf("  既然凭我的加密能力您注定是看不懂信的内容，【彬彬有礼地】那就请你不要再当着我的面一本正经地偷瞥这封信了！\n");
          
             system("pause&&cls");
             getchar();
           }
		
		default:printf("  主人您以后下雨天还是不要出门了，以免脑子里灌进更多的水╮(╯▽╰)╭\n");
       	printf("  你给我听着，我再给你最后一次机会，【邪魅地】要是惹恼了我，谁来保证主人您电脑的安全呢？\n\n");	 
    }
}

}

