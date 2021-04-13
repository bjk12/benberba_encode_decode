#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
int a[50],c[50],m,x,i=0,a1,n=35,e=5,d=5;//(n,e)为公钥，(n,d)为私钥 


while(1)
{printf("    我是爱撒娇、会解密的小霸，呐呐，我要抱抱~~~(*＾-＾*)\n") ;
printf("    主人，请根据您想获得的明文格式选择1或2并按回车键确认：\n    1.数字类\n    2.字母类\n");
scanf("%d",&m);
 switch(m)
   {     case 1: printf("  亲爱的主人，小霸提醒你：数字之间记得要用小空格隔开呦<(￣ˇ￣)/\n") ;
        while(1)
           {
           printf("  请输入您接收到的密文并以“110”作为终止符：\n（ps：现以数字格式输出，如果想改为字母格式请重启小霸）\n");
            for(i=0;;i++)
                {
			    scanf("%d",&a[i]);
			    if (a[i]>34) {a1=i;break;}
		      	}
			for(i=0;i<a1;i++)
		     	{
                x=pow(a[i],d);
                c[i]=x%n;} 
			    printf("明文为：\n") ;
            for(i=0;i<a1;i++)
                printf("  %d",c[i]) ;
                printf("\n\n") ; 
            printf("  主人，你是从小奔那里来的吧？······\n") ;
             printf("  唉？！主人你好坏，人家才没有喜欢他的意思啊，你不要乱说哦( *︾▽︾)【羞】\n") ;
            system ("pause&&cls");
            getchar( ); 
           }
	    case 2: printf("  亲爱的主人，小霸提醒你：数字之间记得要用小空格隔开呦<(￣ˇ￣)/\n") ;
		   while(1)
           {
           printf("  请输入您接收到的密文并以“110”作为终止符：\n（ps：现以字母格式输出，如果想改为数字格式请重启小霸）\n");
            for(i=0;;i++)
                {
			    scanf("%d",&a[i]);
			    if (a[i]>34) {a1=i;break;}
			    }
			for(i=0;i<a1;i++)
			  { 
			  x=pow(a[i],d);
              c[i]=x%n;
			  if(c[i]==32) c[i]-=96;
			  } 
			printf("密文为：\n") ;
            for(i=0;i<a1;i++)
               printf("%c",c[i]+96) ;
            printf("\n\n") ;
             printf("  主人，你知道吗？虽然功能简单，但我和小奔可是RSA算法哦！\n") ;
             printf("  好奇怪哦，为什么只有我才能理解小奔的心思呢？o(*￣︶￣*)o【得意】\n") ;
            system ("pause&&cls");
           }
		
		default:
		printf("   主人你好笨哦，嘻嘻o(^▽^)o，没关系，让小霸陪你再试一次，好不好嘛？\n "); 
		
    } 
}

}
